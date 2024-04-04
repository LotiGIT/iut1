import java.util.ArrayList;

public class Programmation implements Playable{
    // méthodes d'instances
    private ArrayList<EmissionMusicale>emissions;
    public static final int MAX = 100;

    // constructeur sans paramètre
    public static void main(String[] args){
        System.out.println("\nNom de l'émission : "+getNom()+"\nDurée totale : "+getDuree()+"Texte : "+getTexte());
   }

   // méthode ajouter Emission
   public void ajouterEmission(Emission e){
    emissions.add(e);
   }

   //Méthode duree totale
   public void dureeTotales(int duree){
    duree = 0;
        for (int i = 0; i < emissions.size(); i++) {
            duree += getduree().get(i);
        }
    System.out.println("Durée totale : "+duree+"mins");
   }
}
