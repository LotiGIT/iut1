import java.util.ArrayList;

public class LesSports {
    private ArrayList<Sport>lesSports;
    public static final int MAX = 100;
    // Constructeur
    public LesSports(){
        lesSports = new ArrayList<Sport>(MAX);
    }

    // ajout d'un sport
    public void ajouterSport(Sport ss){
        lesSports.add(ss);
    }

    //afficher
    public void afficher(){
        if (this.lesSports.size()==0) { // ou les Sports.isEmpty() retourne le bool vrai
            System.out.println("Aucun sport à afficher");
        } else{
            System.out.println("Listes des "+this.lesSports.size()+" sports :");
            for (int i = 0; i < lesSports.size(); i++) {
                System.out.println("------------");
                lesSports.get(i).afficher();
            }
        }
    }
}
