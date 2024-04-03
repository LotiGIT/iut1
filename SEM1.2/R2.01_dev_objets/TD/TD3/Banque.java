import java.util.ArrayList;

public class Banque {
    // méthode d'instances
    private String nom;
    private ArrayList<Compte>lesComptes;

    // Constructeur
    public Banque(String n){
        this.nom = n;
        lesComptes = new ArrayList<Compte>(100);
    }
    // ajout d'un compte
    public void ajouterCompte(Compte cc){
        lesComptes.add(cc);
    }

    // afficher
    public void afficher(){
        System.out.println("BANQUE : "+nom);
        if (this.lesComptes.size()==0) { // ou les Comptes.isEmpty() retourne le bool vrai
            System.out.println("Aucun compte à afficher");
        } else{
            System.out.println("Listes des "+this.lesComptes.size()+" comptes :");
            for (int i = 0; i < lesComptes.size(); i++) {
                System.out.println("------------");
                lesComptes.get(i).afficher();
            }
        }
    }
}
