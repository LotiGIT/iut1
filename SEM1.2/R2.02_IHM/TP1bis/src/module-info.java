/**
 * 
 */
/**
 * @author ejanot
 *
 */
module TP1bis {
	requires javafx.base;
	requires javafx.controls;
	requires javafx.graphics;
	requires javafx.fxml;
	opens package1 to javafx.graphics, javafx.fxml; 	
}