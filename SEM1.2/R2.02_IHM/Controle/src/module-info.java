/**
 * 
 */
/**
 * @author ejanot
 *
 */
module Controle {
	requires javafx.controls;
	requires javafx.base;
	requires javafx.graphics;
	requires javafx.fxml;
	
	opens packageNote to javafx.graphics, javafx.fxml, javafx.base;

}