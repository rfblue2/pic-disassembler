/**
 * Handles the GUI
 */
package gui;

import java.awt.Color;
import java.awt.Container;
import java.awt.Cursor;
import java.awt.Dimension;
import java.awt.Font;
import java.awt.Toolkit;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;

import javax.swing.BorderFactory;
import javax.swing.BoxLayout;
import javax.swing.JButton;
import javax.swing.JComboBox;
import javax.swing.JFileChooser;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JTabbedPane;
import javax.swing.JTextArea;
import javax.swing.JTextPane;
import javax.swing.UIManager;
import javax.swing.text.AttributeSet;
import javax.swing.text.BadLocationException;
import javax.swing.text.Document;
import javax.swing.text.SimpleAttributeSet;
import javax.swing.text.StyleConstants;

import disassembly.BinaryHolder;
import disassembly.FileRegister;
import disassembly.RegisterBit;
import disassembly.RegisterHandler;

import bitManip.*;

/**
 * Main class of the program.  Handles the GUI
 * @author Roland Fong
 */
public class Main implements ActionListener	{
	static String version = "1.3.0";
	//main panel
	JTabbedPane viewer;
	
	JMenuBar menuBar;
	JMenu fileMenu;
	JMenuItem open;
	JMenuItem save;
	JMenu optionMenu;
	JMenuItem preferences;
	JMenu helpMenu;
	JMenuItem instructions;
	JMenuItem about;
	
	JPanel fontPanel;
	JPanel picPanel;
	JPanel buttons;
	JScrollPane hexScroll;
	JTextArea hexTextbox;
	JScrollPane machineScroll;
	JTextArea machineTextbox;
	JScrollPane assemblyScroll;
	JTextPane assemblyTextbox;
	
	JFileChooser fChooser;
	File file;
	FileWriter fw;
	
	//preferences panel
	static JFrame prefs;
	JPanel prefPane;
	JLabel fonts;
	JComboBox fontSize;
	String[] fontSizes = {"12", "14", "16", "18", "20", "24", "36", "48"};
	JComboBox picChoice;
	String[] picChoices = {"No Pic", 
			"P16F54", "P16F57", "P16F59", "P16F72",
			"P16F73", "P16F74", "P16F74", "P16F77",
			"P16F83", "P16F84", "P16F84A", "P16F87",
			"P16F88", "P16F505", "P16F506", "P16F526",
			"P16F527", "P16F570", "P16F610", "P16F616",
			"P16F627", "P16F627A", "P16F628", "P16F628A",
			"P16F630", "P16F631", "P16F636", "P16F639",
			"P16F648A", "P16F676", "P16F677", "P16F684",
			"P16F685", "P16F687", "P16F688", "P16F689",
			"P16F690", "P16F707", "P16F716", "P16F720",
			"P16F721", "P16F722", "P16F722A", "P16F723",
			"P16F723A", "P16F724", "P16F726", "P16F727",
			"P16F737", "P16F747", "P16F753", "P16F767",
			"P16F777", "P16F785", "P16F818", "P16F819",
			"P16F870", "P16F871", "P16F872", "P16F873",
			"P16F873A", "P16F874", "P16F874A", "P16F876",
			"P16F876A", "P16F877", "P16F877A", "P16F882",
			"P16F883", "P16F883", "P16F886", "P16F887",
			"P16F913", "P16F914", "P16F916", "P16F917",
			"P16F946", "P16F1454", "P16F1455", "P16F1459",
			"P16F1503", "P16F1507", "P16F1508", "P16F1509",
			"P16F1512", "P16F1513", "P16F1516", "P16F1517",
			"P16F1518", "P16F1519", "P16F1526", "P16F1527",
			"P16F1782", "P16F1783", "P16F1784", "P16F1786",
			"P16F1787", "P16F1788", "P16F1789", "P16F1823",
			"P16F1824", "P16F1825", "P16F1826", "P16F1827",
			"P16F1828", "P16F1829", "P16F1847", "P16F1933",
			"P16F1934", "P16F1936", "P16F1937", "P16F1938",
			"P16F1939", "P16F1946", "P16F1947"};
	JLabel pics;
	JButton apply;
	JButton cancel;
	String chosenFontSize;
	String chosenPic;
	
