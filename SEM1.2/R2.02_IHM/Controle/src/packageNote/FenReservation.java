package packageNote;

import java.io.IOException;
import javafx.scene.Scene;
import javafx.scene.layout.Pane;
import javafx.stage.Stage;
import javafx.fxml.FXMLLoader;

public class FenReservation extends Stage {
	CtrlReservation ctrl;
	public FenReservation() throws IOException {
		
		this.setTitle("Réservation");
		this.setResizable(false);
		Scene laScene = new Scene(creerSceneGraph());
		this.setScene(laScene);
		
	}

	private Pane creerSceneGraph() throws IOException {
     	FXMLLoader loader = new FXMLLoader();
        loader.setLocation(getClass().getResource("/reservation.fxml"));
        Pane root = loader.load();
        ctrl = loader.getController();
     	return root;
	}
}









































