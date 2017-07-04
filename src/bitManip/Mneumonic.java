/**
 * Contains classes for bit manipulation
 */
package bitManip;

/**
 * Holds the mneumonics
 * @author Roland Fong
 */
public class Mneumonic {

	String name;
	String desc;//description
	String opCode;

	/**
	 * @param name
	 * @param partialOpCode
	 * @param destination
	 * @param literal
	 * @param fileReg
	 */
	public Mneumonic(String name, String opCode) {
		super();
		this.name = name;
		this.opCode = opCode;
		this.desc = "No description available";
	}

	/**
	 * @return the name
	 */
	public String getName() {
		return name;
	}

	/**
	 * @param name - the name
	 */
	public void setName(String name) {
		this.name = name;
	}

	/**
	 * @return the description
	 */
	public String getDesc() {
		return desc;
	}

	/**
	 * @param desc - the description
	 */
	public void setDesc(String desc) {
		this.desc = desc;
	}

	/**
	 * @return the opCode
	 */
	public String getOpCode() {
		return opCode;
	}

	/**
	 * @param opCode the opCode to set
	 */
	public void setOpCode(String opCode) {
		this.opCode = opCode;
	}


}
