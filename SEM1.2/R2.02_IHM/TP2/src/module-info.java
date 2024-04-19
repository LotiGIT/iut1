module TP2 {
	requires javafx.base;
	requires javafx.controls;
	requires javafx.graphics;
	requires javafx.fxml;
	opens application to javafx.graphics, javafx.fxml; 
}
