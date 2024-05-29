
public class Chenil {
	//variables d'instances
	private String nom;
	//collection de Chien
	private Chien[] chien;
	
	// Constructeur
	public Chenil(String nom, Chien[] chien) {
		this.nom = nom;
		this.chien = chien;
	}
	
	//méthode afficher()
	public String afficher() {
		String str = "Chenil " + nom + " :\n";
		for (int i = 0; i < chien.length; i++) {
			str += chien[i] + "\n";
		}
		return str;
	}

	//affcher la collection de chien
	public void afficherChien() {
		for (int i = 0; i < chien.length; i++) {
			System.out.println(chien[i]);
		}
	}

	
	//méthode ajouterUnChien()
	public void ajouterUnChien(Chien chien) {
		//créé un tableau temporaire de taille égale à la taille du tableau chien + 1
		Chien[] temp = new Chien[this.chien.length + 1];
		//copier les éléments du tableau chien dans le tableau temp
		for (int i = 0; i < this.chien.length; i++) {
			temp[i] = this.chien[i];
		}
		//ajoute le chien à la fin du tableau temp
		temp[temp.length - 1] = chien;
		//affecte le tableau temp au tableau chien
		this.chien = temp;
	}
	
	//méthode retirerUnChien()
	public void retirerUnChien(Chien chien) {
		//créé un tableau temporaire de taille égale à la taille du tableau chien - 1
		Chien[] temp = new Chien[this.chien.length - 1];
		//copie les éléments du tableau chien dans le tableau temp
		int j = 0;
		for (int i = 0; i < this.chien.length; i++) {
			if (this.chien[i] != chien) {
				temp[j] = this.chien[i];
				j++;
			}
		}
		//affecte le tableau temp au tableau chien
		this.chien = temp;
	}
}
