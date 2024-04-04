import java.util.*;

public class EmissionMusicale{
    
    private String nom;
    private int dureeMins;
    private ArrayList<Chanson>playlist;
    public static final int MAX = 100;

    public EmissionMusicale(String nom, int dureeMins){
        this.nom = nom;
        this.dureeMins = dureeMins;
        playlist = new ArrayList<Chanson>(MAX);
    }

    public void ajoute(Chanson c){
        playlist.add(c);
    }

    public void supprime(Chanson c){
        playlist.remove(c);
    }

    public void supprimeTout(Chanson c){
        playlist.removeAll(c);
    }

    public void play(int i){
        for (i = 0; i < playlist.size(); i++) {
            System.out.println("Texte : "+getTexte());
        }
    }

    // public void play(){

    // }

    public void boucler(int nbFois){
        for (int i = 0; i < nbFois; i++) {
            // je sais pas
        }
    }

    //méthode toString
    public String toString(){
        return "Nom de l'émission musicale : "+this.nom+"\nDurée de l'émission : "+this.dureeMins;
    }
}
