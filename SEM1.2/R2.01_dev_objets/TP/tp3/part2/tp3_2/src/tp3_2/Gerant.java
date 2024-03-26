package tp3_2;

public class Gerant extends Employe{
	private int nb_H_G = 30;

    public Gerant(String nom, int age, int nb_A, int numero){
        super(nom, age, nb_A, numero);
        
    }
    
   
    public double salaireG(int nb_H_G, int nb_A){
    	return 5 * nb_H_G * (20 + nb_A/2);
    }
    
    public String toString() {
    	return "Catégorie : Gerant"+super.toString();
    }
}
