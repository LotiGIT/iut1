package package2;


import javafx.fxml.FXML;
import javafx.scene.control.Button;
import javafx.scene.control.RadioButton;
import javafx.scene.control.ToggleGroup;
import javafx.scene.input.MouseEvent;
import javafx.scene.paint.Color;
import javafx.scene.shape.Rectangle;


public class Controleur{

    @FXML
    private RadioButton rbJaune;
    @FXML
    private RadioButton rbOrange;
    @FXML
    private RadioButton rbBleu;
    @FXML
    private RadioButton rbVert;
    @FXML
    private Button bnOK;
    @FXML
    private Rectangle carre;
    @FXML
    private Button bnAnnuler;
    @FXML
    private ToggleGroup groupe;

    @FXML
    void clickCouleur() {
    	if(rbBleu.isSelected()) {
    		carre.setFill(Color.BLUE);
    	}
    	else if (rbJaune.isSelected()) {
    		carre.setFill(Color.YELLOW);
    	}
    	else if (rbVert.isSelected()) {
    		carre.setFill(Color.GREEN);
    	}
    	else if (rbOrange.isSelected()) {
    		carre.setFill(Color.ORANGE);
    	}
    }

    @FXML 
    public void fermer() {
    	Couleur.fermer();
    }
    
    @FXML 
    public void sortie(MouseEvent e) {
    	if(rbBleu.isSelected()) {
    		carre.setFill(Color.BLUE);
    	}
    	else if (rbJaune.isSelected()) {
    		carre.setFill(Color.YELLOW);
    	}
    	else if (rbVert.isSelected()) {
    		carre.setFill(Color.GREEN);
    	}
    	else if (rbOrange.isSelected()) {
    		carre.setFill(Color.ORANGE);
    	}
    }
    @FXML 
    public void survol(MouseEvent e) {
    	if(rbBleu==e.getSource()) {
    		carre.setFill(Color.BLUE);
    	}
    	else if(rbJaune==e.getSource()) {
    		
    			carre.setFill(Color.YELLOW);
    	}
    	else if(rbVert==e.getSource()) {
    		
    			carre.setFill(Color.GREEN);
    		}
    	else if(rbOrange==e.getSource()) {
    		
    			carre.setFill(Color.ORANGE);
    		}
    }
    @FXML 
    public void valider() {
    	if (rbBleu.isSelected()) {
    		System.out.println("Couleur choisie : Bleu");
    	} else if(rbJaune.isSelected()) {
    		System.out.println("Couleur choisie : Jaune");
    	} else if(rbVert.isSelected()) {
    		System.out.println("Couleur choisie : Vert");
    	} else if(rbOrange.isSelected()) {
    		System.out.println("Couleur choisie : Orange");
    	} 
    }
    
    public void initialize() {
    	rbBleu.setSelected(true);
    	}
   
}

