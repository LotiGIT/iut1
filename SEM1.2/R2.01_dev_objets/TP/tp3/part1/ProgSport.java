public class ProgSport {
    public static void main(String[] args) {
        // création de 5 sports
        SportCo s1 = new SportCo(1, "football", 21);
        Sport s2 = new Sport(2, "natation");
        SportCo s3 = new SportCo(3, "basket", 14);
        Sport s4 = new Sport(4, "tennis de table");
        SportCo s5 = new SportCo(5, "volley", 15);

        // ajouter sports
        LesSports ls1= new LesSports();
        ls1.ajouterSport(s1);
        ls1.ajouterSport(s2); 
        ls1.ajouterSport(s3); 
        ls1.ajouterSport(s4); 
        ls1.ajouterSport(s5);



        // afficher MAX sports
        System.out.println("Nombre MAX de sports : " + LesSports.MAX);

        //affiche
        ls1.afficher();
    }
}
