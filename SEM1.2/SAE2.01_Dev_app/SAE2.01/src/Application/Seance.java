package Application;

import java.text.SimpleDateFormat;
import java.util.Date;

public class Seance {

    private Date date;
    private String typeSeance;
    private Film film;

    // Constructeur
    public Seance(Date date, String typeSeance){
        this.date = date;
        this.typeSeance = typeSeance;
        this.film = null;
    }

    public void ajouterProgrammer(Film f){
        if(f != null){
            this.affecterFilm(f);
        }
        else{
            System.out.println("Le film passé en parametre est null");
        }
    }

    public void affecterFilm(Film f){
        if (this.film == null) {
            this.film = f;
        }else{
            System.out.println("Un film est deja programme");
        }
    }

    // equals
    public boolean equals(Seance seance){
        return this.typeSeance.equals(seance.getTypeSeance()) && this.date.equals(seance.getDate());
    }

    // Affichage de la date et le type de la séance aisni que le film prévu àa cette séance
    public void affiche(){
        SimpleDateFormat dateFormat = new SimpleDateFormat("dd/mm/yyyy hh:mm");

        System.out.println("Le "+dateFormat.format(this.date)+ " - "+this.typeSeance);

        if (this.film != null) {
            this.film.affiche();
        }else{
            System.out.println("Pas de film programme");
        }
    }

    public Date getDate(){
        return this.date;
    }

    public String getTypeSeance(){
        return this.typeSeance;
    }
    
    
    
}

