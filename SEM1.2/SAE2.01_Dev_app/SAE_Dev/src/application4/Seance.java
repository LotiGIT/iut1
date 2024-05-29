package application4;

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

    public void enleverFilm(Film f) {
        if (this.film == f) {
            this.film = null;
        }
        else {
            System.err.println("Le film entré en paramètre n'est pas le même que le film programmé.");
        }
    } 
    
    public void enleverProgrammer(Film f) {
        if (null == this.film) {
            System.err.println("Aucun film n'est programmé pour cette séance.");
        }
        else if (f == null) {
            System.err.println("Le film entré en paramètre est null. Veuillez entrer un film valide.");
        }
        else {
            enleverFilm(f);
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
    
    public void enleverProgrammer() {
    	if (f == nulls)
    }
    
    
    
}
