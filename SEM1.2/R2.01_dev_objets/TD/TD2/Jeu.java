
import java.util.*;

public class Jeu {
    public static void main(String[] args) {
        
        final int NbDomMax = 28;
        String reponse;
        int g, d;
        Scanner scan = new Scanner(System.in);
        // création de la table de jeu
        Table une_table = new Table (NbDomMax);

        // Création de la pioche
        Pioche unePioche = new Pioche(NbDomMax);

        // initialisation de la pioche
        unePioche.initPioche();

        //affichage de la pioche
        unePioche.affichePioche();

        System.out.println("Main 1");

        // création de la main du 1er joueur
        MainJoueur mainjoueur1 = new MainJoueur();

        // initialisation de la main
        mainjoueur1.initMainJ(unePioche);

        // affichage de la main
        System.out.println("Main joueur 1");
        mainjoueur1.afficherMain();
        System.out.println(" Main2");

        // création de la main du 2ème joueur
        MainJoueur mainjoueur2 = new MainJoueur();

        // initialisation de la main
        mainjoueur2.initMainJ(unePioche);

        // affichage de la main
        System.out.println("Main joueur 2");
        mainjoueur2.afficherMain();
        
        //lancement du jeu
        System.out.println("Le jeu commence");
        do{
            System.out.println("entrez la valeur gauche : ");
            g = scan.nextInt();
            System.out.println("entrez la valeur droite : ");
            d = scan.nextInt();

            int pose = une_table.recherche(g, d);
            System.out.println("pose :"+pose);
            switch (pose) {
                case -1:
                    une_table.poserAgauche(g, d);
                    break;
                case 0:
                    System.out.println("pose impossible !");
                    break;
                case 1:
                    une_table.poserAdroite(g, d);
                    break;
            }
            une_table.affTable();
            System.out.println("Arrêter(oui/non) ?");
            reponse=scan.nextLine();
        } while(reponse.compareTo("oui")!=0);
    }
} // fin de la classe Jeu
