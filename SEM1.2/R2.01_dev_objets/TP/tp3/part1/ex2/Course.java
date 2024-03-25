import java.util.ArrayList;


public class Course {
    // variables d'instances 
    private String nomEpreuve;
    private double dotation;
    private ArrayList<ChevalDeCourse>chevauxDeCourses;
    public static final int MAX = 100;
    

    public Course(String nomEpreuve, double dotation){
        this.nomEpreuve=nomEpreuve;
        this.dotation=dotation;
        chevauxDeCourses = new ArrayList<ChevalDeCourse>(MAX);
    }

    public void affiche(ChevalDeCourse c){
        System.out.println("Nom : "+c.getNom()+"\nDotation : "+this.dotation);
    }

    public boolean chevalPresent(String nom){
        // Boucle pour parcourir le tableau de chevaux et trouver si un nom est le même que celui dans la liste
        for (int i = 0; i < chevauxDeCourses.size(); i++) {
            if (nom.equals(chevauxDeCourses.get(i).getNom())) {
                // System.out.println("Le cheval est présent dans la course\n");
                return true;
            }
                // System.out.println("Il n'y a pas de cheval\n");
        }
        return false;
    }

    public void enregistre(ChevalDeCourse c){
        
        Cheval c1;
        for (int i = 0; i < chevauxDeCourses.size(); i++) {
            if (c.equals(chevauxDeCourses.get(i).getNom())) {
                c1 = chevauxDeCourses.get(i);
                System.out.println("Le cheval est déjà présent dans la course\n");
            }
        }
        //if (c1!=chevauxDeCourses) {
            chevauxDeCourses.add(c);
        //}
        

        
    }

    public void rechercheCheval(String nom){
        for (int i = 0; i < chevauxDeCourses.size(); i++) {
            if (nom.equals(chevauxDeCourses.get(i).getNom())) {
                System.out.println("Le cheval est déjà présent dans la course\n");
            }
        }
        System.out.println("Absent\n");
    }

    public Cheval meilleureCote(){
        double max = 0;
        Cheval c = null;
        for (int i = 0; i < chevauxDeCourses.size(); i++) {
            if (max < chevauxDeCourses.get(i).getGains()) {
                max = chevauxDeCourses.get(i).getGains();
                c = chevauxDeCourses.get(i);
                

            }
        }
        return c;
    }

}
