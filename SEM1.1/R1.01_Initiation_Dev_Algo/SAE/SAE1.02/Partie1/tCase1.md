type tCase1 = structure
début
 valeur : entier;
 candidats : tableau[TAILLE] de entier;
 nbCandidats : entier;
fin

procédure ajouterCandidat(entF/sortF laCase : tCase1, entF val : entier) c'est
début
 si(laCase.nbCandidats < TAILLE) alors
 laCase.candidats[laCase.nbCandidats+1] := val;
 laCase.nbCandidats := laCase.nbCandidats+1;
 finsi
fin

procédure retirerCandidat(entF/sortF laCase : tCase1, entF val : entier) c'est
début
 iteration : entier;
 valeurTrouve : booléen;

 iteration := 1;
 valeurTrouve := FAUX;

 tant que (!valeurTrouve ET iteration <= laCase.nbCandidats) faire 
 si (laCase.candidats[iteration] == val) alors
    valeurTrouve := VRAI;
    laCase.candidats[iteration] := laCase.candidats[laCase.nbCandidats];
    laCase.nbCandidats := laCase.nbCandidats - 1;
    finsi
    iteration := iteration + 1;
 finfaire
fin

fonction estCandidat( entF laCase : tCase1, entF val : entier) délivre booléen c'est
début
 iteration : entier;
 valeurTrouve : booléen;

 iteration := 1;
 valeurTrouve := FAUX;

 tant que (!valeurTrouve ET iteration <= laCase.nbCandidats) faire 
 si (laCase.candidats[iteration] == val) alors
 valeurTrouve := VRAI;
 finsi
 iteration := iteration + 1;
 finfaire

 retourne valeurTrouve;
fin

fonction nbCandidats(entF laCase : tCase1) délivre entier c'est
début
 retourne laCase.nbCandidats;
fin