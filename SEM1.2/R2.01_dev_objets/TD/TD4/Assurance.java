public class Assurance extends Societe {
    private int remboursements, versements;

    // Constructeur
    public Assurance( String nom, int r, int v){
        super(nom);
        this.remboursements = r;
        this.versements = v;
    }

    public int benefice(){
        return this.versements - this.remboursements; 
    }

    //toString
    public String toString(){
        return super.toString()+"\nCotisations : "+this.versements+"\nRemboursements : "+this.remboursements;
    }
}
