package vue;

import java.time.LocalDate;
import java.util.ArrayList;

import controleur.Main;
import javafx.beans.binding.Bindings;
import javafx.beans.binding.BooleanBinding;
import javafx.fxml.FXML;
import javafx.scene.control.Button;
import javafx.scene.control.ComboBox;
import javafx.scene.control.DatePicker;
import javafx.scene.control.TextField;
import modele.Donnees;
import modele.Employe;

public class CtrlNouvelEmploye {
    @FXML private Button 			bnAnnuler;
    @FXML private Button 			bnOK;
    @FXML private ComboBox<String> 	cbDepartement;
    @FXML private ComboBox<String> 	cbSuperieur;
    @FXML private DatePicker 		dpDateEmbauche;
    @FXML private TextField 		txtMatricule;
    @FXML private TextField 		txtNom;
    @FXML private TextField 		txtPoste;
    @FXML private TextField 		txtPrime;
    @FXML private TextField 		txtSalaire;
    
    @FXML public void clicAnnuler() {
    	controleur.Main.fermerNouvelEmploye();
    }
    
    @FXML public void clicOK() {
    	int sup;
    	if (cbSuperieur.getSelectionModel().getSelectedIndex()==0 || cbSuperieur.getSelectionModel().getSelectedIndex()==-1) {
    		sup = -1;
    	} else {
    		sup = Integer.parseInt(cbSuperieur.getSelectionModel().getSelectedItem());
    	}
    	float sal;
    	if (txtSalaire.getText().isEmpty()) {
    		sal = -1;
    	} else {
    		sal = Float.parseFloat(txtSalaire.getText());
    	} 
    	float prime;
    	if (txtPrime.getText().isEmpty()) {
    		prime = -1;
    	} else {
    		prime = Float.parseFloat(txtPrime.getText());
    	} 
    	Main.validerNouvelEmploye( Integer.parseInt(txtMatricule.getText()),
    								txtNom.getText(),
    								txtPoste.getText(),
    								sup,
    								dpDateEmbauche.getValue().getYear(),
    								dpDateEmbauche.getValue().getMonthValue(),
    								dpDateEmbauche.getValue().getDayOfMonth(),
    								sal,
    								prime,
    								Integer.parseInt(cbDepartement.getSelectionModel().getSelectedItem())
    							);
    }
    
    public void effacer() {
    	txtMatricule.clear();
    	txtNom.clear();
    	txtPoste.clear();
    	dpDateEmbauche.setValue(LocalDate.now());
    	cbSuperieur.setValue(this.cbSuperieur.getItems().get(0));
    	txtSalaire.clear();
    	txtPrime.clear();
    	cbDepartement.setValue(cbDepartement.getItems().get(0));
    }
    
    
    
    public void initialize() {
    	// initialiser le formulaire de saisie d'un nouvel employ�
    	// - en remplissant les deux listes d�roulantes (sup�rieur et d�partement)
    	// - en fournissant des valeurs par d�faut (sup�rieur, date embauche et d�partement)
    	
    	ArrayList<Integer> lesSup = Donnees.getLesSuperieurs();
    	this.cbSuperieur.getItems().clear();
		for (int i=0; i<lesSup.size() ; i++) {
			this.cbSuperieur.getItems().add(""+lesSup.get(i));
		}
		this.cbSuperieur.getItems().add(0, "- aucun -");
    	this.cbSuperieur.setValue(this.cbSuperieur.getItems().get(0));
    	
		ArrayList<Integer> lesDep = Donnees.getLesDepartements();
    	this.cbDepartement.getItems().clear();
		for (int i=0; i<lesDep.size() ; i++) {
			this.cbDepartement.getItems().add(""+lesDep.get(i));
		}
		this.cbDepartement.setValue(this.cbDepartement.getItems().get(0));

    	dpDateEmbauche.setValue(LocalDate.now());
    	
    	BooleanBinding manque = Bindings.or(txtMatricule.textProperty().isEmpty(), txtNom.textProperty().isEmpty());
		bnOK.disableProperty().bind(Bindings.when(manque).then(true).otherwise(false));
		
    }
}