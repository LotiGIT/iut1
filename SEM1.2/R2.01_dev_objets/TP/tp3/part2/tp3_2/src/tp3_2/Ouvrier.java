package tp3_2;

public class Ouvrier extends Employe{
	  private final int nb_H_O = 35;

	    public Ouvrier(String nom, int age, int nb_A, int numero){
	        super(nom, age, nb_A, numero);
	     
	    }

	    
	    public double salaireO(int nb_H_O, int nb_A){
	    	double salaire =  4 * nb_H_O * (10 + nb_A/2);
	    	return salaire;
	    }
	    
	    public String toString() {
	    	return "Catégorie : Ouvrier "+super.toString();
	    }
}