	//choose a pic window
	static JFrame pickPic;
	JPanel picPane;
	JPanel picPanel2;
	JLabel pics2;
	JComboBox picChoice2;
	JButton picOkay;
	
	BinaryHolder bh;
	
	ArrayList<OpCode> opCodes;
	
	/**
	 * Initializes the Menu Bar
	 * @return
	 */
	public JMenuBar createMenuBar()	{
		
		//Initialize Menu
		menuBar = new JMenuBar();
		fileMenu = new JMenu("File");
		open = new JMenuItem("Open");
		save = new JMenuItem("Save");
		open.addActionListener(this);
		save.addActionListener(this);
		fileMenu.add(open);
		fileMenu.add(save);
		fileMenu.getAccessibleContext().setAccessibleDescription("File Operations");
		
		optionMenu = new JMenu("Options");
		preferences = new JMenuItem("Preferences");
		preferences.addActionListener(this);
		optionMenu.add(preferences);
		
		helpMenu = new JMenu("Help");
		instructions = new JMenuItem("How to use");
		instructions.addActionListener(this);
		about = new JMenuItem("About");
		about.addActionListener(this);
		helpMenu.add(instructions);
		helpMenu.add(about);
		
		menuBar.add(fileMenu);
		menuBar.add(optionMenu);
		menuBar.add(helpMenu);
		
		return menuBar;
	}
	
	/**
	 * Initializes the content of the window
	 * @return container
	 */
	public Container createContentPane()	{
		viewer = new JTabbedPane();
		viewer.setBorder(BorderFactory.createEmptyBorder(5, 5, 5, 5));
		
		hexTextbox = new JTextArea();
		hexScroll = new JScrollPane(hexTextbox);
		hexScroll.setPreferredSize(new Dimension(600,600));
		hexTextbox.setText("Thank you for using Roland's PIC16FXXXX Disassembler.\n" +
				"If this is the first time you are using this application,\n" +
				"Please take a moment to open the \"Help\" Menu and read\n" +
				"the \"How to Use\" menu.");
		hexTextbox.setVisible(true);
		hexTextbox.setFont(new Font("consolas", Font.PLAIN, 16));
		hexTextbox.setEditable(false);
		viewer.addTab("Hex", null, hexScroll, "Contents of Hex File");
		
		machineTextbox = new JTextArea();
		machineScroll = new JScrollPane(machineTextbox);
		machineScroll.setPreferredSize(new Dimension(600,600));
		machineTextbox.setText("");
		machineTextbox.setVisible(true);
		machineTextbox.setFont(new Font("consolas", Font.PLAIN, 16));
		machineTextbox.setEditable(false);
		viewer.addTab("Machine", null, machineScroll, "Code in Program Memory (Machine Code)");
		
		assemblyTextbox = new JTextPane();
		assemblyScroll = new JScrollPane(assemblyTextbox);
		assemblyScroll.setPreferredSize(new Dimension(600,600));
		assemblyTextbox.setText("");
		assemblyTextbox.setVisible(true);
		assemblyTextbox.setFont(new Font("consolas", Font.PLAIN, 16));
		assemblyTextbox.setEditable(false);
		viewer.addTab("Assembly", null, assemblyScroll, "Disassembled Assembly Language Code");
		
		fChooser = new JFileChooser();
		bh = new BinaryHolder();
		opCodes = new ArrayList<OpCode>();
		
		return viewer;
	}
	
