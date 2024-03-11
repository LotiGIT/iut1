
public class Domino{
    // variables d'instances
    private int gauche;
    private int droite;
    // Constructeur
    public Domino(int g, int d){
        this.gauche=g;
        this.droite=d;
    }
    // méthode d'instance afficher()
    public void afficher() {
        System.out.println(this.gauche + " " + this.droite);
    }
    // méthode d'instance inverser()
    public void inverser(){
        int temporaire; 
        temporaire = this.gauche;
        this.gauche = this.droite;
        this.droite = temporaire;
    }
    // méthode d'instance laGauche() et laDroite()
    public int laGauche(){
        return this.gauche;
    }

    public int laDroite(){
        return this.droite;
    }

    

}
