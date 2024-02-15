public class CompteRemunerer extends Compte{
    private double taux;
    //Constructeur
    public CompteRemunerer(String n, Personne p, double t){
        super(n, p);
        this.taux = t;
    }
    // Méthode toString
    public String toString(){
        return super.toString()+ " au taux : "+this.taux+"%";
    }
    // Méthode afficher
    public void afficher(){
        System.out.println(this.toString());
    }
    // Méthode de versement
    public void versementInt(){
        this.setSolde(this.getSolde()+(this.taux/100*this.getSolde()));
    }
}
