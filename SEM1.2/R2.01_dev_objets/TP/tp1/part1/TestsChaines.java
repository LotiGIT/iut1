import java.util.*;

public class TestsChaines
{
    public static void main(String[] args) 
    {
        
        // int val = 5;
        // System.out.println(str + 1);
        // Scanner sc = new Scanner(System.in);
        // System.out.println("Saisir un nombre : ");
        // String str = sc.nextLine();
        // System.out.println("Vous avez saisie : " + str);
        // Integer val = Integer.parseInt(str);
        // System.out.println("Valeur changée : " + (val +1));
        // float 
        System.out.println("\n ");
        System.out.println("Nombre flottant ");
        Scanner sc = new Scanner(System.in);
        System.out.println("Saisir un nombre flotant : ");
        String str = sc.nextLine();
        System.out.println("Vous avez saisie : " + str);
        float val = Float.parseFloat(str);
        val += 1.1;
        System.out.println("Valeur changée : " + val);

        System.out.println("\n ");
        System.out.println("Nom de ville ");
        System.out.println(" \n");

        Scanner ville = new Scanner(System.in);
        System.out.println("Saisir nom d'une ville : ");
        String modif = ville.nextLine();
        modif = modif.replaceAll("\\s", "");
        System.out.println(modif.toUpperCase());

        System.out.println(" \n");
        System.out.println("Deux Chaines de caractère");
        System.out.println(" \n");

        Scanner s1 = new Scanner(System.in);
        Scanner s2 = new Scanner(System.in);
        System.out.println("Saisie numéro 1 : ");
        String str1 = s1.nextLine();
        System.out.println("Saisie numéro 2 : ");
        String str2 = s2.nextLine();
        
        if(str1.equals(str2))
        {
            System.out.println("Egaux\n");
        }
        else if(str1.charAt(0) == str2.charAt(0))
        {
            System.out.println("Les deux mots commencent par la même lettre \n");
        }
        System.out.println(str1.compareTo(str2));
        System.out.println(str1.compareToIgnoreCase(str2));
        

        System.out.println(" \n");
        System.out.println("Question 7 \n");


        if(str1.contains(str2) )
        {
            System.out.println("ils se contiennent \n");
        }
        else if(str2.startsWith(str1) )
        {
            System.out.println("ils commencent pareil \n");
        }
        else if(str1.endsWith(str2) )
        {
            System.out.println("ils finissent pareil \n");
        }
        
        System.out.println(" \n");
        System.out.println("Question 8 \n");

        Scanner clavier = new Scanner(System.in);
        System.out.println("Saisie numéro 1 : ");
        String string1 = clavier.nextLine();
        System.out.println("Saisie numéro 2 : ");
        String string2 = clavier.nextLine();
        if(string1.contains(string2))
        {
            int index = string1.indexOf(string2);
            System.out.println(string1.substring(0, index) + string1.substring(index + string2.length()));
        }
        
        
        

        
    }

}