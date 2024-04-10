package package2;

import javafx.scene.Scene;
import javafx.scene.layout.Pane;
import javafx.stage.Stage;
import java.io.IOException;
import javafx.application.Application;
import javafx.fxml.FXMLLoader;

public class Couleur extends Application{
	static private Stage f;


	public void start(Stage fenetre) throws IOException{ 
		fenetre.setTitle("Choix d'une couleur");
		fenetre.setResizable(false);
		fenetre.setWidth(450);
		fenetre.setHeight(400);
		
		f = fenetre;
		
		Scene laScene = new Scene(creerSceneGraph());
		fenetre.setScene(laScene);
		fenetre.show();
	}
		
	private Pane creerSceneGraph() throws IOException {
		FXMLLoader loader;
		loader = new FXMLLoader(getClass().getResource("couleur.fxml"));
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
