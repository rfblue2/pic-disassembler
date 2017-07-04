/**
 * Contains classes to handle disassembly
 */
package disassembly;

import java.util.ArrayList;

import bitManip.*;

/**
 * Class to hold the Opcodes disassembled from hex file
 * @author Roland Fong
 */
public class BinaryHolder {
	ArrayList<BitString> binOpCodes;

	/**
	 * Initializes BinaryHolder Class
	 */
	public BinaryHolder() {
		super();
		binOpCodes = new ArrayList<BitString>();
	}
	
	/**
	 * Adds bitstring to array
	 * @param bitstring
	 */
	public void add(BitString bs)	{
		binOpCodes.add(bs);
	}
	
	/**
	 * Returns the size of the array
	 * @return size
	 */
	public int returnSize()	{
		return binOpCodes.size();
	}
	
	/**
	 * Gets the bitString at specified index
	 * @param index
	 * @return bitString
	 */
	public BitString getBitString(int index)	{
		return binOpCodes.get(index);
	}
	
	/**
	 * Gets the opcode at specified index
	 * @param index
	 * @return opcode as String
	 */
	public String getOpCode(int index)	{
		return binOpCodes.get(index).toString();
	}
	
	/**
	 * Empties the binary holder
	 */
	public void clear()	{
		binOpCodes.clear();
	}
}
