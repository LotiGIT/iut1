public class SportCo extends Sport{
    // méthode d'instance
    private int nbJoueurs;

// Constructeur
public SportCo(int code, String lib, int nbJ){
    super(code, lib);
    this.nbJoueurs = nbJ;
}

// méthode toString
public String toString(){
    return super.toString() + "\nNombre de joueurs : " + this.nbJoueurs;
}
}
