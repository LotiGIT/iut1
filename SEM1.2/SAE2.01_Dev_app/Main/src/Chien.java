
public class Chien {
    private String nom;
    private String matricule;
    private String adresse;
    private int age;

    public Chien(String nom, String matricule, String adresse, int age) {
        this.nom = nom;
        this.matricule = matricule;
        this.adresse = adresse;
        this.age = age;
    }

    //setNom
    public void setNom(String nom) {
        this.nom = nom;
    }

    //getNom
    public String getNom() {
        return nom;
    }

    //setAdresse
    public void setAdresse(String adresse) {
        this.adresse = adresse;
    }

    //getAdresse
    public String getAdresse() {
        return adresse;
    }

    //setAge
    public int getAge() {
        return age;
    }
    

    //ErreurMatricule
    public class ErreurMatricule extends Exception {
        private static final long serialVersionUID = 1L;
        public ErreurMatricule(String message) {
            super(message);
        }
    }
    // le matricule doit obligatoirement commencer par le caractère 'C' et prévoir une exceception (ErreurMatricule) qui devra être traité dans le main
    public void setMatricule(String matricule) throws ErreurMatricule {
        if (matricule.charAt(0) != 'C') {
            throw new ErreurMatricule("Le matricule doit commencer par 'C'");
        }
        this.matricule = matricule;
    }

    //ErreurChien

    //setMatricule
    public String getMatricule() {
        return matricule;
    }

    //setAge
    public void setAge(int age) throws ErreurAge {
        if (age < 0) {
            throw new ErreurAge("L'age doit être supérieur à 0");
        }
        this.age = age;
    }

    //exception ErreurAge en cas de valeur inférieur à 0
    public class ErreurAge extends Exception {
        private static final long serialVersionUID = 1L;

        public ErreurAge(String message) {
            super(message);
        }
    }

    //ErreurChien
    public class ErreurChien extends Exception {
        private static final long serialVersionUID = 1L;
        
        public ErreurChien(String message) {
            super(message);
            
        }
    }

    //Méthode toString
    public String toString() {
        return "Nom : " + nom + "\nMatricule : " + matricule + "\nAdresse : " + adresse + "\nAge : " + age;
    }

    




}
