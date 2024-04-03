package application;
	
import javafx.application.Application;
import javafx.scene.control.*;
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.stage.Stage;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.layout.*;
import javafx.scene.paint.Color;
import javafx.scene.shape.Rectangle;


public class Main extends Application {
	// Création de boutons de tailles différentes
	private Button bnAjouter = new Button("Ajouter");
	private Button bnModifier = new Button("Modifier");
	private Button bnSupprimer = new Button("Supprimer");
	private Button bnFermer = new Button("Fermer");
	
	private Button bouton1 = new Button("Bouton 1");
	private Button bouton2 = new Button("Bn2");
	private Button bouton3 = new Button("Je suis le bouton 3");
	private Button bouton4 = new Button("Bouton4");
	private Button bouton5 = new Button("Moi c'est le bouton numéro 5");
	private GridPane racine= new GridPane();
	private StackPane stack = new StackPane();
	private AnchorPane anchor = new AnchorPane();
	
	
	
	
//	private BorderPane creerScene() {
//
//		// flowPane.getChildren().addAll(bouton1, bouton2, bouton3, bouton4, bouton5);
//		// met de la bordure "padding" dans la fenetre
//		// flowPane.setPadding(new Insets(10));
//		// permet de coller flowPane en haut à droite de la fenetre
//		// flowPane.setAlignment(Pos.TOP_RIGHT);
//		// flowPane.setHgap(20); // espace entre les éléments de la ligne
//		// flowPane.setVgap(20); // espace entre les éléments de la colonne
//		
//		HBox.setMargin(bouton1,new Insets(10)); 
//		// Ajout des composants dans les zones du BorderPane
//		racine.setTop(bouton1);
//		racine.setLeft(bouton2);
//		racine.setCenter(bouton3);
//		racine.setRight(bouton4);
//		racine.setBottom(bouton5);
//		
//		// chaque composant est centré dans sa zone
//		BorderPane.setAlignment(bouton1, Pos.CENTER); 
//		BorderPane.setAlignment(bouton2, Pos.CENTER); 
//		BorderPane.setAlignment(bouton3, Pos.CENTER); 
//		BorderPane.setAlignment(bouton4, Pos.CENTER); 
//		BorderPane.setAlignment(bouton5, Pos.CENTER);
//		return racine;
//	}
	
//	private GridPane creerScene() {
//
//		// flowPane.getChildren().addAll(bouton1, bouton2, bouton3, bouton4, bouton5);
//		// met de la bordure "padding" dans la fenetre
//		// flowPane.setPadding(new Insets(10));
//		// permet de coller flowPane en haut à droite de la fenetre
//		// flowPane.setAlignment(Pos.TOP_RIGHT);
//		// flowPane.setHgap(20); // espace entre les éléments de la ligne
//		// flowPane.setVgap(20); // espace entre les éléments de la colonne
//		
//		//HBox.setMargin(bouton1,new Insets(10)); 
//		// Ajout des composants dans les zones du BorderPane
//		racine.add(bouton1, 0, 0, 8, 1);
//		racine.add(bouton2, 1, 2);
//		racine.add(bouton3, 2, 3);
//		racine.add(bouton4, 3, 4);
//		racine.add(bouton5, 4, 5);
//		
//		return racine;
//	}
//		private StackPane creerScene() {
//			
//			stack.getChildren().addAll(new Rectangle(100,100,Color.BLUE), new Rectangle(80,80,Color.RED), new Label("Mon premier StackPane !"));
//			StackPane.setAlignment(title, Pos.CENTER);
//				
//				return stack;
//			}
	private AnchorPane creerScene() {
	
		String valeurs[] = {"Charles Baudelaire", "Albert Camus", "Colette", "Vicitor Hugo", "Pierre Loti", "Moliere", "Marcel Proust", "Jacques Prevert", "Jean Racine", "Jean-Paul Sartre", "Boris Vian"}; 
		ListView<String> list = new ListView<String>(); 
		list.getItems().addAll(valeurs);
		
		// Ancrage des composants par rapport aux bords du panneau AnchorPane.setTopAnchor(bnAjouter, 10.0); 
		AnchorPane.setRightAnchor(bnAjouter, 10.0); 
		
		AnchorPane.setTopAnchor(bnModifier, 40.0); 
		AnchorPane.setRightAnchor(bnModifier, 10.0); 
		
		AnchorPane.setTopAnchor(bnSupprimer, 70.0); 
		AnchorPane.setRightAnchor(bnSupprimer, 10.0); 
		
		AnchorPane.setBottomAnchor(bnFermer, 10.0); 
		AnchorPane.setRightAnchor(bnFermer, 10.0); 
		
		AnchorPane.setTopAnchor(list, 10.0); 
		AnchorPane.setLeftAnchor(list, 10.0); 
		AnchorPane.setRightAnchor(list, 100.0);
		AnchorPane.setBottomAnchor(list, 10.0); 
		
		// ajout des composants au panneau 
		racine.getChildren().addAll(bnAjouter, bnModifier, bnSupprimer, bnFermer, list);
		
		return anchor;
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
