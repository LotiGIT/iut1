public class Entraineur extends Personne{
    private int numero;

    public Entraineur(String nom, String prenom, String adresse, int numero){
        super(nom, prenom, adresse);
        this.numero = numero;
    }

    public String toString(){
        return super.toString()+"\nNuméro de license : n°"+this.numero+"\n";
    }
}
