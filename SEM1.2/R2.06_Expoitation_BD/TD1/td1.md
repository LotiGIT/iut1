# Exercice 1 :

## Organisation des stages

VAR centres BASE RELATION
{
    nom_centre char,
    capacite_centre integer,
    nom_pays char
}KEY{nom_centre};

VAR stages BASE RELATION
{
        no_stage integer,
        niveau_stage char,
        nom_centre char
}KEY{no_stage};

CONSTRAINT stages_fk_centres
stages{nom_centre} <= centres{nom_centre};





VAR clients BASE RELATION{
    no_client INTEGER,
    nom CHAR,
    prenom CHAR,
    adresse CHAR,
    code_postal CHAR,
    ville CHAR,
    tel_client CHAR
} KEY {no_client}

VAR inscriptions BASE RELATION
{
    date_inscription date,
    no_stage integer,
    no_client integer
}KEY{no_stage, no_client};

CONSTRAINT inscriptions_fk_1
inscriptions{no_stage} <= stages{no_stage}

CONSTRAINT inscriptions_fk_2
inscriptions{no_client} = clients{no_clients}

## Gestion de projets
 
VAR fournisseur BASE RELATION
{
    no_fournisseur integer,
    nom char,
    ville char,
    budget integer
}KEY{no_fournisseur};

VAR projet BASE RELATION
{   
    no_projet integer,
    nom_projet char,
    budget_projet integer, 
    ville_projet char
}Key{no_projet};

VAR article BASE RELATION
{
    no_article integer,
    nom_article char,
    couleur char,
    prix integer
}Key{no_article};

VAR dotation BASE RELATION
{
    quantite_dot integer,
    no_projet intger,
    no_article integer, 
    no_fournisseur integer

}KEY{no_projet, no_article, no_fournisseur};

CONSTRAINT dotation_fk_1
dotation{no_projet} <= projet{no_projet}

CONSTRAINT dotation_fk_2
dotation{no_article} <= article{no_article}

CONSTRAINT dotation_fk_3
dotation{no_fournisseur} <= fournisseur{no_fournisseur}

VAR nomenclature BASE RELATION
{
    no_composant int,
    no_compose int
}KEY{no_composant, no_compose};

CONSTRAINT nomenc_fk_1
nomenclature{no_composant} <= article{no_article} RENAME {no_article as no_composant}

CONSTRAINT nomenc_fk_2
nomenclature{no_compose} <= article{no_article} RENAME {no_article as no_compose}

## Fleuves et affluents

VAR mer BASE RELATION
{
    nom_m char,
    surface integer
}KEY{nom_m};

VAR fleuve BASE RELATION
{
    nom_f char,
    nom_m char
}KEY{nom_f, nom_m};

CONSTRAINT fleuve_fk

VAR cours d'eau BASE RELATION
{
    nom_ce string,
    longueur int
}KEY{nom_ce};

VAR affluent BASE RELATION
{
    nom_ce string,
    confluent string
}KEY{nom_ce};

CONSTRAINT affluent_fk_1
affluent{nom_ce} <= cours d'eau{nom_ce};

CONSTRAINT affluent_fk_2
affluent{confluent} <= cours d'eau{nom_ce} RENAME {nom_ce as confluent};