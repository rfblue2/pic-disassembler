/**
 * Contains classes to handle disassembly
 */
package disassembly;

import bitManip.BitString;

/**
 * Holds information about a bit in a register
 * @author Roland Fong
 */
public class RegisterBit {
	String name;
	BitString address;//address in binary
	int value;//0 or 1
	FileRegister parentRegister;
	
	/**
	 * @param name
	 * @param address
	 * @param parentRegister
	 */
	public RegisterBit(String name, BitString address,
			FileRegister parentRegister) {
		this.name = name;
		this.address = address;
		this.parentRegister = parentRegister;
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
	 * @return the value
	 */
	public int getValue() {
		return value;
	}
	
	/**
	 * @param value the value to set
	 */
	public void setValue(int value) {
		this.value = value;
	}
	
	/**
	 * @return the parentRegister
	 */
	public FileRegister getParentRegister() {
		return parentRegister;
	}
	
	/**
	 * @param parentRegister the parentRegister to set
	 */
	public void setParentRegister(FileRegister parentRegister) {
		this.parentRegister = parentRegister;
	}
	
}
