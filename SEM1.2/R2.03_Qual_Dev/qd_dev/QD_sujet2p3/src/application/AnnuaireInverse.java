package application;

import java.util.*;
import java.io.*;

public class AnnuaireInverse implements Serializable{
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