package application;
import javafx.application.Application;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.input.*;
import javafx.scene.control.*;
import javafx.scene.input.Dragboard;
import javafx.scene.input.TransferMode;
import javafx.scene.layout.*;
import javafx.stage.Stage;


public class FenDeuxListes extends Application { 
	// Les composants de la fenêtre
	private ListView<String> 	listeGauche	= new ListView<String>();
	private ListView<String>	listeDroite	= new ListView<String>();
	private Button 				bnTransfert	= new Button(">");
	private Button 				bnTransfertInv = new Button("<");
	// Les layout de la fenêtre
	private VBox zoneBoutons = new VBox();
	private HBox root = new HBox();
	
	
	
	public void start(Stage fenetre){ 
		fenetre.setTitle("DnD entre deux listes"); 
		fenetre.setResizable(false);
		Scene laScene = new Scene(creerSceneGraph());
		fenetre.setScene(laScene);
		fenetre.sizeToScene();
		fenetre.show();
		listeGauche.getSelectionModel().setSelectionMode(SelectionMode.SINGLE);
		listeGauche.getSelectionModel().setSelectionMode(SelectionMode.MULTIPLE);
		
		
		
		bnTransfert.setOnAction(e->{
			if(listeGauche.getSelectionModel().getSelectedIndex() != -1) {
				String element = listeGauche.getSelectionModel().getSelectedItem();
				int index = listeGauche.getSelectionModel().getSelectedIndex();
				
				listeDroite.getItems().add(element);
				listeGauche.getItems().remove(index);
			}
		});
		
		bnTransfertInv.setOnAction(e->{
			if(listeDroite.getSelectionModel().getSelectedIndex() != -1) {
				String element = listeDroite.getSelectionModel().getSelectedItem();
				int index = listeDroite.getSelectionModel().getSelectedIndex();
				
				listeDroite.getItems().add(element);
				listeGauche.getItems().remove(index);
			}
		});
		
		bnTransfert.setOnMouseDragged(e -> { 
			if(e.getSceneY() > 0 && e.getSceneY() < laScene.getHeight() - bnTransfert.getHeight()) 
			{
				bnTransfert.setTranslateY(e.getSceneY()) ; 
			}
		});
		bnTransfertInv.setOnMouseDragged(e -> { 
			if(e.getSceneY() > 0 && e.getSceneY() < laScene.getHeight() - bnTransfertInv.getHeight() - bnTransfert.getHeight()) 
			{
				bnTransfertInv.setTranslateY(e.getSceneY()) ; 
			}
		});
		
		listeGauche.setOnDragDetected(e -> {
			// on crée le DragBoard en définissant le mode de transfert 
			Dragboard db = listeGauche.startDragAndDrop(TransferMode.COPY_OR_MOVE); 
			
			// on crée un contenu... 
			ClipboardContent content = new ClipboardContent();
			String chaine = new String();
			
			
			
			for(int i=0; i<listeGauche.getSelectionModel().getSelectedItems().size(); i++) {
				
				chaine = chaine + listeGauche.getSelectionModel().getSelectedItems().get(i) + "\n";
				
			}
			// ...pour y placer l'élément sélectionné dans la liste 
			content.putString(chaine); 
			db.setContent(content);
		});
		
		listeDroite.setOnDragDetected(e -> {
			// on crée le DragBoard en définissant le mode de transfert 
			Dragboard db = listeDroite.startDragAndDrop(TransferMode.COPY_OR_MOVE); 
			
			// on crée un contenu... 
			ClipboardContent content = new ClipboardContent();
			String chaine = new String();
			
			
			
			for(int i=0; i<listeDroite.getSelectionModel().getSelectedItems().size(); i++) {
				
				chaine = chaine + listeDroite.getSelectionModel().getSelectedItems().get(i) + "\n";
				
			}
			// ...pour y placer l'élément sélectionné dans la liste 
			content.putString(chaine); 
			db.setContent(content);
		});
		
		listeDroite.setOnDragOver(e ->{
			// ici la zone cible accepte les données transférées ou copiées du DnD 
			e.acceptTransferModes(TransferMode.COPY_OR_MOVE);
		});
		listeGauche.setOnDragOver(e ->{
			// ici la zone cible accepte les données transférées ou copiées du DnD 
			e.acceptTransferModes(TransferMode.COPY_OR_MOVE);
		});
		
		listeDroite.setOnDragDropped(e -> {

			Dragboard db = e.getDragboard(); 
			String data = db.getString(); 
			String [] elements = data.split("\n");
			listeDroite.getItems().addAll(elements); 
			
			e.setDropCompleted(true);
		});
		listeGauche.setOnDragDropped(e -> {

			Dragboard db = e.getDragboard(); 
			String data = db.getString(); 
			String [] elements = data.split("\n");
			listeGauche.getItems().addAll(elements); 
			
			e.setDropCompleted(true);
		});
		
		listeGauche.setOnDragDone(e->{
			// si le mode de transfert était un MOVE, on supprime, dans la liste de 
			// gauche, l'élément transféré 
			if (e.getTransferMode() == TransferMode.MOVE) 
			{ 
				listeGauche.getItems().removeAll(listeGauche.getSelectionModel().getSelectedItems()); 
			}
		});
		listeDroite.setOnDragDone(e->{
			// si le mode de transfert était un MOVE, on supprime, dans la liste de 
			// gauche, l'élément transféré 
			if (e.getTransferMode() == TransferMode.MOVE) 
			{ 
				listeDroite.getItems().removeAll(listeDroite.getSelectionModel().getSelectedItems()); 
			}
		});
			
	}
	
	
	private Pane creerSceneGraph(){
		for (int i=1 ; i<11 ; i++){
			listeGauche.getItems().add("Elément "+i);
		}
		bnTransfert.setPrefWidth(80);
		bnTransfertInv.setPrefWidth(80);

		zoneBoutons.setAlignment(Pos.TOP_CENTER);
		zoneBoutons.getChildren().addAll(bnTransfert, bnTransfertInv);

		root.getChildren().addAll(listeGauche, zoneBoutons, listeDroite);

		return root;
	}
	
	
	static public void main(String args[]) {
		Application.launch();
	}
}