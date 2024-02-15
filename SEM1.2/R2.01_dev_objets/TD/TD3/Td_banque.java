import java.util.*;

public class Td_banque{
    public static void main(String[] args) {
        Personne p1 = new Personne("Dupond", "Tom", "Lannion");
        Personne p2 = new Personne("Durand", "Kevin", "Perros");
        p1.afficher();
        p2.afficher();
        Compte c1 = new Compte("1", p1);
        c1.afficher();
        c1.deposer(1000.00);
        c1.afficher();
        c1.retirer(100);
        c1.afficher();

        System.out.println("\nCompte Rémunéré : ");
        CompteRemunerer c2 = new CompteRemunerer("222", p2, 3.5);
        c2.afficher();
        c2.deposer(300);
        c2.afficher();
        c2.retirer(50);
        c2.afficher();

        Entreprise e1 = new Entreprise("BlackRock", p1);
        e1.afficher();

        CompteEntreprise ce1 = new CompteEntreprise("101", e1);
        ce1.afficher();
        ce1.deposer(200);
        ce1.retirer(100);
        ce1.afficher();
        ce1.mettreSoldeAZero();
        ce1.afficher();

        // création d'une banque avec MAX comptes
        Banque b = new Banque("Crédit IUT");
        b.ajouterCompte(ce1);//compte entreprise
        b.ajouterCompte(c1);// compte non rémunéré
        b.ajouterCompte(c2); // compté rémnunéré
        b.afficher();
        c2.deposer(100);
        b.afficher();

    }
}
