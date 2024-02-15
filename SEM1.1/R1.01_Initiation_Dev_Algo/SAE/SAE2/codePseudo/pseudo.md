
#define FIN -1
constante entier TAILLE := 9;
type tCase1 = structure
début 
    c.valeur : entier;
    c.candidats : tableau [9] de entier;
    c.nbcandidats : entier;
fin 

procédure ajouterCandidat (entF/sortF laCase : tCase1, entf val :entier) c'est
debut 
    nbCandidat : entier;
    si (laCase.nbCandidats < TAILLE) alors
        nbCandidat = nbCandidat +1;
        lacase.candidats [nbCandidats] = val; 
    sinon 
        ecrireEcran("tu fais fausse route");
    finsi
fin


procédure retirerCandidat(entF/sortF laCase : tCase1, entf val :entier) c'est 
début
    i : entier;
    i = 1;
    booleen : trouve;
    trouve := FAUX;

    tant que (!= trouve ET i <nbCandidats) faire
        si (laCase.candidats[nbCandidats] == val) alors
            trouve := VRAI;
        sinon
            i +1;
        finsi
        si (trouve == VRAI) alors
            ;
        finsi
        
    finfaire
fin

fonction estCandidat(entF la case : tCase1, entf val :entier) délivre booléen c'est
début 