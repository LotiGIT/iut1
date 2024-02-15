# Cours Regex & Grep

## Expressions Rationnelles

### Def 
Une Expression Rationnelle est une formulation permettant de décrire, à l’aide d’une chaîne modèle unique, un ensemble de chaînes de caractères.

### Nommage

Expression Rationnelle = Regular Expression = Regex

### Exemple

Les Jokers du Shell sont des mécanismes de Regex.

### Terminologie

Un Regex s'appelle motif ou pattern en anglais.

#### Correspondance

Motif trouve 1 ou plusieurs **correspondance** = **matcher**

#### Caractère 

Caractère pas forcément une lettre, peut être un chiffre.
Un caractère peut être un son : ASCII 7 = bell

### Outils 

Une commande associée aux Regex : grep ou egrep

## La commande egrep

Les Regex <u>ne sont pas</u> egrep.

egrep <u>utilise des Regex.</u>

### Fonctionnement 

**egrep**  <u>affiche , sans altération, chaque ligne de la source qui correspond au
motif,</u> les autres lignes sont simplement ignorées.

commande autonome : 

* egrep motif fichier_de_données

ou encore :

* egrep motif < fichier_de_données

Mais aussi un filtre :

* une_commande ... | egrep motif

et 

* une_commande ... | egrep motif | une_autre_commande ...

### Syntaxe 

egrep [options...] motif

### Quantificateurs

#### Definition

Un quantificateur quantifie ce qui le précède

Quantifier signifie indiquer quel nombre de fois
le truc qui précède le quantificateur peut
apparaître.
Pour le moment, ce qui précède = le caractère qui précède.

Dans : toto< quantificateur >, ce qui précède le
quantificateur n’est pas toto mais le
dernier o.

Dans : [A-Z][0-9]< quantificateur >, ce qui précède le quantificateur n’est pas une
lettre majuscule suivie d’un chiffre, mais uniquement le chiffre.

On peut appliquer un quantificateur sur un groupe de caractères : voir le paragraphe sur
Groupage, plus loin.
# Commandes

**egrep** :  commande de Regex

**egrep** :

    -i : ne fait pas de différence entre minuscules et majuscules (ignore case)

    -l : n’affiche pas les lignes qui matchent mais affiche juste les noms des fichiers dans lesquels egrep a trouvé au moins une ligne qui matche le motif.

    -v : inversion/négation du match. Afiche les lignes qui ne matchent pas (invert)

    -c : affiche simplement le nombre de lignes qui ont matché le motif (count)


### 
Affichez les lignes de prod qui contiennent une voyelle :

    egrep [a,e,i,o,u,y] < prod

Affichez les lignes de prod qui contiennent un chiffre entre 7 et 9 : 

    egrep [7-9] < prod 

Affichez les lignes de prod qui NE contiennent PAS un chiffre entre 7 et 9 (piège, vérifiez
bien qu’aucun 7, 8 ou 9 ne s’affiche !) :

    egrep -v [7-9] < prod

Affichez les lignes de prod qui contiennent consécutivement deux voyelles quelconques :

    egrep [a,e,i,o,u,y][a,e,i,o,u,y] < prod

Affichez les lignes de **prod** qui NE contiennent PAS consécutivement deux voyelles
quelconques. Vous devez avoir réussi la Q.5 pour réussir celle-ci. Si ce n’est pas le cas,
appelez votre enseignant.e :

    egrep -v [a,e,i,o,u,y][a,e,i,o,u,y] < prod

Affichez les lignes de depts qui contiennent au moins soit un A majuscule, soit un - (tiret),
soit un Y majuscule. (piège)

    egrep [AY-] <depts


### Un caractère quelconque

Affichez les lignes de depts qui contiennent un 9 suivi de 3 caractères quelconques,
suivis d’un C majuscule.

     egrep 9...C < depts

Affichez les lignes de murphy qui contiennent un a suivi d’un e deux positions plus loin.
(Piège, il en a 5 seulement) :

    egrep -c a.e < murphy


Affichez les lignes de murphy qui contiennent ... (3 points de suspension). Faites-vous
aider si ça ne marche pas bien.

    egrep '\...' < murphy

Affichez les lignes de prod qui contiennent un b suivi d’un nombre quelconque de minuscules, suivi d’un e :


### Espace

Affichez les lignes de lang qui contiennent machine virtuelle

    egrep machine' 'virtuelle < lang


Affichez les lignes de prod qui contiennent un b suivi d’un nombre quelconque de
minuscules, suivi d’un e
 
    egrep 'b[a-z]*e' < prod

Même question que Q.14 mais le e doit être suivi d’un : (deux-points) :

    egrep 'b[a-z]*e:' < prod

Saurez-vous afficher les lignes de depts qui contiennent au moins deux - (tirets) dans leur nom ?

    egrep '[a-z]*-[a-z]*-' <






## Motifs

### Chaîne simple 

egrep machine < lang

# Questions 

#### Q1

Affichez les lignes qui contiennent la chaîne blanche dans le fichier prod.



