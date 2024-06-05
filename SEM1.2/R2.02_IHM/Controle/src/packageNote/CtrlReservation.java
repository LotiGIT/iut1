package packageNote;

import java.time.LocalDate;
import java.time.temporal.ChronoUnit;
import javafx.beans.binding.Bindings;
import javafx.beans.binding.BooleanBinding;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.Alert;
import javafx.scene.control.Button;
import javafx.scene.control.ButtonType;
import javafx.scene.control.DatePicker;
import javafx.scene.control.ListView;
import javafx.scene.control.TextField;
import javafx.scene.control.Alert.AlertType;

public class CtrlReservation {
	
	@FXML private Button 			bnFermer;
    @FXML private Button 			bnDetail;
    @FXML private Button 			bnReserver;
    @FXML private DatePicker 		dateArrivee;
    @FXML private DatePicker 		dateDepart;
    @FXML private TextField 		identite;
    @FXML private ListView<String>	listeTypes;
    
    @FXML void clicFermer(ActionEvent event) {
    	Main.fermerAppli();
    }

    @FXML void clicReserver(ActionEvent event) {
    	
    }
    
    @FXML void clicDetail(ActionEvent event) {
    	Main.ouvrirFenetreDetail();
    }
    
    public void initialize() {
    	listeTypes.getItems().addAll(	"SINGLE (1 personne max.) - 16m2 - vue jardin",
    									"DUO (2 personnes max.) - 18m2 - vue jardin",
    									"DOUBLE (2 personnes max.) - 18m2 - vue jardin",
    									"DOUBLE (2 personnes max.) - 18m2 - vue mer",
    									"FAMILLE (4 personnes max.) - 30m2 - vue jardin",
    									"SUPERIEURE (2 personnes max.) - 22m2 - vue mer",
    									"LUXE (2 personnes max.) - 24m2 - vue mer");
    	
    	dateArrivee.setValue(LocalDate.now());
    	bnReserver.setDefaultButton(true);
    	bnFermer.setCancelButton(true);
    	dateDepart.setValue(dateArrivee.getValue().plusDays(1));
    	
    	BooleanBinding pasDeType = Bindings.equal(listeTypes.getSelectionModel().selectedIndexProperty(), -1);
		bnDetail.disableProperty().bind(pasDeType);
		bnReserver.disableProperty().bind(pasDeType);
    }

}
