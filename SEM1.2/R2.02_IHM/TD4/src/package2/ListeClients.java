package package2;

import java.io.IOException;

import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.scene.Scene;
import javafx.scene.layout.Pane;
import javafx.stage.Stage;

public class ListeClients extends Application{
	
	

	public void start(Stage fenetre) throws IOException{ 
		fenetre.setTitle("Choix d'une couleur");
		fenetre.setResizable(false);
		fenetre.setWidth(300);
		fenetre.setHeight(350);
		
		Scene laScene = new Scene(creerSceneGraph());
		fenetre.setScene(laScene);
		fenetre.show();
	}
	
	private Pane creerSceneGraph() throws IOException {
		FXMLLoader loader;
		loader = new FXMLLoader(getClass().getResource("listeClients.fxml"));
		Pane racine = loader.load();
		return racine;
		}
	
	public static void main(String[] args) {
		Application.launch();
	}
	
	
}
