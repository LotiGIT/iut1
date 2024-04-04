import java.util.*;

public class Emission {
    // méthodes d'instances
    private String nom;
    private int dureeMins;

    public Emission(String nom, int dureeMins){
        this.nom = nom;
        this.dureeMins = dureeMins;
    }


    class Emission implements Playable{
        public void play(){
            System.out.println("L'émission est jouée");
        }
    } 

    public String getNom(){
        return this.nom;
    }

    public int getDuree(){
        return this.dureeMins;
    }

}
