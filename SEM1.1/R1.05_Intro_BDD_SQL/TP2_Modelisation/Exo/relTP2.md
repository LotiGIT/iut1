VAR pays BASE RELATION {
 nomp char,
 superficie int,
 pop int
} KEY {nomp};

VAR mer BASE RELATION {
 nomm char,
 surface int
} KEY {nomm};

VAR baigne BASE RELATION {
 nomp char,
 nomm char
} KEY {nomp, nomm};

CONSTRAINT baigne_fk_1 baigne{nomp} <= pays{nomp};
CONSTRAINT baigne_fk_2 baigne{nomm} <= mer{nomm};

VAR ville BASE RELATION {
 nomv char,
 nomp char
} KEY {nomv};

CONSTRAINT ville_fk_1 ville {nomp} <= pays {nomp};

VAR fleuve BASE RELATION {
 nomf char,
 longueur int,
 nomm char
} KEY {nomf};

CONSTRAINT fleuve_fk_1 fleuve{nomm} <= mer {nomm};

VAR traverse BASE RELATION {
 nomf char,
 nomp char
} KEY {nomf, nomp};

CONSTRAINT traverse_fk_1 traverse{nomf} = fleuve{nomf};
CONSTRAINT traverse_fk_2 traverse{nomp} <= pays{nomp};

VAR arrose BASE RELATION {
 nomf char,
 nomv char
} KEY {nomf, nomv};

CONSTRAINT arrose_fk_1 arrose{nomf} <= fleuve{nomf};
CONSTRAINT arrose_fk_2 arrose{nomv} <= ville{nomv};

## 4: La fleuriste 

VAR couleur BASE RELATION	
{
	couleur_fl char,
}KEY{couleur_fl};

VAR fleur BASE RELATION	
{
	designation char,
	prix_v int
}KEY{designation};

VAR client BASE RELATION	
{
	no_client int,
	nom char
	prenom char,
	adresse1 char,
	compl_ad1 char,
	compl_ad2 char,
	code_postale char,
	ville char,
	CA_client int
}KEY{no_client};

VAR vente BASE RELATION	
{
	qte_achetee,
	designation int,
	no_client int
}KEY{designation, no_client};
CONSTRAINT vente_fk_1 vente{designation}<=fleur{designation};
CONSTRAINT vente_fk_2 vente{no_client}<=client{no_client};

VAR couleur_fleur BASE RELATION	
{
	qte_stock
	designation char,
	couleur_fl char
}KEY{designation char, couleur_fl};
CONSTRAINT couleur_fleur_fk_1 couleur_fleur{couleur_fl} = couleur{couleur_fl};
CONSTRAINT couleur_fleur_fk_2 couleur_fleur{designation} <= fleur{designation};



## 7 : Enseignement et notation des candidats à la formation


VAR candidat BASE
{
    no_candidat : int {id, readOnly}
    nom_cand : string
    prenom_cand : string
    adresse_cand : string
    date_naissance : date 
    lib_formation : string
}KEY{no_candidat};
CONSTRAINT candidat_fk_1 candidat{lib_formation} <= formation{lib_formation};

VAR notation BASE RELATION
{
    no_candidat : int
    code_uv : int
    lib_fomration string
    note : float
}KEY{no_candidat, code_uv};
CONSTRAINT notation_fk_1 notation{no_candidat} <= candidat{no_candidat};
CONSTRAINT notation_fk_2 notation{code_uv} <= uv{code_uv};
CONSTRAINT notation_fk_3 notation{lib_formation} <= formation{lib_formation};


VAR formation BASE RELATION 
{
    lib_formation : string{id, readOnly}
}KEY{lib_formation};

VAR compose BASE RELATION
{
    lib_formation : string
    code_uv : string
}KEY{lib_formation, code_uv};
CONSTRAINT compose_fk_1 compose{lib_formation} <= formation{lib_formation};
CONSTRAINT compose_fk_2 compose{code_uv} = uv{code_uv};

VAR enseignant BASE RELATION 
{
    id_ens : int {id, readOnly}
    nom_ens : string
    prenom_ens : string
}KEY{id_ens};

VAR enseigne BASE RELATION
{
    id_ens : int
    code_uv : string
    lib_formation : string
}KEY{code_uv, lib_formation, id_em};
CONSTRAINT enseigne_fk_1 enseigne{code_uv} <= uv{code_uv};
CONSTRAINT enseigne_fk_2 enseigne{lib_formation} <= formation{lib_formation};
CONSTRAINT enseigne_fk_3 enseigne{id_ens} <= enseignant{lib_ens};


VAR uv BASE RELATION  
{
    code_uv : string{id, readOnly}
    nom_uv : string
}KEY{code_uv};

VAR responsable BASE RELATION
{
    code_uv : string
    id_ens : int
    lib_formation : string
}KEY{code_uv, lib_formation};
CONSTRAINT responsable_fk_1 responsable{code_uv} <= uv{code_uv};
CONSTRAINT responsable_fk_2 responsable{id_ens} <= enseignant{id_ens}; 
CONSTRAINT responsable_fk_3 responsable{lib_formation} <= formation{lib_formation};

a) CONSTRAINT enseigne_fk_4 enseigne{code_uv, lib_formation} <= compose{code_uv, lib_formation};

b) CONSTRAINT responsable_fk_4 responsable{lib_formation, code_uv} <= enseigne{lib_formation, code_uv};

c) CONSTRAINT notation_fk_4 candidat{no_candidat, code_uv, lib_formation} <= (candidat JOIN compose){ code_uv, lib_formation, no_canddidat};



