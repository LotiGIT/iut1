package application;

import javafx.beans.binding.*;
import javafx.beans.property.*;
import javafx.util.converter.*;

public class Exemple4 {
	public static void main(String[] args) 
	{
		SimpleDoubleProperty somme = new SimpleDoubleProperty(89);
		SimpleDoubleProperty nb = new SimpleDoubleProperty(8);
		SimpleDoubleProperty moyenne = new SimpleDoubleProperty();
		
		BooleanBinding casErreur = Bindings.equal(nb, 0);
		
		// init
		nb.setValue(5);
		somme.setValue(18);
		
		moyenne.bind(Bindings.when(casErreur).then
		(-1.0).otherwise(Bindings.divide(somme, nb)));
		
		System.out.println(moyenne.get());
	}
}
