public class Compte {
        private String numero;
        private Personne titulaire;
        private double solde;

        //Constructeur
        public Compte(String numero, Personne titulaire){
            this.numero = numero;
            this.titulaire = titulaire;
            this.solde = 0;

        }
        // accesseur du solde
        public double getSolde(){
            return this.solde;
        }
        // mutateur de solde
        public void setSolde(double montant){
            this.solde = montant;
        }
        // Méthode toString
        public String toString(){
            return "Compte n° : "+this.numero+ "\nTitulaire : "+this.titulaire+"\nSolde de :  "+this.solde+"€";
        }
        // Méthode afficher
        public void afficher(){
            System.out.println(this.toString());
        }
        // Méthode déposer
        public void deposer(double somme){
            this.solde = this.solde+somme;
            System.out.println("Ajout de : "+somme+"€");
        }
        // Méthode retirer avec solde nécessaire
        public void retirer(double somme){
            if (this.solde - somme >=0) {
                this.solde = this.solde - somme;
                System.out.println("Retrait de : "+somme+"€");
            }
            else{
                System.out.println("Retrait impossible, somme trop importante ("+somme+" > "+this.solde+")");
            }
            
        }
}