	/**
	 * Creates the preferences menu
	 * @return container
	 */
	public Container createPreferencesMenu()	{
		prefPane = new JPanel();
		prefPane.setLayout(new BoxLayout(prefPane, BoxLayout.Y_AXIS));
		fontPanel = new JPanel();
		fonts = new JLabel("Font Size:");
		fontSize = new JComboBox(fontSizes);
		fontSize.setSelectedIndex(2);
		chosenFontSize = "16";
		fontPanel.add(fonts);
		fontPanel.add(fontSize);
		
		picPanel = new JPanel();
		pics = new JLabel("PIC:");
		picChoice = new JComboBox(picChoices);
		picChoice.setSelectedItem("P16F887");//
		chosenPic = "P16F887";
		picPanel.add(pics);
		picPanel.add(picChoice);
		
		buttons = new JPanel();
		apply = new JButton("Apply");
		cancel = new JButton("Cancel");
		apply.addActionListener(this);
		cancel.addActionListener(this);
		buttons.add(apply);
		buttons.add(cancel);
		
		prefPane.add(fontPanel);
		prefPane.add(picPanel);
		prefPane.add(buttons);
		return prefPane;
	}
	
	public Container createPickPicMenu()	{
		picPane = new JPanel();
		picOkay = new JButton("OK");
		picOkay.addActionListener(this);
		picPanel2 = new JPanel();
		pics2 = new JLabel("PIC:");
		picChoice2 = new JComboBox(picChoices);
		picChoice2.setSelectedItem("P16F887");
		picPanel2.add(pics2);
		picPanel2.add(picChoice2);
		picPane.add(picPanel2);
		picPane.add(picOkay);
		return picPane;
	}
	
	/**
	 * Reads from the hex textbox and generates machine code
	 */
	public void hexToMachine()	{
		ArrayList<String> lines = new ArrayList<String>();
		ArrayList<String> fhex = new ArrayList<String>();//holds flipped hex digits
		ArrayList<String> hex = new ArrayList<String>();//holds hex to be put into machine code
		int lineCount = hexTextbox.getLineCount();
		String hexText = hexTextbox.getText();
		for(int i = 0; i < lineCount; i++)	{//stores each line into a string in an array
			try {
				int start = hexTextbox.getLineStartOffset(i);
				int end = hexTextbox.getLineEndOffset(i);
				lines.add(hexText.substring(start, end));
			} catch (BadLocationException e) {
				JOptionPane.showMessageDialog(viewer, "An error occured", "Error", 0);
				e.printStackTrace();
			}
			if(i == lineCount - 1)	{
				lines.remove(i - 1);//don't need it
				lines.remove(0);//remove the first one (:020000040000FA)
			}
		}
		//System.out.println(lines.size());
		int count = 0;
		machineTextbox.setText("Mem Location\tMachine Code\n");
		bh.clear();
		opCodes.clear();
		for(int i = 0; i < lines.size() - 1; i++)	{
			try	{
				lines.set(i, lines.get(i).substring(9, lines.get(i).length() - 3));
			}catch(Exception e)	{
				JOptionPane.showMessageDialog(viewer, "An error occured with the file", "Error", 0);
				e.printStackTrace();
			}
			//System.out.println("size: "+lines.get(i).length()+" text: "+lines.get(i));
			//gets rid of :BBAAATT...CC
			String fCount = "0000"; //formatted count
			for(int j = 0; j < lines.get(i).length() / 4; j++)	{
				fhex.add(lines.get(i).substring(j * 4, j * 4 + 4));//separate hex
				hex.add(fhex.get(count).substring(2,4) + fhex.get(count).substring(0,2));

				BitString temp = new BitString("");
				temp.setStringFromHex(hex.get(count));
				bh.add(temp);
				
				//System.out.println(hex.get(count)+" bh: "+bh.getBitString(count));
				//converts output count to hex format with 4 digits including leading 0s
				if(count == 0)	{
					fCount = fCount.substring(0, 4 - Integer.toHexString(count).length())
							+ Integer.toHexString(count).toUpperCase();
				}
				else if(count >= 1)	{
					fCount = fCount.substring(0, 4 - Integer.toHexString(count + 3).length())
							+ Integer.toHexString(count + 3).toUpperCase();
				}
				machineTextbox.append(fCount + "\t\t0x" + hex.get(count) + "\n");
				opCodes.add(new OpCode());
				opCodes.get(count).setMneumonicFromBitString(bh.getBitString(count));
				opCodes.get(count).setOperandsFromBitString(bh.getBitString(count));
				opCodes.get(count).setMemLocation(fCount);//sets location in memory (GOTO statements need)
				//System.out.println("count: "+count);
				count++;
			}
		}
		
	}
	
