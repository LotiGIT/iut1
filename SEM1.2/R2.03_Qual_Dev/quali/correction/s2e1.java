import java.util.*;

class ErreurNumero extends Exception{

	private static final long serialVersionUID = 2531500846272007628L;
	
    String origine;
  
    public ErreurNumero(String a){
	   origine=a;
    }
  
    public String toString(){
	   return "Exception ErreurNumero : "+origine;
    }
}

class NumTel{

	private String valeur;
	
	public NumTel(String numero) throws ErreurNumero {
		if (NumTel.numeroValide(numero)){
			valeur = numero;
		}else{
			throw new ErreurNumero(numero);
		}
	}
	
	private static boolean numeroValide(String chaine){
		boolean res=true;
		if (chaine.length()!=10){
			res=false;
		}else{
			int i=0;
			while ((i<=9) && res){
				res = Character.isDigit(chaine.charAt(i));
				i++;
			}
		}
		return res;
	}
	
	
	public String toString(){
		return valeur;
	}
}

class Abonne{
	private String nom;
	private String adresse;
	private Collection<NumTel> mesNumeros;
	
	
	public  Abonne(String no, String ad){
		nom=no; adresse=ad; 
		mesNumeros=new HashSet<NumTel>();
	}
	
	public  Abonne(){
		Scanner scn =new Scanner(System.in);
		System.out.println("Nom de l'abonne");
		nom=scn.next();
		System.out.println("Adresse de l'abonne");
		adresse=scn.next();
		mesNumeros=new HashSet<NumTel>();
	}

	public String toString(){
		return nom+" "+adresse;
	}
	
	public void addNum(){
		NumTel num;
		String val;
		Scanner scn =new Scanner(System.in);
		System.out.println("Donnez un num�ro de l'abonne "+nom+ " :");
		val=scn.next();
		try{
			num=new NumTel(val);
			mesNumeros.add(num);
		}
		catch(Exception e){
			System.out.println(e);
		}
		
	}
	
	public void afficheNumero(){
		Iterator<NumTel> it = mesNumeros.iterator();
		while (it.hasNext()){
			System.out.println(it.next());
		}
	}
	

}


class TPAnnuaires {

	public static void main(String[] args) {
		Abonne abo=new Abonne("Michel Goto", "Lannion");
		abo.addNum();
		abo.addNum();
		abo.addNum();
		System.out.println(abo);
		abo.afficheNumero();
	}

}