
import java.io.*;
import java.util.*;


public class Table {
    // variables d'instances
    private int nb_domino;
    private Domino[] tab;

    // Constructeur
    public Table(int n){
        this.tab= new Domino[n];
        this.nb_domino=0;
    }

    // initialiser le jeu avec 1 domino
    public void initTable(){
        int g, d;
        Scanner scan = new Scanner(System.in);
        int i=0; // indice du domino saisie
        // saisie des valeurs du domino
        System.out.println("1er domino");
        System.out.println("entrez la valeur de gauche : ");
        g = scan.nextInt();
        System.out.println("entrez la valeur de droite : ");
        d = scan.nextInt();
        // création et affectation du domino dans le tableau
        Domino dom=new Domino(g, d);
        this.tab[i]=dom;
        // incrémenter
        i++;
        this.nb_domino = i;
    }

    // affiche le jeu
    public void affTable(){
        System.out.println("table de "+nb_domino+" domino");
        for (int i = 0; i < this.nb_domino; i++) {
            this.tab[i].afficher();
        }
    }

    public int recherche(int g, int d){
        // pose possible à gauche ?
        if (this.tab[0].laGauche() == d || this.tab[0].laGauche() == g) {
            return -1;
        }
        // pose possible à droite ?
        else if (this.tab[0].laDroite() == d || this.tab[0].laDroite()== d) {
            return 1;
        }
        else {
            return 0;
        }

    }

    public void poserAgauche(int g, int d){
        System.out.println("poser à gauche");
        // création du domino
        Domino dom = new Domino(g, d);
        //sens du domino 
        if (dom.laGauche()==this.tab[0].laGauche()) {
            System.out.println("inverser"); // d du nouveau domino = g du 1er domino
            dom.inverser();
        }
        for (int i = this.nb_domino; i > 0; i--) {
            this.tab[i]=this.tab[i-1];
        }
        this.tab[0]=dom;
        this.nb_domino++;

    }

    public void poserAdroite(int g, int d){
        
        
        Domino dom = new Domino(g, d);

        if(this.tab[this.nb_domino].laGauche() == g && this.tab[this.nb_domino].laGauche() !=d)
        {
            System.out.println("Inverser");
            dom.inverser();
        }
        this.tab[this.nb_domino] = dom;
        this.nb_domino ++;
    }
}
