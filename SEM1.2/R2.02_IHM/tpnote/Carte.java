package tpnote;
 	
import java.io.IOException;

import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.scene.Scene;
import javafx.scene.layout.Pane;
import javafx.stage.Stage;

public class Carte extends Application{
	static private Stage f;
public void start(Stage fenetre) throws IOException{ 
		fenetre.setTitle("Carte des régions");
		fenetre.setResizable(true);
		fenetre.setWidth(600);
		fenetre.setHeight(300);
		
		f = fenetre;
		
		Scene laScene = new Scene(creerSceneGraph());
		fenetre.setScene(laScene);
		fenetre.show();
	}
	private Pane creerSceneGraph() throws IOException {
		FXMLLoader loader;
		loader = new FXMLLoader(getClass().getResource("tpnote.fxml"));
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
