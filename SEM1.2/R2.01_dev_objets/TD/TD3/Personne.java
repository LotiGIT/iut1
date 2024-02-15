public class Personne {
    private String nom, prenom, adresse;
    //Constructeur
    public Personne(String nom, String prenom, String adresse){
        this.nom = nom;
        this.prenom = prenom;
        this.adresse = adresse;
    }
    //Méthode toString
    public String toString(){
        return this.nom +" "+ this.prenom +" habitant "+ this.adresse;
    }
    // Affichage de l'instance
    public void afficher(){
        System.out.println(this.toString());
    }

    public String getNom(){
        return this.nom;
    }

    
}