	/**
	 * Reads from machine code to generate assembly language
	 */
	public void machineToAssembly()	{
		viewer.setCursor(Cursor.getPredefinedCursor(Cursor.WAIT_CURSOR));
		
		assemblyTextbox.setFont(new Font("consolas", Font.PLAIN, Integer.valueOf(chosenFontSize)));
		SimpleAttributeSet opcodeDirectiveSet = new SimpleAttributeSet();
		StyleConstants.setForeground(opcodeDirectiveSet, new Color(0, 0, 192));//blue for opcodes and directives
		SimpleAttributeSet commentSet = new SimpleAttributeSet();
		StyleConstants.setForeground(commentSet, new Color(63, 127, 95));//green for comments
		SimpleAttributeSet varSet = new SimpleAttributeSet();
		StyleConstants.setForeground(varSet, new Color(127, 0, 85));//purple for variables
		assemblyTextbox.setCharacterAttributes(commentSet, true);
		assemblyTextbox.setText(";Disassembled from " + file.getPath());
		if(chosenPic == "No Pic")	{
			//do nothing
		}
		else	{
			append("\n#include<", opcodeDirectiveSet);
			append(chosenPic+".INC", varSet);
			append(">", opcodeDirectiveSet);
		}
		append("\n\n\tORG\t0x00\t", opcodeDirectiveSet);
		append(";Reset Vector\n", commentSet);
		ArrayList<String> labels = new ArrayList<String>();//holds memory locations that will be labeled
		int rp0 = 0;//bank bit 0
		int rp1 = 0;//bank bit 1
		int bank = 0;
		for(int i = 0; i < bh.returnSize(); i++)	{
			if(opCodes.get(i).getMneumonic().getName().contains("GOTO") 
					|| opCodes.get(i).getMneumonic().getName().contains("CALL"))	{
				String temp = opCodes.get(i).getLiteral().toHex();
				temp = "0" + temp;//append 0 to beginning to make 4 digits
				labels.add(temp);
			}
		}
		for(int i = 0; i < bh.returnSize(); i++)	{
			if(chosenPic == "No Pic")	{
				if(i == 1)	{
					append("\n\tORG\t0x04\t", opcodeDirectiveSet);
					append(";Interrupt Vector\n", commentSet);
				}
				for(int j = 0; j < labels.size(); j++)	{//for labels
					/*System.out.println("Mem location: " + opCodes.get(i).getMemLocation() + " =? " + labels.get(j)
							+ " = "
							 + (opCodes.get(i).getMemLocation().contains(labels.get(j))));*/
					if(opCodes.get(i).getMemLocation().contains(labels.get(j)))	{
						append("\nLABEL_" + labels.get(j) + ":\n", opcodeDirectiveSet);
						j = labels.size();//exit loop
					}
				}
				append("\t"+opCodes.get(i).getMneumonic().getName(), opcodeDirectiveSet);//add the mneumonic
				//for literals, bits, register addresses, etc.
				if(!opCodes.get(i).getFileReg().isEmpty())	{
					append("\t0x"+opCodes.get(i).getFileReg().toHex(), opcodeDirectiveSet);
				}
				if(!opCodes.get(i).getDestination().isEmpty())	{
					append(",", varSet);
					append(opCodes.get(i).getDestination().toString(), null);
				}
				if(!opCodes.get(i).getBit().isEmpty())	{
					append(",", varSet);
					append(opCodes.get(i).getBit().toHex(), null);
				}
				if(!opCodes.get(i).getLiteral().isEmpty())	{
					if(opCodes.get(i).getMneumonic().getName().contains("GOTO") ||
							opCodes.get(i).getMneumonic().getName().contains("CALL"))	{
						append("\tLABEL_" + ("0" + opCodes.get(i).getLiteral().toHex()), opcodeDirectiveSet);
					}
					else	{
						append("\t0x" + opCodes.get(i).getLiteral().toHex(), opcodeDirectiveSet);
					}
				}
				append("\n", null);
			}//end if no pic selected
			else	{
				RegisterHandler rh = new RegisterHandler(chosenPic);
				if(i == 1)	{
					append("\n\tORG\t0x04\t", opcodeDirectiveSet);
					append(";Interrupt Vector\n", commentSet);
				}
				for(int j = 0; j < labels.size(); j++)	{
					/*System.out.println("Mem location: " + opCodes.get(i).getMemLocation() + " =? " + labels.get(j)
							+ " = " + (opCodes.get(i).getMemLocation().contains(labels.get(j))));*/
					if(opCodes.get(i).getMemLocation().contains(labels.get(j)))	{
						append("\nLABEL_" + labels.get(j) + ":\n", opcodeDirectiveSet);
						j = labels.size();//exit loop
					}
				}
				append("\t"+opCodes.get(i).getMneumonic().getName(), opcodeDirectiveSet);//add the mnemonic
				FileRegister sfr = null;//initiates a register using address
				if(!opCodes.get(i).getFileReg().isEmpty())	{
					BitString temp = opCodes.get(i).getFileReg();
					
					if(opCodes.get(i).getFileReg().toHex().contains("03") ||
							opCodes.get(i).getFileReg().toHex().contains("83"))	{//if status register is involved
						//System.out.println("STATUS called");
						if(opCodes.get(i).getMneumonic().getName().contains("BCF") && 
								opCodes.get(i).getBit().toHex().contains("5"))	{//if RP0 is being cleared
							//System.out.println("rp0 to 0");
							rp0 = 0;
						}
						else if(opCodes.get(i).getMneumonic().getName().contains("BSF") && 
								opCodes.get(i).getBit().toHex().contains("5"))	{//if RP0 is being cleared
							//System.out.println("rp0 to 1");
							rp0 = 1;
						}
						if(opCodes.get(i).getMneumonic().getName().contains("BCF") && 
								opCodes.get(i).getBit().toHex().contains("6"))	{//if RP0 is being cleared
							//System.out.println("rp1 to 0");
							rp1 = 0;
						}
						else if(opCodes.get(i).getMneumonic().getName().contains("BSF") && 
								opCodes.get(i).getBit().toHex().contains("6"))	{//if RP0 is being cleared
							//System.out.println("rp1 to 1");
							rp1 = 1;
						}
						bank = rp0 + rp1 * 2;//set the bank
						//System.out.println("BANK = "+bank);
						sfr = rh.findRegister("STATUS");
					}//end if status register called
					else	{
						if(bank == 0)	{
							sfr = rh.findRegister(new BitString("000000000"+temp.toString()));
						}
						else if(bank == 1)	{
							sfr = rh.findRegister(new BitString("000000001"+temp.toString()));
						}
						else if(bank == 2)	{
							sfr = rh.findRegister(new BitString("000000010"+temp.toString()));
						}
						else if(bank == 3)	{
							sfr = rh.findRegister(new BitString("000000011"+temp.toString()));
						}
					}
					if(sfr != null)	{
						append("\t"+sfr.getName(), varSet);
					}
					else	{
						append("\t0x"+opCodes.get(i).getFileReg().toHex(), opcodeDirectiveSet);
					}
				}
				if(!opCodes.get(i).getDestination().isEmpty())	{
					append(",", varSet);
					if(opCodes.get(i).getDestination().toString().equals("0"))	{
						append("W", varSet);
					}
					else	{//if destination is 1, or F...
						append("F", varSet);
					}
				}
				if(!opCodes.get(i).getBit().isEmpty())	{
					BitString tempAddress = new BitString("");
					tempAddress.setStringFromHex("000"+opCodes.get(i).getBit().toHex());
					RegisterBit rb = null;
					try	{
						rb = rh.findRegister(sfr.getName()).getBit(tempAddress);
						append(",", varSet);
						append(rb.getName(), varSet);
					} catch(Exception e1)	{
						viewer.setCursor(Cursor.getPredefinedCursor(Cursor.DEFAULT_CURSOR));
						append(",", varSet);
						append(opCodes.get(i).getBit().toHex(), null);
						e1.printStackTrace();
					}
				}
				if(!opCodes.get(i).getLiteral().isEmpty())	{
					if(opCodes.get(i).getMneumonic().getName().contains("GOTO") ||
							opCodes.get(i).getMneumonic().getName().contains("CALL"))	{
						append("\tLABEL_" + ("0" + opCodes.get(i).getLiteral().toHex()), opcodeDirectiveSet);
					}
					else	{
						append("\t0x" + opCodes.get(i).getLiteral().toHex(), opcodeDirectiveSet);
					}
				}
				append("\n", null);
			}//end if a pic is selected
		}//end loop through machine language
		append("\n\tEND", opcodeDirectiveSet);
		viewer.setCursor(Cursor.getPredefinedCursor(Cursor.DEFAULT_CURSOR));
	}

