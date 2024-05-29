// Exercice 1/

// Question 1/  ArithmeticException

// Question 2/

import java.util.Scanner;

public class EssaiException {
public static void main(String[] args) {
int a, b, res;
Scanner clavier = new Scanner(System.in);
a = clavier.nextInt(); b = clavier.nextInt();
		
		 try { 
 			 res = a / b;  
  			System.out.println("le résultat de " + a + " divisé par " + b + " est " + res); 
 		} 
 		catch (ArithmeticException e) {   
			System.out.println ("oop ! un problème dans la division ") ;  
			System.out.println ("le message officiel est " + e.getMessage()) ; 
		 } 
			 System.out.println ("Fin du programme") ;

}
}
