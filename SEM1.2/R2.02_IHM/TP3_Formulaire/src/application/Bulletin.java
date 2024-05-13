package application;

import java.io.IOException;

import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.scene.Scene;
import javafx.scene.layout.Pane;
import javafx.stage.Stage;

public class Bulletin extends Application{
	static private Stage f;
	private String email;
	private String numero;
	private String nom;
	private String prenom;
	private String adresse;
	private String ville;
	private String codePostal;

	public void start(Stage fenetre) throws IOException{ 
		fenetre.setTitle("Formulaire");
		fenetre.setResizable(false);
		
		f = fenetre;
		
		Scene laScene = new Scene(creerSceneGraph());
		fenetre.setScene(laScene);
		fenetre.show();
	}
		
	private Pane creerSceneGraph() throws IOException {
		FXMLLoader loader;
		loader = new FXMLLoader(getClass().getResource("/formulaire.fxml"));
		Pane racine = loader.load();
		return racine;
		}
	
	static public void fermer() {
    	f.close();
    }
	
	static public void main(String args[]) {
		Application.launch();
	}
}
