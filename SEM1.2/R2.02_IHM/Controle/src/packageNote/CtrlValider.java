package packageNote;


import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.Button;
import javafx.scene.control.TextField;

public class CtrlValider {

	 @FXML
	    private TextField identite;

	    @FXML
	    private TextField tarif;

	    @FXML
	    private TextField nuitee;

	    @FXML
	    private TextField datePartir;

	    @FXML
	    private TextField typeChambre;

	    @FXML
	    private Button bnValider;

	    @FXML
	    private TextField dateDepart;

	    @FXML
	    private Button bnAnnuler;

	    @FXML
	    private TextField totEuros;
	    @FXML
	    private TextField reservation;

    @FXML
    void clicBnValider(ActionEvent event) {

    }

    @FXML
    void clicBnAnnuler(ActionEvent event) {
    	
    }

    public void initialize() {
    	
    	reservation.setText("1283");
        tarif.setText("75.00");
        totEuros.setText("0.0");
        nuitee.setText("0");

    	bnValider.setDefaultButton(true);
    	bnAnnuler.setCancelButton(true);

    	
    }
}