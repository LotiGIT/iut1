package application;

public class TPAnnuairesFichier {
	public static void main(String[] args) throws Exception {
	
		Abonne abo=new Abonne("Michel Goto", "Lannion");
		Abonne abo2=new Abonne("Pierre Azerty", "Plouaret");
		AnnuaireInverse annuInv =new AnnuaireInverse("Annu numero 1");
		abo.addNum("0123456789");
		abo.addNum("0626498466");
		abo2.addNum("4567891230");
		abo2.addNum("0124578963");
		abo2.addNum("1478596325");

		
		annuInv.inscrire(abo);
		annuInv.inscrire(abo2);
		annuInv.affiche();
		System.out.println("On sauvegarde");
		Gestion.Sauver(annuInv,"MonFic");
		System.out.println("On affiche");
		Gestion.affiche("MonFic");
		System.out.println("On restitue :");
		AnnuaireInverse an1=Gestion.restitue("MonFic");
		an1.affiche();
	}
}