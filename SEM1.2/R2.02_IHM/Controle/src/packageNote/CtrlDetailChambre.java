package packageNote;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;

public class CtrlDetailChambre {
	private final int 		NB_IMAGES = 3;
	
	@FXML private Button 	bnFermer;
    @FXML private Button	bnDroit;
    @FXML private Button 	bnGauche;
    @FXML private Label 	rangPhoto;
    @FXML private Button 	bnReserver;
    @FXML private ImageView image;
    @FXML private Label 	prix;
    @FXML private Label 	typeChambre;
    
    private Image lesImages[] = new Image[NB_IMAGES];
    private int indiceImage;

    
    @FXML void clicFermer(ActionEvent event) {
    	Main.fermerDetailChambre();
    }
            
    public void initialize() {
    	lesImages[0] = new Image("/photo1.png");
    	lesImages[1] = new Image("/photo2.png");
    	lesImages[2] = new Image("/photo3.png");
    	indiceImage = 0;
    	image.setImage(lesImages[indiceImage]);
    	rangPhoto.setText((indiceImage + 1) + "/" + NB_IMAGES);
    	
    }
    
    @FXML void clicBouttonDroit(ActionEvent event) {
        if (indiceImage < NB_IMAGES - 1) {
            indiceImage++;
        } else {
            indiceImage = 0;
        }
        image.setImage(lesImages[indiceImage]);
        rangPhoto.setText((indiceImage + 1) + "/" + NB_IMAGES);
    }

    @FXML void clicBouttonGauche(ActionEvent event) {
        if (indiceImage > 0) {
            indiceImage--;
        } else {
            indiceImage = NB_IMAGES - 1;
        }
        image.setImage(lesImages[indiceImage]);
        rangPhoto.setText((indiceImage + 1) + "/" + NB_IMAGES);
    }
}
    
