package application;

import java.util.*;
import java.io.*;


public class Gestion{
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