package application;

import javafx.beans.binding.NumberBinding;
import javafx.beans.property.*;



	public class Exemple 
	{
		public static void main(String[] args) 
		{
			DoubleProperty p1 = new SimpleDoubleProperty(100);
			DoubleProperty p2 = new SimpleDoubleProperty(150);
			// p1 et p2 sont liées l’une à l’autre
			p2.bindBidirectional(p1);
			// toute modification d'une propriété modifie l'autre
			System.out.println(p2.get());
			p1.setValue(200.0);
			System.out.println(p2.get());
			System.out.println(p1.get());
			p2.setValue(250.0);
			System.out.println(p1.get());
			
			IntegerProperty p3 = new SimpleIntegerProperty(10);
			IntegerProperty p4 = new SimpleIntegerProperty(20);
			NumberBinding total = p3.add(p4);
			
			p3.setValue(55);
			
			System.out.println("Valeur totale : ");
			System.out.println(total.getValue());
		}
	}

