public class ChevalDeCourse extends Cheval{
    private double gains;
    private Entraineur entraineur;
   
    public ChevalDeCourse(int numero, String nom, String sexe, String race, double gains, Entraineur entraineur){
    super(numero, nom, sexe, race);
    this.gains=gains;
    this.entraineur=entraineur;
    }

    public void affiche(){
        System.out.println("\nGains : "+this.gains+"€"+"\nEntraineur : \n"+this.entraineur);
    }

    public void attribueJockey(Jockey j){
        System.out.println("\nJockey : "+j.getPrenom());
    }

    


}
