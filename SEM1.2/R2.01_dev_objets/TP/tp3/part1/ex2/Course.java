import java.util.ArrayList;


public class Course {
    private Strong nomEpreuve;
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

    public String chevalPresent(String nom){
        return true;
    }

    public void enregistre(ChevalDeCourse c){

    }

    public void rechercheCheval(String nom){
        
    }

}
