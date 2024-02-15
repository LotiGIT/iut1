# PHP

Language de scripting (Personal Home Page)


## Bonjour qui ?

touch hello.php
nano hello.php
<?php
    echo "Hello World!\n"
?>

php hello.php

### Localiser 

which php

#!résultat_du_which_php dans le script

lancer avec :

    - chmod +x hello.php
    - ./hello.php

## Language

<?php ?> : initialise un code php

## Shell interactif

php -a
exit : quitter le mode interactif
ctrl+c : relancer un php -a

# Synthaxe

**Les instructions se finisse par ';'**

## Variables

Toujours préfixé d'un $

## Lecture 

appelé par un $

variable inconnue remplacée par un 0 si entier "" si charactère.

## Opérateurs

### Arithmétique

 +  -   *   /   %(modulo euclidien)  **(exponentiation)

### Pré et Post-(in/dé)crémentation

++  -- 

### Opérateurs Logiques

&&  ||  !

### Opérateurs avec réaffectation

+=  -=  *=  /=  %=  .=

### opérateurs de comparaison

==  !=  <=  >=  < >

### Mixage des types 

Les expressions ont des variables et expressions qui peuvent être :

    - Numérique
    - chaine de caractère
    - booléen

### Opérateurs d'égalité stricte

Pour éviter des paradoxes :

"0" == 0
"" == 0
"0" == "" -> n'est pas vrai

On utilise l'opérateur d'égalité stricte '===' et l'opérateur de différence stricte '!=='.

# Tableaux

+80 fonctions dédiées aux tableaux dans le language PHP.

Le tableau est associatif. 
Le tableau est élastique et grossit quand on lui rajoute des cellules ou rétrécit quand on le retire.
Les cellules d'un tableau peuvent être de types différents.

## Créer un tableau (vide)

    $tablo = []


## Affectation

    $tablo = [
        xx => "bla bla",
    ];

### Afficher le contenu d'une variable

    print_r($tablo);

### Ajout/remplacement

    $tablo[22] = "n'importe" 
    print_r($tablo) écrase ce qu'il y avait dans la case 22

### Parcours

foreach ($tablo as $num => $nom){
    echo "Le département" .$num . "s'appelle" . $nom . "\n";
}

# !! Quand il y a un tableau il y a forcément besoin d'un foreach() !!

[0] => Pipo
            [1] => 