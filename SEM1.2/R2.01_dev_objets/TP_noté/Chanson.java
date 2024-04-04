import java.util.*;

public class Chanson {
    private String titre;
    private String texte;
    private int nbMins;
    private int nbSecs;

    public Chanson(String titre, String texte, int nbMins, int nbSecs){
        this.titre = titre;
        this.texte = texte;
        this.nbMins = nbMins;
        this.nbSecs = nbSecs;
    }

    public void play(){
        System.out.println("\nTexte : " + this.texte);
    }

    public int duree(){
        return this.nbMins + this.nbSecs;
    }

    // public boolean equals(Chanson c){
    //     if (c.titre = c.titre) {
    //         return true;
    //     }
    // }

    public String getTexte(){
        return this.texte;
    }
}