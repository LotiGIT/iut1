package application4;

// import date

import java.util.*;
import java.util.Iterator;


public class Principale {
    public static void main(String[] args){

        System.out.println("###################   Question 7   #######################");
        Acteur acteur1 = new Acteur("Jean", "Dujardin");
        Acteur acteur2 = new Acteur("Omar", "Sy");
        Acteur acteur3 = new Acteur("Marion", "Cotillard");
        Film bis = new Film("Bis", 102, "Français", "Deux amis d'enfance se retrouvent et se retrouvent projetés en 1986.");
        bis.ajouterActeur(acteur3);
        bis.ajouterActeur(acteur2);
        bis.ajouterActeur(acteur1);
        bis.affiche();

        System.out.println(" ----------------   Film 2  -----------------");
        Film lesIntouchables = new Film("Les Intouchables", 112, "Français", "Un aristocrate engage un jeune de banlieue pour l'aider à se déplacer.");
        Acteur acteur4 = new Acteur("François", "Cluzet");
        Acteur acteur5 = new Acteur("Audrey", "Fleurot");
        Acteur acteur6 = new Acteur("Anne", "Le Ny");
        lesIntouchables.ajouterActeur(acteur5);
        lesIntouchables.ajouterActeur(acteur4);
        lesIntouchables.ajouterActeur(acteur6);
        lesIntouchables.affiche();


        List <Seance> seances = new ArrayList<Seance>();
        
        Date dataSeance = new SimpleDateFormat("dd/MM/yyyy").parse("18/03/2017");

        Seance seabceMatinee = new Seance(dataSeance, "Matinee");
        seances.add(seabceMatinee);
        Seance seanceDebutApresMidi  = new Seance(dataSeance, "Debut apres midi");
        seances.add(seanceDebutApresMidi);
        Seance seanceFinApresMidi = new Seance(dataSeance, "Fin apres midi");
        seances.add(seanceFinApresMidi);
        Seance seanceSoiree = new Seance(dataSeance, "Soiree");
        seances.add(seanceSoiree);

        seabceMatinee.ajouterProgrammer(bis);
        seanceSoiree.ajouterProgrammer(bis);

        seanceDebutApresMidi.ajouterProgrammer(lesIntouchables);
        
        Iterator<Seance> it = seances.iterator();

        System.out.println("###################   Les seances programmes  #######################");
        while(it.hasNext()){
            Seance current = it.next();
            current.affiche();
            System.out.println("--------------------------------------------------------------------");
        }
    }
}
