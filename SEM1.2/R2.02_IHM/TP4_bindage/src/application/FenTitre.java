package application;

import javafx.stage.Stage;
import javafx.application.Application;
import javafx.geometry.Insets;
import javafx.scene.Scene;
import javafx.scene.control.*;
import javafx.scene.layout.GridPane;

public class FenTitre extends Application{
	
	public void start(Stage f) {
		Label lblTexte1 = new Label("Texte :");
		TextField tfChamp1 = new TextField();
		Button bnFermer = new Button("Fermer");
		bnFermer.setOnAction(e -> f.close() );
		f.titleProperty().bindBidirectional(tfChamp1.textProperty());
		
		f.setTitle("Titre");
		GridPane grid = new GridPane();
		grid.addRow(0, lblTexte1, tfChamp1);
		grid.add(bnFermer, 1, 1);
		grid.setVgap(10);
		grid.setHgap(10);
		grid.setPadding(new Insets(10));
		Scene scene = new Scene(grid);
		f.setScene(scene);
		f.show();
	}
	
	
	
	static public void main(String args[]) {
		Application.launch();
	}
	
}

