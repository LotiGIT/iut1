package application;

import java.util.*;
import java.io.*;


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