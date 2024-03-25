package newPackage;
import javafx.scene.shape.*;
import javafx.stage.Stage;
import javafx.scene.*;
import javafx.application.*;
import javafx.scene.Group;
import javafx.scene.paint.Color;


public class Exo2 extends Application{
	
	private Rectangle ciel = new Rectangle(0, 0, 600, 150); 
	private Rectangle mer = new Rectangle(0, 150, 600, 200); 
	private Rectangle sable = new Rectangle(0, 350, 600, 300);
	private Rectangle serviette = new Rectangle(200, 400, 100, 150);
	
	private Circle soleil = new Circle(50, 50, 30);
	private Group racine= new Group();
	private Group horizon= new Group();
	private Group plage = new Group();
	
	
	public void start(Stage f){
		
		
		Scene laScene = new Scene(creerSceneGraph());
		f.setScene(laScene);
		f.sizeToScene();
		f.show();
	}

	public Group creerSceneGraph(){
		ciel.setFill(Color.LIGHTBLUE);
		soleil.setFill(Color.ORANGE);
		serviette.setFill(Color.PINK);
		sable.setFill(Color.YELLOW);
		mer.setFill(Color.BLUE);
		
	
		
		horizon.getChildren().addAll(soleil, ciel);
		plage.getChildren().addAll(sable, serviette);
		racine.getChildren().addAll(horizon, mer, plage);
		return racine;
	
	}
	
	public static void main(String[] args) {
		Application.launch();
	}
	
}