	/**
	 * Appends a string to the assembly language text pane
	 * @param s - the string to append
	 * @param attributes - attribute set of the given string
	 */
	protected void append(String s, AttributeSet attributes)	{
		Document d = assemblyTextbox.getDocument();
		try	{
			d.insertString(d.getLength(), s, attributes);
		}catch(BadLocationException e)	{
			JOptionPane.showMessageDialog(viewer, "An error occured writing the text", "Error", 0);
		}
	}
	
//	protected String[] getIncludeFiles()	{
//		String[] fileNames = null;
//		//TODO read include files to get pics to use
//		return fileNames;
//	}
	
	@Override
	public void actionPerformed(ActionEvent e) {
		if(e.getSource() == open)	{
			int returnVal = fChooser.showOpenDialog(fChooser);
			if(returnVal == JFileChooser.APPROVE_OPTION)	{
				pickPic.setVisible(true);//allow user to choose pic
				file = fChooser.getSelectedFile();
				if(!file.getPath().contains(".HEX"))	{//ensures correct file type
					JOptionPane.showMessageDialog(viewer, "Improper file type", "Error", 0);
					return;
				}
				BufferedReader reader = null;
				try	{
					String sCurrentLine;
					reader = new BufferedReader(new FileReader(file.getPath()));
					hexTextbox.setText("");
					while((sCurrentLine = reader.readLine()) != null)	{
						hexTextbox.append(sCurrentLine + "\n");
					}
				} catch(IOException e1)	{
					e1.printStackTrace();
				} finally	{
					try	{
						if(reader != null)reader.close();
					} catch(IOException e2)	{
						e2.printStackTrace();
					}
				}
				//hexToMachine();
				//machineToAssembly();
			}
		}
		else if(e.getSource() == save)	{//saves the asm file
			int returnVal = fChooser.showSaveDialog(fChooser);
			if(returnVal == JFileChooser.APPROVE_OPTION)	{
				file = fChooser.getSelectedFile();//name of file in text bar
				try {
					fw = new FileWriter(file);
				} catch (IOException e1) {
					JOptionPane.showMessageDialog(viewer, "An error occured with the file", "Error", 0);
					e1.printStackTrace();
				}
				try {
					fw.write(assemblyTextbox.getText());
					fw.close();
				} catch (IOException e1) {
					e1.printStackTrace();
				}
			}
		}
		else if(e.getSource() == preferences)	{
			prefs.setVisible(true);
		}
		else if(e.getSource() == cancel)	{
			for(int i = 0; i < fontSizes.length; i++)	{
				if(fontSizes[i] == chosenFontSize)	{
					fontSize.setSelectedIndex(i);
					i = fontSizes.length;//exit loop
				}
			}
			for(int i = 0; i < picChoices.length; i++)	{
				if(picChoices[i] == chosenPic)	{
					picChoice.setSelectedIndex(i);
					i = picChoices.length;//exit loop
				}
			}
			prefs.setVisible(false);
		}
		else if(e.getSource() == apply)	{
			chosenFontSize = fontSize.getSelectedItem().toString();
			hexTextbox.setFont(new Font("consolas", Font.PLAIN, Integer.valueOf(chosenFontSize)));
			machineTextbox.setFont(new Font("consolas", Font.PLAIN, Integer.valueOf(chosenFontSize)));
			assemblyTextbox.setFont(new Font("consolas", Font.PLAIN, Integer.valueOf(chosenFontSize)));
			chosenPic = picChoice.getSelectedItem().toString();
			picChoice2.setSelectedItem(picChoice.getSelectedItem().toString());
			//set for the pick pic menu too
			try	{
				machineToAssembly();
			}catch(Exception e1)	{
				viewer.setCursor(Cursor.getPredefinedCursor(Cursor.DEFAULT_CURSOR));
				e1.printStackTrace();//in the event machinetoassembly throws an exception if hextextbox has no text
			}
			prefs.setVisible(false);
		}
		else if(e.getSource() == picOkay)	{
			chosenPic = picChoice2.getSelectedItem().toString();
			picChoice.setSelectedItem(picChoice2.getSelectedItem().toString());
			//set for preferences menu too
			pickPic.setVisible(false);
			hexToMachine();//convert this hex code to machine language in next tab
			machineToAssembly();//convert machine language to assembly
		}
		else if(e.getSource() == instructions)	{
			JOptionPane.showMessageDialog(viewer,
					"To use this disassembler, proceed by first going to File>Open.\n" +
					"Select a .HEX file that you wish to disassemble. In the pop-up\n" +
					"window, choose the PIC that you would like to disassemble for \n" +
					"Use the tabs on the top of the window to navigate between viewing\n" +
					"the Hex code,code in the microcontroller memory, or assembly\n" +
					"language. On the menu bar is also an Option Menu, where Preferences\n" +
					"can be accessed and changed. The user can either change the font\n" +
					"or which pic that the disassembler will disassemble for. Finally,\n" +
					"the user can save the code by going to File>Save. The extension \n" +
					"must be changed to .asm or .txt",
					"How to Use", JOptionPane.INFORMATION_MESSAGE);
		}
		else if(e.getSource() == about)	{
			JOptionPane.showMessageDialog(viewer, 
					"Credits to Roland Fong, Class of 2015\nLast Build June 13th, 2013 v"+version, 
					"About", JOptionPane.INFORMATION_MESSAGE);
		}
	}
	
