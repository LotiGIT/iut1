public class CompteEntreprise extends Compte{
    private Entreprise proprietaire;

    // constructeur
    public CompteEntreprise(String num, Entreprise ent){

        super(num, ent.getComptable());

        this.proprietaire = ent;
    }
    // conversion de l'objet en chaine de caractère
    public String toString(){
        return super.toString()+ " Propriétaire : "+this.proprietaire.toString();
    }

}
