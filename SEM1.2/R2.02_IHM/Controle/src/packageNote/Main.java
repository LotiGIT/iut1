package packageNote;

import javafx.application.Application;
import javafx.stage.Modality;
import javafx.stage.Stage;

public class Main extends Application {
	static private FenReservation fReservation;
	static private FenDetailChambre fDetailChambre;
	static private FenValidation fValidation;


	@Override
	public void start(Stage primaryStage) throws Exception {
		fReservation = new FenReservation();
		fReservation.initModality(Modality.APPLICATION_MODAL);
		fDetailChambre = new FenDetailChambre();
		fDetailChambre.initModality(Modality.APPLICATION_MODAL);
		fValidation = new FenValidation();
		fValidation.initModality(Modality.APPLICATION_MODAL);

		fReservation.show();
	}
	
	//////////////////////////////////////////////////////////
	// Gestion des fenetres
	//////////////////////////////////////////////////////////
	static public void fermerAppli() {
		System.exit(0);
	}
	
	static public void ouvrirFenetreDetail() {
		fDetailChambre.show();
	}
	
	static public void fermerDetailChambre() {
		fDetailChambre.close();
	}
	
	static public void ouvrirFenValidation() {
		FenValidation.afficher();
	}
	
	
	public static void main(String[] args) {
		Application.launch(args);

	}
}









































