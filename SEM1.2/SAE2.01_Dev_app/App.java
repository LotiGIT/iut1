import java.util.*;

public class App {
    public static void main(String[] args){
        Acteur acteur = new Acteur("Brad", "Pitt");
        acteur.affiche();
        
        Acteur acteur2 = new Acteur("Brad", "Pitt2");

        if(acteur.equals(acteur2)){
            System.out.println("Les acteurs sont les mêmes");
        }else{
            System.out.println("Les acteurs sont différents");
        }

        Acteur acteur3 = new Acteur("Brad", "Pitt");

        if (acteur.equals(acteur3)){
            System.out.println("Les acteurs sont les mêmes");
        }else{
            System.out.println("Les acteurs sont différents");
        }
        System.out.println("################    Question 2  ##################");

        Film film = new Film("La haine", 187, "Française", "Trop bien le film");

        film.affiche();

        System.out.println("\n");

        Film film2 = new Film("Le roi Lion", 114, "Américaine", "WOW");

        if(film.equals(film2)){
            System.out.println("Les films sont les mêmes");
        }else{
            System.out.println("Les films sont différents");
        }

        System.out.println("################    Question 3  ##################");

        Seance seance1 = new Seance(new Date(), "Thriller");
        seance1.affiche();

        System.out.println("\n");

        seance1.ajouterProgrammer(film);
        seance1.affiche();

        Seance seance2 = new Seance(new Date(), "Thriller");
        seance2.affiche();

        System.out.println("\n");

        if (seance1.equals(seance2)){
            System.out.println("Les séances sont les mêmes");

        }else{
            System.out.println("Les séances sont différentes");
        }
    }
}
