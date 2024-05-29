import java.util.Scanner;

public class EssaiException {
	public static void main(String[] args) {
		int a, b, res;
		Scanner clavier = new Scanner(System.in);
		a = clavier.nextInt(); b = clavier.nextInt();
		res = a / b;
		System.out.println("le résultat de " + a + " divisé par " + b + " est " + res);
		System.out.println ("Fin du programme");
		clavier.close();
	}
}