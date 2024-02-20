import java.util.ArrayList;

public class Pioche {

    // Variables d'instance
    private ArrayList<Domino>piocheJeu; // la pioche du jeu

    // Constructeur
    public Pioche(int n){
        this.piocheJeu= new ArrayList<Domino>(n);
    }

    // initialiser la pioche avec tous les dominos
    public void initPioche(){
        for(int valG=0;valG <=6; valG++){
            for (int valD= 0; valD <= 6; valD++) {
                this.piocheJeu.add(new Domino(valD, valG));
            }
        }
    }

    // piocher un domino //
    public Domino piocherDomino(){
        if(!this.piocheJeu.isEmpty()){
            int indexPioche = (int)(Math.random() * this.piocheJeu.size());
            return this.piocheJeu.remove(indexPioche);

        } else{
            System.out.println("Plus de dominos disponibles !");
            return null;
        }
    }

    // affiche les dominos dans la pioche
    public void affichePioche(){
        
        for (int i = 0; i < this.piocheJeu.size(); i++) {
            this.piocheJeu.get(i).afficher();
        }

    }
}