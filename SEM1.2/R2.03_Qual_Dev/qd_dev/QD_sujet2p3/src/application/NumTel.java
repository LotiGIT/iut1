package application;

import java.util.*;
import java.io.*;

public class NumTel implements Serializable{

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