package tp3_2;

import java.util.ArrayList;

public class ListeEmployes {
	private ArrayList<Employe>listeDesEmployes;
	public static final int MAX = 100;
	
	public void ajouterEmploye(Employe e) {
		listeDesEmployes.add(e);
	}
}
