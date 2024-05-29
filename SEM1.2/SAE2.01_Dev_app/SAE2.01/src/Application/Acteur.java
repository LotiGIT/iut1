package Application;

public class Acteur {

    private String prenom;
    private String nom;

    // Constructeur
    public Acteur(String prenom, String nom){
        this.prenom = prenom;
        this.nom = nom;
    }

    //accesseur
    public String getnom(){
        return this.nom;
    }

    // accesseur
    public String getPrenom(){
        return this.prenom;
    }


    public void affiche(){
        System.out.println(this.prenom +" "+ this.nom);
    }

    public boolean equals(Acteur acteur){
        return this.prenom.equals(acteur.getPrenom()) && (this.nom.equals(acteur.getnom()));
    }

    public void setNom(String nom){
        this.nom = nom;
    }

    public void setPrenom(String prenom){
        this.prenom = prenom;
    }


}

