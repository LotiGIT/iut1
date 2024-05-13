package application;
import javafx.fxml.FXML;
import javafx.scene.control.Button;
import javafx.scene.control.ButtonType;
import javafx.scene.control.TextField;
import javafx.scene.control.Tooltip;
import javafx.scene.input.KeyEvent;
import javafx.scene.control.Alert.AlertType;
import javafx.scene.control.Alert;

public class Controleur 
{
	
	@FXML
	private Button BNOK;
	@FXML 
	private TextField nom;
	
	@FXML
	private TextField champsObligatoire;
	
	@FXML
	private Button bnOK;
	
	@FXML
	private TextField txtTelephone;
	
	@FXML
	private TextField txtEmail;
	
	@FXML
	public void BNOK(){
		if (txtTelephone.getText().length()!= 10) 
			{ 
				Alert erreur = new Alert(
						AlertType.ERROR, "Le numéro de téléphone doit être sur 10 caractères. Veuillez modifier ce champ.",
						ButtonType.OK);
				erreur.setTitle("Numéro de téléphone : format incorrect"); 
				erreur.showAndWait(); 
			}
		if(!txtEmail.getText().contains("@")) {
			Alert erreur = new Alert(
					AlertType.ERROR, "L'e-mail doit contenir un '@'. Veuillez modifier ce champ.",
					ButtonType.OK);
			erreur.setTitle("Courriel : format incorrect"); 
			erreur.showAndWait(); 
		}
		}
	
	@FXML
	public void listError(KeyEvent e )
	{
		if (nom.getText().length() >= 16)
		{ 
			nom.deletePreviousChar(); 
		}
		
		
		}
		
	public void initialize() {
		nom.setTooltip(new Tooltip("Maximum 15 caractères"));
		bnOK.setDisable(true);	
	}
	
	@FXML
	public void clickAnnuler() {
		Bulletin.fermer();
	}
	
	

}

