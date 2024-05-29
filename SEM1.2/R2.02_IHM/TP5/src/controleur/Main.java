package controleur;

import javafx.application.Application;
import javafx.stage.Modality;
import javafx.stage.Stage;
import modele.Donnees;
import modele.Employe;
import vue.FenListeEmployes;
import vue.FenModifierEmploye;
import vue.FenNouvelEmploye;

public class Main extends Application {
	static private FenListeEmployes fListe;
	static private FenNouvelEmploye fNouvel;
	static private FenModifierEmploye fModifier;

	@Override
	public void start(Stage primaryStage) throws Exception {
		Donnees.chargementDonnees();
		fListe = new FenListeEmployes();
		fNouvel = new FenNouvelEmploye();
		fModifier = new FenModifierEmploye();
		fListe.show();
		fNouvel.initModality(Modality.APPLICATION_MODAL);
		fModifier.initModality(Modality.APPLICATION_MODAL);
	}
	
	//////////////////////////////////////////////////////////
	// Gestion des fen�tres
	//////////////////////////////////////////////////////////
	static public void ouvrirNouvelEmploye() {
		fNouvel.effacer();
		fNouvel.show();
	}
	
	static public void ouvrirModifierEmploye(Employe e) {
		fModifier.show();
		fModifier.afficherEmploye(e);
	}	
	
	static public void fermerNouvelEmploye() {
		fNouvel.close();
	}
	
	static public void fermerModifierEmploye() {
		fModifier.close();
	}
	
	static public void fermerAppli() {
		System.exit(0);
	}


	
	//////////////////////////////////////////////////////////
	// Mise � jour des donn�es
	//////////////////////////////////////////////////////////
	static public void supprimerEmploye(Employe e) {
		// enregistrer la suppression
		Donnees.supprimerEmploye(e);

	}
	static public void validerNouvelEmploye(int mat, String nom, String poste, int sup, int annee, int mois, int jour, float sal, float prime, int dpt) {
    	String date = annee+"/"+mois+"/"+jour;
		Employe e = new Employe(mat, nom, poste, sup, date, sal, prime, dpt);
		Donnees.ajouterEmploye(e);
		fNouvel.close();
    	
    }
	
	static public void validerModifierEmploye(int mat, String nom, String poste, int sup, int annee, int mois, int jour, float sal, float prime, int dpt) {
    	String date = annee+"/"+mois+"/"+jour;
		Employe e = new Employe(mat, nom, poste, sup, date, sal, prime, dpt);
		Donnees.modifierEmploye(e);
    	fModifier.close();
    }

	
	
	static public void enregistrerNouvelEmploye(Employe e) {	
		Donnees.ajouterEmploye(e);
		fNouvel.close();
	}
	
	static public void modifierEmploye(Employe e) {	
		Donnees.modifierEmploye(e);
		
		fModifier.close();
	}
	
	private boolean estDecimal(String str) {
		return str.matches("\\d*(\\.\\d+)?"); 
	} 
	private boolean estEntier(String str) {
		return str.matches("\\d*"); 
	}

	
	public static void main(String[] args) {
		Application.launch(args);

	}
}
