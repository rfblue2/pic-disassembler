/**
 * Contains classes for bit manipulation
 */
package bitManip;

import java.util.ArrayList;

/**
 * Contains a string of bits
 * @author Roland Fong
 */
public class BitString {

	ArrayList<Integer> bstr;
	/**
	 * Initialize string of bits
	 * @param num - string of bits
	 */
	public BitString(String num) {
		bstr = new ArrayList<Integer>();
		for(int i = 0; i < num.length(); i++)	{
			if(num.charAt(i) == '1')	{
				bstr.add(1);
			}
			else	{
				bstr.add(0);
			}
		}
	}
	
	/**
	 * Sets the contents of the string of bits
	 * @param num - string of bits
	 */
	public void setString(String num)	{
		bstr.clear();
		for(int i = 0; i < num.length(); i++)	{
			if(num.charAt(i) == '1')	{
				bstr.add(1);
			}
			else	{
				bstr.add(0);
			}
		}
	}
	
	/**
	 * Appends specified string to end of string of bits
	 * @param num - string of bits
	 */
	public void append(String num)	{
		for(int i = 0; i < num.length(); i++)	{
			bstr.add(Integer.valueOf(num.substring(i, i + 1)));
		}
	}
	

	/**
	 * Appends a single bit to end of string of bits
	 * @param num - 1 bit
	 */
	public void append(int num)	{
		bstr.add(num);
	}
	
	/**
	 * Converts hex input into binary string
	 * @param num - hex input
	 */
	public void setStringFromHex(String num)	{
		bstr.clear();
		for(int i = 0; i < num.length(); i++)	{
			if(num.charAt(i) == '0')	{
				append("0000");
			}
			else if(num.charAt(i) == '1')	{
				append("0001");
			}
			else if(num.charAt(i) == '2')	{
				append("0010");
			}
			else if(num.charAt(i) == '3')	{
				append("0011");
			}
			else if(num.charAt(i) == '4')	{
				append("0100");
			}
			else if(num.charAt(i) == '5')	{
				append("0101");
			}
			else if(num.charAt(i) == '6')	{
				append("0110");
			}
			else if(num.charAt(i) == '7')	{
				append("0111");
			}
			else if(num.charAt(i) == '8')	{
				append("1000");
			}
			else if(num.charAt(i) == '9')	{
				append("1001");
			}
			else if(num.charAt(i) == 'A')	{
				append("1010");
			}
			else if(num.charAt(i) == 'B')	{
				append("1011");
			}
			else if(num.charAt(i) == 'C')	{
				append("1100");
			}
			else if(num.charAt(i) == 'D')	{
				append("1101");
			}
			else if(num.charAt(i) == 'E')	{
				append("1110");
			}
			else if(num.charAt(i) == 'F')	{
				append("1111");
			}
		}
	}
	
	/**
	 * Converts bitString to hex
	 * @return string in hex
	 */
	public String toHex()	{
		String hex = new String("");
		String binString = new String("");
		for(int i = 0; i < getSize(); i++)	{
			binString = binString + String.valueOf(getBit(i));
		}
		//System.out.println("Size: "+getSize());
		if(getSize() % 4 == 1)	{
			binString = "000" + binString;
		}
		else if(getSize() % 4 == 2)	{
			binString = "00" + binString;
		}
		else if(getSize() % 4 == 3)	{
			binString = "0" + binString;
		}
		
		for(int i = 0; i < binString.length() / 4; i++)	{
			if(binString.substring(i * 4, i * 4 + 4).contentEquals("0000"))	{
				hex = hex + "0";
			}
			else if(binString.substring(i * 4, i * 4 + 4).contentEquals("0001"))	{
				hex = hex + "1";
			}
			else if(binString.substring(i * 4, i * 4 + 4).contentEquals("0010"))	{
				hex = hex + "2";
			}
			else if(binString.substring(i * 4, i * 4 + 4).contentEquals("0011"))	{
				hex = hex + "3";
			}
			else if(binString.substring(i * 4, i * 4 + 4).contentEquals("0100"))	{
				hex = hex + "4";
			}
			else if(binString.substring(i * 4, i * 4 + 4).contentEquals("0101"))	{
				hex = hex + "5";
			}
			else if(binString.substring(i * 4, i * 4 + 4).contentEquals("0110"))	{
				hex = hex + "6";
			}
			else if(binString.substring(i * 4, i * 4 + 4).contentEquals("0111"))	{
				hex = hex + "7";
			}
			else if(binString.substring(i * 4, i * 4 + 4).contentEquals("1000"))	{
				hex = hex + "8";
			}
			else if(binString.substring(i * 4, i * 4 + 4).contentEquals("1001"))	{
				hex = hex + "9";
			}
			else if(binString.substring(i * 4, i * 4 + 4).contentEquals("1010"))	{
				hex = hex + "A";
			}
			else if(binString.substring(i * 4, i * 4 + 4).contentEquals("1011"))	{
				hex = hex + "B";
			}
			else if(binString.substring(i * 4, i * 4 + 4).contentEquals("1100"))	{
				hex = hex + "C";
			}
			else if(binString.substring(i * 4, i * 4 + 4).contentEquals("1101"))	{
				hex = hex + "D";
			}
			else if(binString.substring(i * 4, i * 4 + 4).contentEquals("1110"))	{
				hex = hex + "E";
			}
			else if(binString.substring(i * 4, i * 4 + 4).contentEquals("1111"))	{
				hex = hex + "F";
			}
			
		}
		return hex;
	}
	
	/**
	 * Gets the bits in a form of an array
	 * @return bstr - array of bits
	 */
	public ArrayList<Integer> getBits()	{
		return bstr;
	}
	
	/**
	 * Prints the string in the output console
	 */
	public void printString()	{
		for(int i = 0; i < bstr.size(); i++)	{
			System.out.print(bstr.get(i));
		}
		System.out.println("");
	}
	
	/**
	 * Returns the bit at given index
	 * @param index - location of bit
	 * @return bit
	 */
	public int getBit(int index)	{
		return bstr.get(index);
	}
	
	/**
	 * Sets the bit at specified index
	 * @param index
	 * @param val
	 */
	public void setBit(int index, int val)	{
		bstr.set(index, val);
	}
	
	/**
	 * 
	 * @return size
	 */
	public int getSize()	{
		return bstr.size();
	}
	
	/**
	 * @return bstr array as string
	 */
	@Override
	public String toString()	{
		String bstrAsString = new String("");
		for(int i = 0; i < bstr.size(); i++)	{
			bstrAsString = bstrAsString + bstr.get(i).toString();
		}
		return bstrAsString;
	}
	
	/**
	 * Checks if Bit String contains nothing
	 * @return isEmpty
	 */
	public Boolean isEmpty()	{
		if(bstr.isEmpty())	{
			return true;
		}
		return false;
	}
}
