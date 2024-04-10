import java.util.Scanner;

public class EssaiException {
	
	public static void main(String[] args) 
	{
		
				int a, b, res;
				Scanner clavier = new Scanner(System.in);
				System.out.println("Saisie 1  : ");
				a = clavier.nextInt(); 
				System.out.println("Saisie 2  : ");
				b = clavier.nextInt();
				try 
				{
					res = a / b;
					System.out.println("le résultat de " + a + " divisé par " + b + " est " + res);
					System.out.println ("Fin du programme") ;
					clavier.close();
		 } 
		catch(Exception e) 
		{
			System.out.println("Alerte, c’est une division par zéro !!");
			System.out.println("Fin du programme ");
		}
		
	}
}
	

