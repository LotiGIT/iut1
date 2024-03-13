public class Jockey extends Personne{
    private double poids;
    private double salaire;

    public Jockey(String nom, String prenom, String adresse, double poids, double salaire){
        super(nom, prenom, adresse);
        this.poids =poids;
        this.salaire = salaire;
    }

    public String toString(){
        return super.toString()+"\nPoids : "+this.poids+"kg"+"\nSalaire : "+this.salaire+"€\n";
    }

}
