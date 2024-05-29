package application;

public class ErreurNumero extends Exception{

	private static final long serialVersionUID = 2531500846272007628L;
	
    String origine;
  
    public ErreurNumero(String a){
	   origine=a;
    }
  
    public String toString(){
	   return "Exception ErreurNumero : "+origine;
    }
}