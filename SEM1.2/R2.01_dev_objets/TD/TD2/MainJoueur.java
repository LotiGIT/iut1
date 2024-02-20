import java.util.ArrayList;

public class MainJoueur {
    
    // Variables d'instance
    private ArrayList<Domino>mainJ;// la main d'un joueur
    final static int NBDOMMAIN = 7; // constante comme #define en c

    //Constructeur
    public MainJoueur(){
        this.mainJ = new ArrayList<Domino>();
    }

    // getteur de mainJ
    public ArrayList<Domino>getMainj(){
        return this.mainJ;
    }

    // initialisation de la main d'un joueur
    public void initMainJ(Pioche p){
        for (int nbDom = 0; nbDom < NBDOMMAIN; nbDom++) {
            this.mainJ.add(p.piocherDomino());
        }
    }

    // afficher main d'un joueur
    public void afficherMain(){
        for (int i = 0; i < this.mainJ.size(); i++) {
            this.mainJ.get(i).afficher();
        }
    }
}
