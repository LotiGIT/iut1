class MonException extends Exception {
	MonException(){
            System.out.println("Aucunes valeurs entieres");
        }

        public String toString(){
              return "Affichage exception : nb arguments entier est 0";
        }
}


class TP4Exo2 {
	static int moyenne(String [] valeurs) throws MonException{
	   int somme = 0, entier, nbnotes = 0; int i;

           for (i = 0; i < valeurs.length; i++){
                try {
                      entier = Integer.parseInt(valeurs[i]);
                      somme = somme + entier;
                      nbnotes++;
                }

                catch (NumberFormatException e){
                      System.out.println("valeur "+ (i+1)+" est non entiere ");
                }
           }
           if (nbnotes == 0) throw new MonException();
           return somme/nbnotes; 
        }

public static void main (String [] arg){
              try {
                      System.out.println("La moyenne est "+moyenne(arg));
                }
                catch (MonException e){
                      System.out.println(e);
                }
	}
}	 	 