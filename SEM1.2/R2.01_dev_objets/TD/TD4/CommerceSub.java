public class CommerceSub extends Commerce{
    private int subvention;

    public CommerceSub(String nom, int v, int sal, int m, int sub){
        super(nom, v, sal, m);
        this.subvention = sub;

    }
    public int benefice(){
        return super.benefice() + subvention;
    }

    // toString
    public String toString(){
        return super.toString()+"Subventions : "+ this.subvention;
    }
}
