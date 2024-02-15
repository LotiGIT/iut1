
# Exercice 1

1. Indiquez le type de la propriété Nom_etud.

    C'est une chaine de caractère 


2. Proposez une extension (sous forme de tableau) de cette classe qui comporte 3 occurrences.

    nom_etud  | Prenom_etud  | adresse
              |              |  

3. Si on utilise { Nom_etud, Prenom_etud } comme identifiant, quel problème cela pose-t-il ? Comment faire pour y
remédier ? Proposez une modification dans la modélisation et répercutez-là sur l’extension de la question précédente.

        En mettant un identifiant avec des chiffres en rejoutant une classe cela résout les problèmes.

4. Si un programme doit imprimer l’adresse d’un étudiant sur un courrier comme elle doit l’être, c’est-à-dire, par exemple :
        Bâtiment 5
        Escalier C
        45, rue des pies
        22300 Lannion
Quel problème doit-il résoudre ? Modifiez la propriété adresse en conséquence.

        Le problème est qu'il y a trop d'informations pour l'adresse, il faut rajouter des classes.


# Exercice 2

1. Donnez le type de la propriété code_groupe.
        c'est une suite de caractère.

2. Donnez l’extension de l’association Composition sous forme d’un tableau à 2 colonnes : code_promo et code_groupe.

        |   code_promo   | code_groupe   |
        | -----------    | -----------   |
        |     INFO A1    |     1B1       |
        |     INFO A1    |     1B2       |
        |     INFO A1    |     1A1       |
        |     INFO A2    |     2A1       |


3. Combien de fois au minimum et au maximum un groupe quelconque apparaît-il dans ce tableau ? Indiquez les multi-
plicités sur la terminaison concernée de l’association Composition.

        1 du côté groupe  

4. Combien de fois au minimum et au maximum une promotion quelconque apparaît-elle dans ce tableau ? Indiquez les
multiplicités sur la terminaison concernée

        0..* car tous les groupes ne sont pas encore formés : 0..* -> ..* signifie plusieurs


# Exercice 3 


1.  1er cas : humain ---- coeur  |  [1]
    2eme cas :  musulmans [1]-----[0..1]terroristes  | 
    3em cas : equipe de foot ----- stade  | Multiplicité : 


2.  a)  etudiant[0..*]----[0..*] matière 
    association binaire 
    b)  | etudiant | resultat |  matière   |
        |----------|----------|---------   | 
        |  Marc    |  12.58   |   Algo     |
        |   Eliott |  0.01    |pseudo-code |
        |   Eliott |   20       |   Sys    |
    c) Marc 12.58 Algo est un identifiant


# Exercice 4

1) Il y a deux b2 dans C1, il manque une valeur dans AS1 C1, il y a deux d2 dans AS1 C2.

