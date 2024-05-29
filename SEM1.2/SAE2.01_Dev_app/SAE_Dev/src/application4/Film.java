package application4;

import java.util.*;

public class Film {

    private String titre;
    private int duree;
    private String nationnalite;
    private String resume;
    private ArrayList<Acteur> mesActeurs;

    // Constructeur
    public Film(String titre, int duree, String nationnalite, String resume){
        this.titre = titre;
        this.duree = duree;
        this.nationnalite = nationnalite;
        this.resume = resume;
        this.mesActeurs = new ArrayList<Acteur>();
    }

    //Films egaux
    public boolean equals(Film f){
        return this.titre.equals(f.getTitre());
    }

    
    
    public void ajouterFilm(Acteur a){
        if(a != null && !this.contientActeur(a)){
            this.mesActeurs.add(a);
        }
    }

    boolean contientActeur(Acteur a){
        Iterator<Acteur> it = this.mesActeurs.iterator();

        while(it.hasNext()){
            Acteur current = it.next();

            if(current.equals(a)){
                return true;
            }
        }
        return false;
    }

    void ajouterActeur(Acteur a){
        if(this.mesActeurs != null){
            this.mesActeurs.add(a);
        }
    }

    public void ajouterFilm(Film f){
        if(f != null && !this.equals(f)){
            this.mesActeurs.containsAll(mesActeurs);
        }
    }

    

    public void ajouterJouer(Acteur a){
        if(a != null && !this.contientActeur(a)){
            this.ajouterActeur(a);
        } else {
            System.err.println("L'acteur entré en paramètre est null. Veuillez entrer un acteur valide.");
        }
    }

    public void enleverActeur(Acteur a){
        if(a != null && this.contientActeur(a)){
            this.mesActeurs.remove(a);
        }
    }
    public void enleverJouer(Acteur a){
        if(a != null && this.contientActeur(a)){
            this.mesActeurs.remove(a);
        }else{
            System.err.println("L'acteur entré en paramètre est null. Veuillez entrer un acteur valide.");
        }   
    }

    // affichage caractéristique du film
    public void affiche(){
        System.out.println(this.titre + "\t" + "Film " + this.nationnalite + " de " + this.duree + "mn");
        System.out.println("\n");
        System.out.println("Résumé : " + this.resume);

        this.listerActeurs();
    
    }

    public void listerActeurs(){
        System.out.print("Liste des acteurs : ");

        Iterator<Acteur> it = this.mesActeurs.iterator();

        while(it.hasNext()){
            Acteur current = it.next();
            current.affiche();
        }
    }



    public String getTitre(){
        return titre;
    }

    public void setTitre(String titre){
        this.titre = titre;
    }

    public int getDuree(){
        return duree;
    }


}