	/**
	 * Creates the GUI
	 */
	public static void createAndShowGUI()	{
		try {
			UIManager.setLookAndFeel("javax.swing.plaf.metal.MetalLookAndFeel");
		} catch (Exception e) {
			e.printStackTrace();
		}
		
		JFrame frame = new JFrame("Disassembler v"+version);
		frame.pack();
		frame.setVisible(true);
		frame.setSize(800,600);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Main main = new Main();
		frame.setJMenuBar(main.createMenuBar());
		frame.add(main.createContentPane());
		
		Toolkit toolkit =  Toolkit.getDefaultToolkit ();
		Dimension dim = toolkit.getScreenSize();
		frame.setSize(dim.width,dim.height);
		
		prefs = new JFrame("Preferences");
		prefs.pack();
		prefs.setVisible(false);
		prefs.setSize(200, 200);
		//default behavior for x is hiding frame
		prefs.add(main.createPreferencesMenu());
		
		pickPic = new JFrame("Pick a Pic");
		pickPic.pack();
		pickPic.setVisible(false);
		pickPic.setSize(200, 60);
		pickPic.add(main.createPickPicMenu());
		
	}

	/**
	 * Runs the program
	 * @param args
	 */
	public static void main(String[] args) {
		javax.swing.SwingUtilities.invokeLater(new Runnable()	{
			public void run()	{
				createAndShowGUI();
			}
		});
	}
}
