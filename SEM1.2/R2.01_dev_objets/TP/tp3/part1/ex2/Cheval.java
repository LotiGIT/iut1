public class Cheval {
    private int numero;
    private String nom;
    private String sexe;
    private String race;
    public static int nbChevaux;
    private int id;



    public Cheval(int numero, String nom, String sexe, String race){
        this.numero = numero;
        this.nom = nom;
        this.sexe = sexe;
        this.race = race;
        id = nbChevaux++;
    }

    public String toString(){
        return "Identifiant : "+this.id+"\nNuméro : "+this.numero+"\nNom : "+this.nom+"\nSexe : "+this.sexe+"\nRace : "+this.race+"\n";
    }

    public String getNom(){
        return "Nom : "+this.nom;
    }
}
