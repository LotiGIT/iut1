import java.util.*;
import java.util.ArrayList;

public class Voiture{
    private String immatriculation;
    private String modele;
    private int kilometre;
    private float tarif;

    public Voiture(){
       
        Scanner sc = new Scanner(System.in);
        System.out.println("Immatriculation du véhicule : ");
        String ima = sc.nextLine();
        System.out.println("Modèle du véhicule : ");
        String m = sc.nextLine();
        System.out.println("Nombre de kms parcouru : ");
        int km = sc.nextInt();
        System.out.println("Tarif de location : ");
        float t = sc.nextFloat();

        this.immatriculation = ima;
        this.modele = m;
        this.kilometre = km;
        this.tarif = t;
    }

    public String getImatriculation(){
        return immatriculation;
    }

    public String getModele()
    {
        return modele;
    }

    public int getKilometre()
    {
        return kilometre;
    }

    public float getTarif()
    {
        return tarif;
    }

    public void setKilometre(int kilometre){
        this.kilometre = kilometre;
    }

    public void setTarif(float tarif){
        this.tarif = tarif;
    }

    public void affichage(){
        System.out.println("Immatriculation : " +immatriculation+ "\nModele : "+modele+"\nKilomètres : " +kilometre+ "\nTarif : "+tarif);
    }

    public void supprimer()
    {

    }

    public static void main(String[] args) {
        Scanner clavier = new Scanner(System.in);
        System.out.println("A : ajouter un véhicule");
        System.out.println("S : supprimer un véhicule");
        System.out.println("L : Lister les véhicules");
        System.out.println("Q : quitter le programme");
        String string = clavier.nextLine();
        ArrayList<Voiture> list = new ArrayList<Voiture>();
        while (!string.equals("Q") && !string.equals("q")) {
            switch (string) {
                case "A", "a":
                    list.add(new Voiture());
                case "S", "s":
                    
                case "L", "l":
                    System.out.println("La liste contient " + list.size() + " élément.s");
                default:
                    System.out.println("\n");
                    System.out.println("A : ajouter un véhicule");
                    System.out.println("S : supprimer un véhicule");
                    System.out.println("L : Lister les véhicules");
                    System.out.println("Q : quitter le programme");
                    string = clavier.nextLine();
            }
        }
        
        
        
        
    }
}