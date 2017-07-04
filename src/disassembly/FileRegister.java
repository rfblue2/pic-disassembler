/**
 * Contains classes to handle disassembly
 */
package disassembly;

import java.util.ArrayList;

import bitManip.BitString;

/**
 * Contains information about specific file register
 * @author Roland Fong
 */
public class FileRegister {
	String name;
	BitString address;//address in binary
	int bank;//0, 1, 2, or 3
	ArrayList<RegisterBit> bits;//arraylist holding the bits of the register
	
	/**
	 * Constructor
	 */
	public FileRegister()	{
		name = new String("");
		address = new BitString("");
		bank = 0;
		bits = new ArrayList<RegisterBit>();
	}

	/**
	 * Constructor
	 * @param name
	 */
	public FileRegister(String name)	{
		this.name = name;
		address = new BitString("");
		bank = 0;
		bits = new ArrayList<RegisterBit>();
	}

	/**
	 * Constructor
	 * @param address
	 */
	public FileRegister(BitString address)	{
		name = new String("");
		this.address = address;
		bank = 0;
		bits = new ArrayList<RegisterBit>();
	}

	/**
	 * @return the name
	 */
	public String getName() {
		return name;
	}

	/**
	 * @param name the name to set
	 */
	public void setName(String name) {
		this.name = name;
	}

	/**
	 * @return the address
	 */
	public BitString getAddress() {
		return address;
	}

	/**
	 * @param address the address to set
	 */
	public void setAddress(BitString address) {
		this.address = address;
	}

	/**
	 * @return the bank
	 */
	public int getBank() {
		return bank;
	}

	/**
	 * @param bank the bank to set
	 */
	public void setBank(int bank) {
		this.bank = bank;
	}

	/**
	 * @param bits the bits to set
	 */
	public void setBits(ArrayList<RegisterBit> bits) {
		this.bits = bits;
	}
	
	/**
	 * Sets bit name at specified index
	 * @param index
	 * @param bit
	 */
	public void setBitAtIndex(int index, RegisterBit bit)	{
		bits.set(index, bit);
	}
	
	/**
	 * Adds the bit to the array
	 * @param bit
	 */
	public void addBit(RegisterBit bit)	{
		bits.add(bit);
	}
	
	/**
	 * Gets the bit name with specified address
	 * @param addr
	 * @return bit
	 */
	public RegisterBit getBit(BitString addr)	{
		for(int i = 0; i < bits.size(); i++)	{
			//System.out.println("Bit "+i+": "+ bits.get(i).getName() + " " + bits.get(i).getAddress());
			//System.out.println("compare to: " + addr.toString());
			if(bits.get(i).getAddress().toString().equals(addr.toString()))	{
				return bits.get(i);
			}
		}
		System.out.println("can't find bit!");
		return null;//doesn't exist!
	}
	
}
