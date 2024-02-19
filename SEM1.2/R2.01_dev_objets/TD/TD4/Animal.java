public abstract class Animal{
    private int numero;
    private String cri;

    // Constructeur 
    public Animal(int num, String cri){
        this.numero = num;
        this.cri = cri;
    }

    // Accesseur
    public int getNum(){
        return this.numero;
    }

    public String getCri(){
        return this.cri;
    }

    // toString
    public String toString()
    {
        return "Numéro : "+this.numero+" Cri : "+ this.cri;
    }

    // affiche
    public void affiche(){
        System.out.println(this.toString());
    }

    public void cri(String Lion, String Chouette, String Ane){
        

        
    }
}
