import java.util.Scanner;

public class Main {

    

        

    public static void main(String[] args) {
        
        Chien chien = new Chien("Rex", "C123", "Paris", 2);
        try {
            // Matricule ne commence pas par 'C' avec n'importe quoi derriere
            chien.setMatricule("A123");  
        }
        catch (Chien.ErreurMatricule e) {
            System.out.println(e.getMessage());
        //ErreurAge de la classe Chien
        try {
            chien.setAge(0);
        } catch (Chien.ErreurAge e1) {
            System.out.println(e1.getMessage());
        }
        
        abstract class ErreurChien extends Exception {
            private static final long serialVersionUID = 1L;
            public ErreurChien(String message) {
                super(message);
            }
           
        	
            

            
    }
    // je n'arrive pas a faire fonctionner les exceptions :/
    class ErreurMatricule extends ErreurChien {
        private static final long serialVersionUID = 1L;
        public ErreurMatricule(String message) {
            super(message);
        }
    }
    class ErreurAge extends ErreurChien {
        private static final long serialVersionUID = 1L;
        public ErreurAge(String message) {
            super(message);
        }
    }

    //exception ajouterUnChien
    class ErreurAjouterUnChien extends Exception {
        private static final long serialVersionUID = 1L;
        public ErreurAjouterUnChien(String message) {
            super(message);
        }
    }

    
    
}
        System.out.println(chien);
}
}

