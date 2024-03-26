package tp3_2;

public abstract class Employe{
    // variables d'instances
    private String nom;
    private int age;
    private int nb_A;
    private int numero;

    public Employe(String nom, int age, int nb_A, int numero){
        this.nom = nom;
        this.age = age;
        this.nb_A = nb_A;
        this.numero = numero;
    }
    
    public String toString() {
    	return "\nNom : "+nom+"\nAge : " +age+"ans"+"\nAnnées d'experience : "+nb_A+" années"+"\nNuméro : "+numero+"\n";
    }
}
