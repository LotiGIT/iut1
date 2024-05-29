module TP5 {
	requires javafx.controls;
	requires javafx.base;
	requires javafx.graphics;
	requires javafx.fxml;
	
	opens controleur to javafx.graphics, javafx.fxml, javafx.base;
	opens modele to javafx.graphics, javafx.fxml, javafx.base;
	opens vue to javafx.graphics, javafx.fxml, javafx.base;
}

