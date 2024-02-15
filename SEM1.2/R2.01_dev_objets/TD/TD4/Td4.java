public class Td4 {
    
    public static void main(String[] args) {
        Commerce c1 = new Commerce("Docker", 150, 1, 1000 );
        c1.affiche();
        

        CommerceSub c2 = new CommerceSub("LA cité blanche", 654, 22, 36, 1000);
        c2.affiche();
        

        Assurance a1 = new Assurance("TqtOseille", 100, 105);
        a1.affiche();

    }
}
