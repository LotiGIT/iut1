import java.util.*;
// import java.io.*; // Pour Scanner

public class Saisie
{
    
    public static void main(String[] args)
    {   
        // déclarations de variables
        String ligne;
        StringBuffer buff;
        char car;
        int i, pos;
        final int DECALAGE = 2; // constante entier

        Scanner entree = new Scanner(System.in);

        //saisie de la chaine à coder
        System.out.println("ligne à coder : ");
        ligne = entree.next();

        // codage de la chaine
        buff = new StringBuffer(ligne); // création du String Buffer
        for (i = 0; i < buff.length(); i++) // boucle sur le buffer
        {
            car=buff.charAt(i);// extraction de chaque caractère
            pos = (int) (Character.toLowerCase(car)) - (int)'a';//  minuscule -'a'-> entier
            pos=(pos + DECALAGE)%26;    // décalage
            car = (char)((int) 'a' + pos);  //  retour en caractère 
            buff.setCharAt(i, car); //  Placement dans le StringBuffer 
        }   
        ligne = new String(buff);   // Convertion en String
        System.out.println("chaine codee = " +ligne);
    }
}