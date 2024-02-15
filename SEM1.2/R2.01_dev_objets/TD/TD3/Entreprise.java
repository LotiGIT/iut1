public class Entreprise {
    private String raison_sociale;
    private Personne comptable;

    // Constructeur
    public Entreprise(String rs, Personne c){
        this.raison_sociale = rs;
        this.comptable = c;
        
    }

    // Méthode toString pour convertir l'objet de l'Entreprise en chaîne de caractères
    public String toString(){
        return "\nSociété : "+this.raison_sociale+"\nComptable : "+this.comptable.getNom();
    }
    // affichage de l'instance
    public void afficher(){
        System.out.println(this.toString());
    }
    //accesseur du comptable
    public Personne getComptable(){
        return this.comptable;
    }

}
