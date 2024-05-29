package application;

import java.util.*;

public class Abonne {
	private String nom;
	private String adresse;
	private Collection<NumTel> numeros;
	
	public Abonne(String valNom, String valAdresse)
	{
		nom = valNom;
		adresse = valAdresse;
		numeros = new HashSet<NumTel>();
	}
	
	public Abonne()
	{
		Scanner clavier = new Scanner(System.in);
		System.out.println("Nom ?");
		nom = clavier.nextLine();
		System.out.println("Adresse ?");
		adresse = clavier.nextLine();
		clavier.close();
		
		numeros = new HashSet<NumTel>();
	}
	
	public void addNum()
	{
		NumTel numero;
		String val;
		Scanner scn = new Scanner(System.in);
		System.out.println("Donnez un numéro de l'abonne " + nom + ":");
		val = scn.next();
		
		try
		{
			numero = new NumTel(val);
			numeros.add(numero);
		}
		catch(Exception exc)
		{
			System.out.println(exc);
		}
	}
	
	public void afficheNumeros()
	{
		for (NumTel num: numeros) {
			System.out.println(num);
		}
	}
	
	public void suppNum()
	{
		NumTel numero;
	}
	
	public String toString()
	{
		return nom + adresse;
	}
}
