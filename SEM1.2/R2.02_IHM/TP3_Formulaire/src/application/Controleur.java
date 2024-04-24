package application;
import javafx.application.Application;
import javafx.scene.control.Tooltip;

public class Controleur {
	
	public void initialize() {
		txtNom.setTooltip(new Tooltip("Maximum 15 caractères"));
	}

}
