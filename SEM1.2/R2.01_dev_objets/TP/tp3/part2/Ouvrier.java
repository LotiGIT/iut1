public class Ouvrier extends Employe{
    private int nb_H_O = 35;

    public Ouvrier(String nom, int age, int nb_A, int numero, int nb_H_O){
        super(nom, age, nb_A, numero);
        this.nb_H_O=nb_H_O;
    }
}
