public class Film {

    private String titre;
    private int duree;
    private String nationnalite;
    private String resume;

    // Constructeur
    public Film(String titre, int duree, String nationnalite, String resume){
        this.titre = titre;
        this.duree = duree;
        this.nationnalite = nationnalite;
        this.resume = resume;
    }

    //Films egaux
    public boolean equals(Film f){
        return this.titre.equals(f.getTitre());
    }

    // affichage caractéristique du film
    public void affiche(){
        System.out.println(this.titre+"     Film "+this.nationnalite+" de "+this.duree+"mn\n\n"+"Résumé : "+this.resume);
    }

    public String getTitre(){
        return titre;
    }

    public void setTitre(String titre){
        this.titre = titre;
    }

    public int getDuree(){
        return duree;
    }


}
