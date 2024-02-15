import java.io.*; // Pour Scanner
import java.util.*;

public class Palindrome {

    public static void main(String[] args)
    {
        // variables
        String ligne;
        int longueur;
        char car;
        StringBuffer buff;

        Scanner entree = new Scanner(System.in);

        // saisie d'une nouvelle chaine
        System.out.println("Votre chaine à tester :");
        
        ligne = entree.next();

        // est-ce un palindrome
        longueur = ligne.length();
        buff = new StringBuffer(ligne);
        for (int i = 0; i < buff.length(); i++) {
            // séléction du caractère i
            car = ligne.charAt(i);
            //construction du string buffer
            buff.setCharAt(longueur-i-1, car);
        }
        // affichage du String Buffer et comparaison
        System.out.println("L'inverse est " +buff);

        if (ligne.equals(buff.toString())) {
            System.out.println("Palindrome");
        }
        else
        {
            System.out.println("Pas palindrome");
        }
    }
    

}
