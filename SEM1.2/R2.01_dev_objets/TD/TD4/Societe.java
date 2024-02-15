public abstract class Societe {
    // Instances
    private String nom;
    

    // Constructeur
    public Societe(String nom){
        this.nom = nom;
    }

    // Accesseur
    public String getNom(){
        return this.nom;
    }

    // toString
    public String toString(){
        return "Société : "+this.getNom()+" Bénéfice : "+this.benefice()+"€\n";
    }

    // Methode afficher
    public void affiche(){
        System.out.println(this.toString());
    }
    
    // Methode abstraite (prototype)
    public abstract int benefice();
}
