public class Commerce extends Societe{
    private int vente, salaires, materiel;

    // Constructeur
    public Commerce(String nom, int v, int s, int m){
        super(nom);
        this.vente = v;
        this.salaires = s;
        this.materiel = m;

    }
    public int benefice(){
        return this.vente - this.salaires - this.materiel;
    }

    public String toString(){
        return super.toString()+"Ventes : "+this.vente+" Salaires :"+this.salaires+" Matériel : "+ this.materiel +"\n";
    }

}
