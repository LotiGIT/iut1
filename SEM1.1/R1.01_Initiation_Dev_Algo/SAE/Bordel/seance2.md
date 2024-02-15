# Exercices

### Exercice 1 :

Ouvrez le progamme prog1.c fourni sur Moodle et analysez ce code source.
Que fait ce programme ?
    
    Ce programme affiche :
    CHIEN
    NICHE
    CEHIN

À quoi sert le type typTab ?

    typTab sert à créer un tableau

Quel est le rôle de la constante TMAX ?

    définir un nombre max de caractère

Que réalise la fonction ide() ?

    ide sert a relier les lettres ?

Dans la procédure ord(...) à quoi sert la conditionnelle if (N!=-1) ?

    sert à odronner les caractères, l'autre je sais pas

Quel est l’inconvénient de la fonction ana(...) ?
    je sais pas

### Exercice 2 :

Ouvrez le progamme prog1.c fourni sur Moodle et analysez ce code source.
Que fait ce programme ?
    
    Ce programme affiche :
    CHIEN
    NICHE
    CEHIN

À quoi sert le type typTab ?

    Créer un tableau 

Quel est le rôle de la constante TMAX ?

    un tableau de caractères est utilisé temporairement pour ordonner les caractères d'une chaine

Que réalise la fonction ide() ?

    indique si 2 chaines sont identiques

Dans la procédure ord(...) à quoi sert la conditionnelle if (N!=-1) ?

    Ordonne de manière croissante les caractères d'une chaine

Quel est l’inconvénient de la fonction ana(...) ?
    
    il faut uniquement des lettres.


### Exercice 3 :

Reprenez le progamme prog2.c fourni sur Moodle. L’exercice consiste à adapter
les commentaires façon Doxygen.

1) Ajoutez à la documentation d’entête la date d’aujourd’ui et la version (1.0 par
exemple), à l’aide des balises adéquates.

/*\date 25/10/2023 \version 1.0
*/

2) En utilisant la balise adéquate, documentez la constante TMAX.

    /*\def taille maximum d'une chaine = 20 caractères*/ 

3) En utilisant les balises adéquates, documentez la structure element, en précisant
le rôle de chaque champ (lettre correspond au caractère mémorisé et svt est un
pointeur sur le caractère suivant de la liste chainée).

    /* \struct \var lettre correspond au caractère mémoriséet \var svt est un pointeur sur le caractère suivant de la liste chainée*/

4) En utilisant les balises adéquates, documentez la fonction ana(...), en précisant le
rôle de la fonction, le rôle de chaque paramètre et celui du résultat.

    /*\fn permet de faire un anagramme */
    /*\param avec les deux chaines de caractère suivantes*/
    /*\return*/

### Exercice 4 :

Pour générer un fichier de configuration, tapez dans votre console :
doxygen -g maConfig

### Exercice 5 :

Votre fichier de configuration est prêt. Depuis votre console, lancez la commande :

* doxygen maConfig

Normalement un fichier .rtf a été généré dans le répertoire indiqué dans la
configuration (dans l’exemple ce serait le répertoire Docu/MaDoc/Doc RTF).

Ouvrez le fichier .rtf avec Libre Office et analysez-le. Faîtes le lien entre les
commentaires que vous avez insérés dans le programme prog2.c et la documentation
qui a été générée.

# Cours 

## Information d'entête

Votre programme doit commencer par un bloc d’information contenant au minimum :
* une brève description de ce que réalise le programme,
* le nom de l’auteur du programme,
* sa date de création,
* sa version.

## Doxygen

### Documentation des structures de données

Chaque donnée ou structure de données doit être documentée.

Au-dessus de la donnée ou structure de données, on ajoutera un bloc de commentaire
qui pourra contenir la balise adéquate (\var, \typedef, \struct, \def, etc.).

#### Cas particulier

Chaque champ de la structure peut recevoir un commentaire avec le carctère "<"

### Documentation d'une procédure/fonction

On utilisera la balise \fn pour documenter une fonction (ou une procédure, mais en
langage C une procédure est une fonction qui ne retourne rien) :

* \fn <entête de la fonction>

On précisera le rôle de chaque paramètre grâce à la balise \param :
* \param <rôle du paramètre>

Enfin, on précisera le rôle du résultat avec la balise \return :
* \return <rôle du résultat>

## Générer la documentation 

#### Génerer un fichier de configuration

Pour générer le fichier de configuration, la commande est :

* doxygen -g <nom du fichier de configuration>

Pour générer un fichier de configuration, tapez dans votre console :

* doxygen -g maConfig