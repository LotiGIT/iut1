package application;

import javafx.beans.binding.Bindings;
import javafx.beans.binding.StringBinding;
import javafx.beans.property.SimpleIntegerProperty;
import javafx.beans.property.SimpleStringProperty;
import javafx.util.StringConverter;
import javafx.util.converter.NumberStringConverter;

public class Exemple3 
{
	public static void main(String[] args) 
	{
		SimpleIntegerProperty nb = new SimpleIntegerProperty();
		SimpleStringProperty texte = new SimpleStringProperty();
		
		// création d’une liaison : convert est liée à nb moyennant une conversion
		// de type : la valeur de nb est transformée en chaine
		StringBinding convert =
		Bindings.createStringBinding( () -> String.valueOf(nb.get()), nb);
		
		
		// liaison avec cette nouvelle "Binding"
		texte.bind(convert);
		
		// initialisation 
		nb.setValue(145);
		texte.setValue("250");

		System.out.println(nb.get());
	}
}
