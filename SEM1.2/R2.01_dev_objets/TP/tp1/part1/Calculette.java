

import java.util.*;

/*
C : calcul d’un cosinus 
S : calcul d’un sinus 
T : calcul d’une tangente 
Q : quitter le programme
*/

public class Calculette
{
    public static void main(String[] args)
    {
        Scanner clavier = new Scanner(System.in);
        System.out.println("C : calcul d’un cosinus");
        System.out.println("S : calcul d’un sinus");
        System.out.println("T : calcul d’une tangente");
        System.out.println("Q : quitter le programme");
        String string = clavier.nextLine();
        Double d;
        while (!string.equals("Q") && !string.equals("q")) {
            switch (string) {
                case "C", "c":
                    System.out.println("Valeur de l'angle en radian : ");
                    String angle = clavier.nextLine();
                    d = Double.valueOf(angle);
                    System.out.println("Le cos est : "+Math.cos(d));
                    System.out.println("\n");
                    System.out.println("C : calcul d’un cosinus");
                    System.out.println("S : calcul d’un sinus");
                    System.out.println("T : calcul d’une tangente");
                    System.out.println("Q : quitter le programme");
                    string = clavier.nextLine();
                    break;
                case "S", "s":
                    System.out.println("Valeur de l'angle en radian : ");
                    angle = clavier.nextLine();
                    d = Double.valueOf(angle);
                    System.out.println("Le sinus est :" +Math.sin(d));
                    System.out.println("\n");
                    System.out.println("C : calcul d’un cosinus");
                    System.out.println("S : calcul d’un sinus");
                    System.out.println("T : calcul d’une tangente");
                    System.out.println("Q : quitter le programme");
                    string = clavier.nextLine();
                    break;
                case "T", "t":
                    System.out.println("Valeur de l'angle en radian : ");
                    angle = clavier.nextLine();
                    d = Double.valueOf(angle);
                    System.out.println("La tangeante est : "+Math.tan(d));
                    System.out.println("\n");
                    System.out.println("C : calcul d’un cosinus");
                    System.out.println("S : calcul d’un sinus");
                    System.out.println("T : calcul d’une tangente");
                    System.out.println("Q : quitter le programme");
                    string = clavier.nextLine();
                    break;
                default:
                    System.out.println("Erreur");
                    System.out.println("\n");
                    System.out.println("C : calcul d’un cosinus");
                    System.out.println("S : calcul d’un sinus");
                    System.out.println("T : calcul d’une tangente");
                    System.out.println("Q : quitter le programme");
                    string = clavier.nextLine();
                    break;
            }
        }
        


    }
}