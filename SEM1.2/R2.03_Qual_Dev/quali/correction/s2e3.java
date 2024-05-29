import java.util.*;
import java.io.*;

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

class NumTel implements Serializable{

    /**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	String valeur;
	
	public NumTel(String numero) throws ErreurNumero {
		if (numeroValide(numero)){
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
	
	public boolean egal(NumTel numero){
		return numero.valeur.equals(this.valeur);
	}
}

class Abonne implements Serializable{
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	private String nom;
	private String adresse;
	private Set<NumTel> mesNumeros;
	protected Set<AnnuaireInverse> mesAnnuaires;
	
	public  Abonne(String no, String ad){
		nom=no; adresse=ad; 
		mesNumeros=new HashSet<NumTel>();
		mesAnnuaires=new HashSet<AnnuaireInverse>();
	}
	
	public  Abonne(){
		Scanner scn =new Scanner(System.in);
		System.out.println("Nom de l'abonne");
		nom=scn.next();
		System.out.println("Adresse de l'abonne");
		adresse=scn.next();
		mesNumeros=new HashSet<NumTel>();
		mesAnnuaires=new HashSet<AnnuaireInverse>();
	}

	
	public String toString(){
		return nom+" "+adresse;
	}
	private boolean estDeja(String val2){
		boolean res=false;
		String val1;
		Iterator<NumTel> it = mesNumeros.iterator();
		while (it.hasNext() && !res){
			val1=it.next().valeur;
			res=val1.equals(val2);
		}
		return res;
	}
	
	private void supprimerAnnuaires(String val){
		Iterator <AnnuaireInverse> it = mesAnnuaires.iterator();
		while (it.hasNext()){
			it.next().contenu.remove(val);
		}
	}
	
	public void supprimerNum(String val1){
		String val2;
		NumTel numero;
        Collection <NumTel> aSupp = new HashSet<NumTel>();
        
		Iterator<NumTel> it = mesNumeros.iterator();
		while (it.hasNext()){
			numero=it.next();
			val2=numero.valeur;
			if (val1.equals(val2)){
				aSupp.add(numero);
			}
		}
		 it = aSupp.iterator();
		 while (it.hasNext()){
			numero=it.next();
			mesNumeros.remove(numero);
		    this.supprimerAnnuaires(numero.valeur);
		 }
	}
	
	private void ajouteAnnuaires(String val){
		Iterator <AnnuaireInverse> it = mesAnnuaires.iterator();
		while (it.hasNext()){
			it.next().contenu.put(val,this);
		}
	}
	
	public void addNum(){
		NumTel num;
		String val;
		Scanner scn =new Scanner(System.in);
		System.out.println("Donnez un num�ro de l'abonne "+nom+ " :");
		val=scn.next();
		try{
			num=new NumTel(val);
			if (!estDeja(val)) {
				mesNumeros.add(num);
				this.ajouteAnnuaires(num.valeur);
			}
		}
		catch(Exception e){
			System.out.println(e);
		}
		
	}
	
	public void addNum(String val){
		NumTel num;
		try{
			num=new NumTel(val);
			if (!estDeja(val)) {
				mesNumeros.add(num);
				this.ajouteAnnuaires(val);
			}
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
	
	public  Set<NumTel> getNumeros(){
		return mesNumeros;
	}
	

}

class AnnuaireInverse implements Serializable{
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	String nom;
	protected HashMap<String,Abonne> contenu;
	
	public AnnuaireInverse(String no){
		nom=no;
		contenu=new HashMap<String,Abonne>();
	}
	
	public void inscrire(Abonne abo){
		NumTel num;
		Set<NumTel> lesNumeros= abo.getNumeros();
		Iterator<NumTel> it = lesNumeros.iterator();
		while (it.hasNext()){
			num=it.next();
			contenu.put(num.valeur,abo);
		}
		abo.mesAnnuaires.add(this);
	}
	
	public Abonne qui(String numero){	
		return contenu.get(numero);
	}
	
	public void desinscrire(Abonne abo){
		Set<String> clefs=this.entreesAsupprimer(abo);
		Iterator<String> it=clefs.iterator();
		String clef;
		while (it.hasNext()){
			clef=it.next();
			if (contenu.get(clef)==abo){
				contenu.remove(clef);
			}
		}
		abo.mesAnnuaires.remove(this);
	}
	
	private Set<String> entreesAsupprimer(Abonne abo){
		Set<String> res= new HashSet<String>();
		Set<String> lesClefs= contenu.keySet();
		Iterator<String> it=lesClefs.iterator();
		String clef;
		while (it.hasNext()){
			clef=it.next();
			if (contenu.get(clef)==abo){
				res.add(clef);
			}
		}
		return res;
	}
	
	public void affiche(){
		Set<String> lesClefs= contenu.keySet();
		Iterator<String> it=lesClefs.iterator();
		String clef;
		System.out.println("Annuaire :"+nom);
		while (it.hasNext()){
			clef=it.next();
			System.out.println(" ** "+ contenu.get(clef)+" "+clef);
			}
		}
}
// une mise a jour auto des abonnes
	
class Gestion{
	public static void Sauver(AnnuaireInverse annuaire, String nomF) throws IOException{
		ObjectOutputStream sortie = new ObjectOutputStream(new FileOutputStream(nomF,false));
	    sortie.writeObject(annuaire);
		sortie.close();
	}

	public static void affiche(String nomF) throws IOException,ClassNotFoundException{
		ObjectInputStream entree = new ObjectInputStream(new FileInputStream(nomF));
		AnnuaireInverse an=null;
		try{
			while (true){
				an=(AnnuaireInverse)entree.readObject();
				an.affiche();
			}
		}
		catch(EOFException e){System.out.println("Fini");entree.close();}
	}
	
	public static AnnuaireInverse restitue(String nomF) throws IOException,ClassNotFoundException{
		ObjectInputStream entree = new ObjectInputStream(new FileInputStream(nomF));
		AnnuaireInverse an=null;
		try{
			while (true){
				an=(AnnuaireInverse)entree.readObject();
			}
		}
		catch(EOFException e){System.out.println("Fini");entree.close();}
		return an;
	}
}

class TPAnnuairesFichier {
	public static void main(String[] args) throws Exception {
	
		Abonne abo=new Abonne("Michel Goto", "Lannion");
		Abonne abo2=new Abonne("Pierre Azerty", "Plouaret");
		AnnuaireInverse annuInv =new AnnuaireInverse("Annu numero 1");
		abo.addNum("0123456789");
		abo.addNum("0626498466");
		abo2.addNum("4567891230");
		abo2.addNum("0124578963");
		abo2.addNum("1478596325");

		
		annuInv.inscrire(abo);
		annuInv.inscrire(abo2);
		annuInv.affiche();
		System.out.println("On sauvegarde");
		Gestion.Sauver(annuInv,"MonFic");
		System.out.println("On affiche");
		Gestion.affiche("MonFic");
		System.out.println("On restitue :");
		AnnuaireInverse an1=Gestion.restitue("MonFic");
		an1.affiche();

	}
}