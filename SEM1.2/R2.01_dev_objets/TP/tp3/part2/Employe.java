public abstract Class Employe{
    // variables d'instances
    private String nom;
    private int age;
    private int nb_A;
    private int numero;

    public abstract Employe(String nom, int age, int nb_A, int numero){
        this.nom = nom;
        this.age = age;
        this.nb_A = nb_A;
        this.numero = numero;
    }
}