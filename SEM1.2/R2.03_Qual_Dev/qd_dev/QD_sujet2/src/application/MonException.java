package application;

public class MonException extends Exception {
	
	private static final long serialVersionUID = 1L;
	String origine;
	
	public MonException(String string) {
		origine = string;
	}
	
	public String toString()
	{
		return "Exception ErreurNumero : " + origine;
	}
}
