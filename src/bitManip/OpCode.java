/**
 * Contains classes for bit manipulation
 */
package bitManip;

import java.util.ArrayList;

/**
 * Holds opcodes and their mneumonics
 * @author Roland Fong
 */
public class OpCode {
	
	ArrayList<Mneumonic> mn;//short for mneumonic
	Mneumonic mneumonic;//this mneumonic
	BitString destination;//d
	BitString literal;//k
	BitString fileReg;//f
	BitString bit;//b
	String memLocation;//location in program memory
	
	/**
	 * Initializes opcodes
	 */
	public OpCode() {
		mn = new ArrayList<Mneumonic>();
		mn.add(new Mneumonic("ADDWF", "000111dfffffff"));
		mn.add(new Mneumonic("ANDWF", "000101dfffffff"));
		mn.add(new Mneumonic("CLRF", "0000011fffffff"));
		mn.add(new Mneumonic("CLRW", "0000010xxxxxxx"));
		mn.add(new Mneumonic("COMF", "001001dfffffff"));
		mn.add(new Mneumonic("DECF", "000011dfffffff"));
		mn.add(new Mneumonic("DECFSZ", "001011dfffffff"));
		mn.add(new Mneumonic("INCF", "001010dfffffff"));
		mn.add(new Mneumonic("INCFSZ", "001111dfffffff"));
		mn.add(new Mneumonic("IORWF", "000100dfffffff"));
		mn.add(new Mneumonic("MOVF", "001000dfffffff"));
		mn.add(new Mneumonic("MOVWF", "0000001fffffff"));
		mn.add(new Mneumonic("NOP", "0000000xx00000"));
		mn.add(new Mneumonic("RLF", "001101dfffffff"));
		mn.add(new Mneumonic("RRF", "001100dfffffff"));
		mn.add(new Mneumonic("SUBWF", "000010dfffffff"));
		mn.add(new Mneumonic("SWAPF", "001110dfffffff"));
		mn.add(new Mneumonic("XORWF", "000110dfffffff"));
		mn.add(new Mneumonic("BCF", "0100bbbfffffff"));
		mn.add(new Mneumonic("BSF", "0101bbbfffffff"));
		mn.add(new Mneumonic("BTFSC", "0110bbbfffffff"));
		mn.add(new Mneumonic("BTFSS", "0111bbbfffffff"));
		mn.add(new Mneumonic("ADDLW", "11111xkkkkkkkk"));
		mn.add(new Mneumonic("ANDLW", "11001kkkkkkkkk"));
		mn.add(new Mneumonic("CALL", "100kkkkkkkkkkk"));
		mn.add(new Mneumonic("CLRWDT", "00000001100100"));
		mn.add(new Mneumonic("GOTO", "101kkkkkkkkkkk"));
		mn.add(new Mneumonic("IORLW", "111000kkkkkkkk"));
		mn.add(new Mneumonic("MOVLW", "1100xxkkkkkkkk"));
		mn.add(new Mneumonic("RETFIE", "00000000001001"));
		mn.add(new Mneumonic("RETLW", "1101xxkkkkkkkk"));
		mn.add(new Mneumonic("RETURN", "00000000001000"));
		mn.add(new Mneumonic("SLEEP", "00000001100011"));
		mn.add(new Mneumonic("SUBLW", "11110xkkkkkkkk"));
		mn.add(new Mneumonic("XORLW", "111010kkkkkkkk"));
		destination = new BitString("");
		literal = new BitString("");
		fileReg = new BitString("");
		bit = new BitString("");
	}
	
	/**
	 * Sets the mneumonic from the given BitString
	 * @param opCode
	 */
	public void setMneumonicFromBitString(BitString opCode)	{
		for(int i = 0; i < mn.size(); i++)	{//cycle through array
			Boolean match = true;
			for(int j = 0; j < 14; j++)	{//cycle through individual characters in string
				char testChar = mn.get(i).getOpCode().charAt(j);
				if(testChar == '0' || testChar == '1')	{
					if(testChar != Character.forDigit(opCode.getBit(j + 2), 10))	{
						match = false;
					}
				}
			}
			if(match == true)	{
				mneumonic = mn.get(i);
			}
			else	{
				match = true;//reset to test next instruction
			}
		}
	}
	
	/**
	 * Sets the operands for the opcode specified by the BitString
	 * @param opCode
	 */
	public void setOperandsFromBitString(BitString opCode)	{
		for(int i = 0; i < mneumonic.getOpCode().length(); i++)	{
			if(mneumonic.getOpCode().charAt(i) == 'd')	{//if this is the destination bit
				if(opCode.getBit(i) == 1)	{
					destination = new BitString("1");//to file reg
				}
				else	{//if 0 is at bit
					destination = new BitString("0");//to working reg
				}
			}
			else if(mneumonic.getOpCode().charAt(i) == 'f')	{//if this is a file reg bit
				fileReg.append(opCode.getBit(i + 2));
			}
			else if(mneumonic.getOpCode().charAt(i) == 'k')	{//if this is a literal
				literal.append(opCode.getBit(i + 2));
			}
			else if(mneumonic.getOpCode().charAt(i) == 'b')	{//if this is a bit location
				bit.append(opCode.getBit(i + 2));
			}
			//NOTE: may want to reduce opcode from 16 to 14 bits and fix all bugs (i.e. i+ 2)
			//if 1, 0, or X, ignore
		}
	}

	/**
	 * @return the mneumonic
	 */
	public Mneumonic getMneumonic() {
		return mneumonic;
	}

	/**
	 * @param mneumonic the mneumonic to set
	 */
	public void setMneumonic(Mneumonic mneumonic) {
		this.mneumonic = mneumonic;
	}

	/**
	 * @return the destination
	 */
	public BitString getDestination() {
		return destination;
	}

	/**
	 * @param destination the destination to set
	 */
	public void setDestination(BitString destination) {
		this.destination = destination;
	}

	/**
	 * @return the literal
	 */
	public BitString getLiteral() {
		return literal;
	}

	/**
	 * @param literal the literal to set
	 */
	public void setLiteral(BitString literal) {
		this.literal = literal;
	}

	/**
	 * @return the fileReg address
	 */
	public BitString getFileReg() {
		return fileReg;
	}

	/**
	 * @param fileReg address to set
	 */
	public void setFileReg(BitString fileReg) {
		this.fileReg = fileReg;
	}

	/**
	 * @return the bit
	 */
	public BitString getBit() {
		return bit;
	}

	/**
	 * @param bit the bit to set
	 */
	public void setBit(BitString bit) {
		this.bit = bit;
	}

	/**
	 * @return the memory location
	 */
	public String getMemLocation() {
		return memLocation;
	}

	/**
	 * @param memLocation the memory location to set
	 */
	public void setMemLocation(String memLocation) {
		this.memLocation = memLocation;
	}

}
