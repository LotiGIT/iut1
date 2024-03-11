

public class Sport{
    // variables d'instances
    private int code;
    private String libelle;
    // constructeur
    public Sport(int c, String l){
        this.code= c;
        this.libelle=l;
    }

    // méthode toString
    public String toString(){
        return "Code : " + this.code +"\nLibelle : " +this.libelle;
    }

    // méthode d'affichage
    public void afficher(){
        System.out.println(this.toString());
    }



}