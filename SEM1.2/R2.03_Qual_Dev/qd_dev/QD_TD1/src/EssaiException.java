import java.util.Scanner;

public class EssaiException {
	public static void main(String[] args) {
		try {
			
			int a, b, res;
			Scanner clavier = new Scanner(System.in);
			System.out.println("Saisie : ");
			a = clavier.nextInt();
			b = clavier.nextInt();
			res = a / b;
			System.out.println("le résultat de " + a + " divisé par " + b + " est " + res);
			clavier.close();

		} catch (java.lang.ArithmeticException exc)
		{
			System.out.println("Alerte, c'est une division par zéro !");
		}
		System.out.println ("Fin du programme");
	}
}