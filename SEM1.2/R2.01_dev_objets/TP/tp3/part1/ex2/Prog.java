public class Prog {
    public static void main(String[] args) {
        // création des entraineurs
        Entraineur e1 = new Entraineur("Janot", "Eliott", "109 rue de l'aerodrome", 1 );
        Entraineur e2 = new Entraineur("Thuault", "Nathan", "18 rue roger nimier", 2 );

        // création des Jockey
        Jockey j1 = new Jockey("Truc", "Benjamin", "jspas", 55.2, 836.25);
        Jockey j2 = new Jockey("Machin", "Cesar", "Palace", 72.8, 6352.86);

        // création chevaux
        Cheval c1 = new Cheval(22, "Poney", "Masculin", "Arabe");
        Cheval c2 = new Cheval(35, "Tonnerre", "Feminin", "Irlandais");
        Cheval c3 = new Cheval(29, "Malin", "Masculin", "Francais");

        // création chevaux de course
        ChevalDeCourse cc1 = new ChevalDeCourse(38, "Money", "Masculin", "Espagnol", 100324.90, e1);
        
        //entraineur
        System.out.println("Entraineurs : \n");
        System.out.println(e1);
        System.out.println(e2);
        System.out.println("---------------------------\n");
        System.out.println("Jockeys : \n");
        System.out.println(j1);
        System.out.println(j2);
        System.out.println("---------------------------\n");
        System.out.println("Chevaux : \n");
        System.out.println(c1);
        System.out.println(c2);
        System.out.println(c3);
        System.out.println("---------------------------\n");
        System.out.println("Chevaux de courses : \n");
        System.out.println(cc1);
        cc1.affiche();
        System.out.println("---------------------------\n");


        // Création d'une course

        



        
    }
}
