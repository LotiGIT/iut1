package application;
	
import javafx.application.Application;
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.control.*;
import javafx.stage.Stage;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.FlowPane;
import javafx.scene.layout.HBox;


public class Main extends Application {
	// Création de boutons de tailles différentes
	private Button bouton1 = new Button("Bouton 1");
	private Button bouton2 = new Button("Bn2");
	private Button bouton3 = new Button("Je suis le bouton 3");
	private Button bouton4 = new Button("Bouton4");
	private Button bouton5 = new Button("Moi c'est le bouton numéro 5");
	private BorderPane racine= new BorderPane();
	
	private BorderPane creerScene() {

		// flowPane.getChildren().addAll(bouton1, bouton2, bouton3, bouton4, bouton5);
		// met de la bordure "padding" dans la fenetre
		// flowPane.setPadding(new Insets(10));
		// permet de coller flowPane en haut à droite de la fenetre
		// flowPane.setAlignment(Pos.TOP_RIGHT);
		// flowPane.setHgap(20); // espace entre les éléments de la ligne
		// flowPane.setVgap(20); // espace entre les éléments de la colonne
		
		HBox.setMargin(bouton1,new Insets(10)); 
		// Ajout des composants dans les zones du BorderPane
		racine.setTop(bouton1);
		racine.setLeft(bouton2);
		racine.setCenter(bouton3);
		racine.setRight(bouton4);
		racine.setBottom(bouton5);
		return racine;
	}
	public void start(Stage primaryStage) {
		try {	
			Scene scene = new Scene(creerScene(),400,400);
			scene.getStylesheets().add(getClass().getResource("application.css").toExternalForm());
			primaryStage.setScene(scene);
			primaryStage.show();
			
		} catch(Exception e) {
			e.printStackTrace();
		}
	}
	
	
	
	public static void main(String[] args) {
		launch(args);
	}
}
