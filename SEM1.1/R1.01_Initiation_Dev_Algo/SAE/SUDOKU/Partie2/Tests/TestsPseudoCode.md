programme sudoku c'est

    type tGrille = tableau[1..TAILLE, 1..TAILLE] de entier;

    var grille1 : tGrille;
        numLigne, numColonne, valeur : entier;

début
    chargerGrille(grille1);
    tant que la grille n'est pas pleine faire
        afficherGrille(grille1);
        ecrireEcran("Indice de la case ? ");
        saisir(numLigne);
        saisir(numColonne);
        si (grille1[numLigne] [numColonne] !=0) alors
            ecrireEcran ("IMPOSSIBLE, la case n'est pas libre.");
        sinon 
            ecrireEcran("Valeur à insérer ? ");
            saisir(valeur);
            si (possible(grille1, numLigne, numColonne, valeur)) alors
            finsi
        finsi
    finfaire
    ecrireEcran("Grille pleine, fin de partie");
fin
