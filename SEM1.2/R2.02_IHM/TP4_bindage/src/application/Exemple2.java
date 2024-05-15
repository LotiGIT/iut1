package application;

import javafx.beans.binding.Bindings;
import javafx.beans.binding.NumberBinding;
import javafx.beans.property.*;
import javafx.util.StringConverter;
import javafx.util.converter.*;

public class Exemple2 
{
	public static void main(String[] args) 
	{
		SimpleIntegerProperty nb = new SimpleIntegerProperty();
		SimpleStringProperty texte = new SimpleStringProperty();
		
		// initialisation de la variable nb
		nb.setValue(145);
		
		// création du "converter" nombre <-> chaine
		StringConverter<Number> converter = new NumberStringConverter();
		
		// liaison bidirectionnelle qui utilise le "converter"
		Bindings.bindBidirectional(texte, nb, converter);
		
		System.out.println(texte.get());
		System.out.println(nb.get());
	}
}
