package tpnote;

import javafx.fxml.FXML;
import javafx.scene.control.TextField;
import javafx.scene.image.ImageView;
import javafx.scene.input.MouseEvent;

public class ControleurCarte {
	@FXML
    private ImageView image;
    @FXML
    private TextField textRech;

    @FXML
    private TextField textPop;

    @FXML
    private TextField textPref;

    @FXML
    private TextField textSup;

    @FXML
    void cliqueImage(MouseEvent event) {
    	if(image==event.getSource()) {
    		textRech.setText("Bretagne");
        	textPop.setText("Rennes");
        	textPref.setText("27 209");
        	textSup.setText("3 394 567");
    	}
    	
    }
}
