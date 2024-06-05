package packageNote;

import java.io.IOException;
import javafx.scene.Scene;
import javafx.scene.layout.Pane;
import javafx.stage.Stage;
import javafx.fxml.FXMLLoader;

public class FenDetailChambre extends Stage {
	CtrlDetailChambre ctrl;
	public FenDetailChambre() throws IOException {
		this.setTitle("Informations detaillees sur la chambre");
		this.setResizable(false);
		Scene laScene = new Scene(creerSceneGraph());
		this.setScene(laScene);
	}

	private Pane creerSceneGraph() throws IOException {
     	FXMLLoader loader = new FXMLLoader();
        loader.setLocation(getClass().getResource("/detailChambre.fxml"));
        Pane root = loader.load();
        ctrl = loader.getController();
     	return root;
	}
}









































