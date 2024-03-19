package newPackage;

import javafx.application.Application;
import javafx.scene.Group;
import javafx.stage.Stage;
import javafx.scene.Scene;
import javafx.scene.paint.Color;
import javafx.scene.shape.*;

public class Exo1 extends Application {
	
	public void start(Stage maFenetre){
		
		maFenetre.setTitle("Nathan>>>>>>Banjamain");
		maFenetre.setWidth(500);
		maFenetre.setHeight(300);
		maFenetre.setMinWidth(300);
		maFenetre.setMinHeight(100);
		maFenetre.setX(10);
		maFenetre.setY(200);
		
		Scene maScene = new Scene(new Group());
		maFenetre.setScene(maScene);
		maScene.setFill(Color.YELLOW);
		
		Rectangle carre = new Rectangle(10, 10, 100,100);
		carre.setFill(Color.LIGHTBLUE);
		
		Circle rond = new Circle(60,60,40); // Attention, il s'agit des
		rond.setFill(Color.ORANGE); // coordonnées du centre du cercle
		
		Group racine = new Group(); // racine du Scene Graph
		
		racine.getChildren().add(rond); // les composants sont ajoutés un à un
		racine.getChildren().add(carre); // à leur nœud parent (la racine ici)
		
		Scene laScene = new Scene(racine, 400, 400);
		
		maFenetre.show();
	}
	
	public static void main(String[] args) {
		Application.launch();
	}

}
