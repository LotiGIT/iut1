import java.util.*;

public class EmissionMusicaleCommentee extends EmissionMusicale {
    private String commentateur;

    public EmissionMusicaleCommentee(String commentateur, String nom, int dureeMins){
        super(nom, dureeMins);
        this.commentateur = commentateur;
    }

    public void donneTitre(int i, int iVoulu){
        if (i = iVoulu) {
            System.out.println(getTitre());
        }
    }

    public void saluer(){
        System.out.println("\nBonjour !");
    }
}
