package vue;

import java.io.IOException;
import javafx.scene.Scene;
import javafx.stage.Stage;
import modele.Employe;
import javafx.scene.layout.Pane;
import javafx.fxml.FXMLLoader;


public class FenModifierEmploye extends Stage {
	
	private CtrlModifierEmploye ctrl;
	
	public FenModifierEmploye() throws IOException {
		this.setTitle("Detail d'un employe");
		this.setResizable(false);
		Scene laScene = new Scene(creerSceneGraph());
		this.setScene(laScene);
	}

	private Pane creerSceneGraph() throws IOException {
     	FXMLLoader loader = new FXMLLoader();
        loader.setLocation(getClass().getResource("/modifierEmploye.fxml"));
        Pane root = loader.load();
        ctrl = loader.getController();
     	return root;
	}
	
	public void afficherEmploye(Employe e) {
		ctrl.afficherEmploye(e);
	}
	
	

}

