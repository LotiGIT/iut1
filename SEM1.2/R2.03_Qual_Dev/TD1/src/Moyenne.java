import java.util.Scanner;

public class Moyenne {
	static int moyenne(String [] valeurs)
	{
		int a,b,c,d,e, res;
		Scanner clavier = new Scanner(System.in);
		System.out.println("Saisie 1  : ");
		a = clavier.nextInt(); 
		System.out.println("Saisie 2  : ");
		b = clavier.nextInt();
		System.out.println("Saisie 3  : ");
		c = clavier.nextInt();
		System.out.println("Saisie 4  : ");
		d = clavier.nextInt();
		System.out.println("Saisie 5  : ");
		e = clavier.nextInt();
		
		res = (a + b+c+d+e)/5;
		System.out.println("Moyenne : "+res);
		System.out.println ("Fin du programme") ;
		clavier.close();
		return res;
	}
}
