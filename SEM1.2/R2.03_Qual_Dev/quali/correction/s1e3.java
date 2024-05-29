// Exercice 3

// Question 1/  

import java.util.InputMismatchException;
import java.util.Scanner;

public class Test {
	public static void saisieCorrect() throws InputMismatchException{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		System.out.println(n);
	}

	public static void main(String[] args) {
		boolean not_ok=true ;
		while (not_ok) {
			try {
				System.out.println("Veuillez saisir un entier :");
				saisieCorrect();
				not_ok=false;
			} catch (InputMismatchException e) {
				System.out.println("erreur de saisie");
			}
		}
	}
} 


// Question 2/


// solution 1 :

import java.util.InputMismatchException;
import java.util.Scanner;

public class Test {
	public static void saisieCorrect() throws InputMismatchException, IllegalArgumentException{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		if(n < 10) throw new IllegalArgumentException();
		System.out.println(n);
	}

	public static void main(String[] args) {
		boolean not_ok=true ;
		while (not_ok){
			try {
				System.out.println("Veuillez saisir un entier :");
				saisieCorrect();
				not_ok=false ;
			} catch (InputMismatchException e) {
				System.out.println("Saisie incorrecte");
			} catch (IllegalArgumentException e) {
			System.out.println("le nombre saisi < 10");
			}
		}
	}
}

// Solution 2 :

public class MonException extends Exception {
	private String msg = "La valeur est infénieure à 10";

	public String getMsg() {
		return msg;
	}
}

import java.util.InputMismatchException;
import java.util.Scanner;

public class Test {
	public static void saisieCorrect() throws InputMismatchException, MonException{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		if(n < 10) throw new MonException();
		System.out.println(n);
	}

	public static void main(String[] args) {
		boolean not_ok=true ;
		while (not_ok){
			try {
				System.out.println("Veuillez saisir une entier :");
				saisieCorrect();
				not_ok=false;;
			} catch (InputMismatchException e) {
				System.out.println("Format incorrecte");
			} catch (MonException e) {
				System.out.println(e.getMsg());
			}
		}
	}
} 