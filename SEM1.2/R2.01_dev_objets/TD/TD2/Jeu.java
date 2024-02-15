package TD2;

import java.io.*;
import java.util.*;

public class Jeu {
    public static void main(String[] args) {
        
        final int N = 28;
        String reponse;
        int g, d;
        Scanner scan = new Scanner(System.in);
        // création de la table de jeu
        Table une_table = new Table (N);

        //lancement du jeu
        System.out.println("Le jeu commence");
        do{
            g = Saisie.nextInt();
            System.out.println("entrez la valeur gauche : ");

            pose = une_table.recherche(g, d);
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
            une_table.afftable();
            System.out.println("Arrêter(oui/non) ?");
            reponse=scan.nextLine();
        } while(reponse.compareTo("oui")!=0);
    }
} // fin de la classe Jeu
