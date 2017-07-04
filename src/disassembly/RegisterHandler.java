/**
 * Contains classes to handle disassembly
 */
package disassembly;

import java.io.BufferedReader;
import java.io.File;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import bitManip.BitString;

/**
 * Handles registers and their bits
 * @author Roland Fong
 */
public class RegisterHandler {
	ArrayList<FileRegister> fileRegs;
	File include;
	String pic;//the pic that this handler refers to (ex. p16f887)
	int banks;
	private BufferedReader br;
	
	/**
	 * Register Handler is initialized to hold registers and their corresponding bits for specified PIC Microcontroller
	 * @param pic
	 */
	public RegisterHandler(String pic)	{
		//READ THE FILE
		fileRegs = new ArrayList<FileRegister>();
		try	{
			br = new BufferedReader(new InputStreamReader(this.getClass().getClassLoader().getResourceAsStream("include/"+pic.toUpperCase()+".INC")));
		} catch (Exception e)	{
			System.out.println("AAAHH!!!! Include file missing");
			e.printStackTrace();
			try	{
				br = new BufferedReader(new InputStreamReader(this.getClass().getClassLoader().getResourceAsStream("include/"+pic.toLowerCase()+".inc")));
			} catch (Exception e1)	{
				System.out.println("AAAHH!!!! Include file still missing");
				e1.printStackTrace();
			}
		}
		String sCurrentLine = "";
		String[] lineContents;//example, [STATUS, EQU, H'0003'] or [;----, STATUS, Bits, ----------------]
		Boolean inBank = true;//true if finding registers
		Boolean inReg = false;//true if finding bits
		int currentBank = 0;
		FileRegister currentRegister = null;
		Pattern bankPattern = Pattern.compile("Bank\\d");//looks for BANK#
		Matcher bankMatcher;
		Pattern regBitPattern = Pattern.compile("EQU?");//register or bit
		Matcher regBitMatcher;
		Pattern bitPattern = Pattern.compile("Bits?");
		Matcher bitMatcher;
		Pattern endPattern = Pattern.compile("RAM Definitions?");
		Matcher endMatcher;
		try {
			while((sCurrentLine = br.readLine()) != null)	{
				bankMatcher = bankPattern.matcher(sCurrentLine);
				regBitMatcher = regBitPattern.matcher(sCurrentLine);
				bitMatcher = bitPattern.matcher(sCurrentLine);
				endMatcher = endPattern.matcher(sCurrentLine);
				if(inBank)	{//if searching for register names
					if(bankMatcher.find())	{//see if there's a new bank
						Scanner scan = new Scanner(sCurrentLine);
						currentBank = Integer.valueOf(scan.findInLine("\\d"));
						//System.out.println("Bank in include: "+currentBank);
					}
					if(regBitMatcher.find())	{//see if there's a register definition to satisfy
						lineContents = sCurrentLine.split("\\s+");//stores register, EQU, and address into register
						/*
						 * 0 - register name (ex. "STATUS")
						 * 1 - "EQU"
						 * 2 - H'XXXX' address
						 */
						currentRegister = new FileRegister(lineContents[0]);
						Scanner scanAddress = new Scanner(lineContents[2]);
						//NOTE: This only covers the case of two digit hex number; if there are letters that are in the third or fourth digit, more cases must be covered
						String num = scanAddress.findInLine("\\d\\d\\d\\d");
						if(num == null)	{
							num = scanAddress.findInLine("\\d\\d\\d\\D");
						}
						if(num == null)	{
							num = scanAddress.findInLine("\\d\\d\\D\\d");
						}
						if(num == null)	{
							num = scanAddress.findInLine("\\d\\d\\D\\D");
						}
						BitString tempAddress = new BitString("");
						tempAddress.setStringFromHex(num);
						currentRegister.setAddress(tempAddress);//address in binary (16 bits)
						currentRegister.setBank(currentBank);
						//System.out.println("REGISTER: "+currentRegister.getName()+" "+currentRegister.getAddress()+" "+currentRegister.getBank());
						this.addRegister(currentRegister);
						}
					if(bitMatcher.find())	{//if now at reg bits, go to reg
						inBank = false;
						inReg = true;
						//System.out.println("Transition to inReg");
					}
				}
				if(inReg)	{//see if there's a bit definition to satisfy
					bitMatcher = bitPattern.matcher(sCurrentLine);
					//System.out.println("bitmatcher " +bitMatcher.find()+" line: "+sCurrentLine);
					if(bitMatcher.find())	{//see if there's a register that must be named for incoming bits
						lineContents = sCurrentLine.split("\\s+");//stores the name of the register along with extra stuff (;---, bits, ----)
						/*
						 * 0 - ;-----
						 * 1 - Register name
						 * 2 - "Bits"
						 * 3 - ---------------------
						 */
						currentRegister = findRegister(lineContents[1]);
						//System.out.println("Selected Register " + currentRegister.getName());
					}
					if(regBitMatcher.find())	{//upon finding "EQU" for bit names and addresses
						FileRegister tempReg = currentRegister;
						lineContents = sCurrentLine.split("\\s+");//stores the name of bit and address (ex. [RP0, EQU, H'0005'])
						/*
						 * 0 - bit name
						 * 1 - "EQU"
						 * 2 - H'XXXX' address
						 */
						Scanner scanAddress = new Scanner(lineContents[2]);
						String num = scanAddress.findInLine("\\d\\d\\d\\d");
						BitString tempAddress = new BitString("");
						tempAddress.setStringFromHex(num);
						tempReg.addBit(new RegisterBit(lineContents[0], tempAddress, tempReg));
						this.replaceRegister(tempReg);
					}
					if(endMatcher.find())	{//if RAM Definitions are reached, end loop
						//System.out.println("Finished finding Bitnames");
						inReg = false;
					}
				}
			}
			fileRegs.remove(1);//remove "F" - some other register is register 1
			fileRegs.remove(0);//remove "W" - INDF is really register 0
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
	
	/**
	 * Finds file register given its name
	 * @param sfr - the file register name
	 * @return the file register
	 */
	public FileRegister findRegister(String sfr)	{
		for(int i = 0; i < fileRegs.size(); i++)	{
			if(fileRegs.get(i).getName().contains(sfr))	{
				return fileRegs.get(i);
			}
		}
		//System.out.println("Can't find that register!");
		return null;//uh oh... doesn't exist!
	}

	/**
	 * Finds the file register given its bit address
	 * @param address - the file register's address
	 * @return the file register
	 */
	public FileRegister findRegister(BitString address)	{
		for(int i = 0; i < fileRegs.size(); i++)	{
			if(fileRegs.get(i).getAddress().toString().equals(address.toString()))	{
				return fileRegs.get(i);
			}
		}
		//System.out.println("Can't find dat register!");
		return null;//uh oh... doesn't exist!
	}
	
	/**
	 * Replaces the register of the same name
	 * @param sfr - the file register
	 */
	private void replaceRegister(FileRegister sfr)	{
		for(int i = 0; i < fileRegs.size(); i++)	{
			if(fileRegs.get(i).getName().equals(sfr.getName()))	{
				fileRegs.set(i, sfr);
			}
		}
	}

	/**
	 * Adds a file register to the array
	 * @param sfr - the file register
	 */
	private void addRegister(FileRegister sfr)	{
		fileRegs.add(sfr);
	}
}
