VAR centre BASE RELATION{
    nom_centre CHAR,
    capacite_centre INTEGER,
    nom_pays CHAR
} KEY {nom_centre}


VAR semaine REAL RELATION{
    no_semaine INTEGER
} KEY {no_semaine};


VAR activite BASE RELATION{
    cod_act CHAR,
    lib_act CHAR
} KEY {cod_act}

VAR stage BASE RELATION{
    no_stage INTEGER,
    niveau_stage CHAR,
    nom_centre CHAR,
    no_semaine INT,
    code_act CHAR
} KEY {no_stage} ;


CONSTRAINT stage_fk_centre
stage{nom_centre} <= centre{nom_centre};

CONSTRAINT stage_fk_semaine
stage{no_semaine} <= semaine{no_semaine};

CONSTRAINT stages_fk_activite
stage{cod_act} <= activite{code_act};

VAR encadre BASE RELATION{
    nom_resp CHAR,
    no_stage INTEGER
} KEY {no_stage};

CONSTRAINT encadre_fk1
encadre{no_stage} <= stage{no_stage};


VAR client BASE RELATION{
    no_client INTEGER,
    nom CHAR,
    prenom CHAR,
    adresse CHAR,
    code_postal CHAR,
    ville CHAR,
    tel_client CHAR
} KEY {no_client}

VAR inscription BASE RELATION{
    no_client INTEGER,
    no_stage INTEGER,
    date_inscription CHAR
} KEY {no_client,no_stage};

CONSTRAINT inscription_fk1
inscription{no_client} = client{no_client};

CONSTRAINT inscription_fk2
inscription{no_stage} <= stage{no_stage};