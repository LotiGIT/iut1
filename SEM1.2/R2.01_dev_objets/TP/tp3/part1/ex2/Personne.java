public class Personne{
    //variables d'instances
    private String nom;
    private String prenom;
    private String adresse;

    //constructeur
    public Personne(String nom, String prenom, String adresse){
        this.nom = nom;
        this.prenom = prenom;
        this.adresse = adresse;
    }
    //méthode toString
    public String toString(){
        return "Nom : "+this.nom+"\nPrenom : "+this.prenom+"\nAdresse : "+this.adresse;
    }

    // guetteur
    public String getPrenom(){
        return this.prenom;
    }

    // méthode afficher
    // public void afficher(){
    //     if (this.Personne.size()==0){
    //         System.out.println("Aucune données");
    //     }else{

    //     }
    // }

}