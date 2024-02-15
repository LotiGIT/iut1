drop schema if exists s1_tp4;
create schema s1_tp4;
set schema 's1_tp4';

create table centre(
    nom_centre char(20),
    capacite_centre numeric(3) NOT NULL,
    nom_pays char(20),
    constraint center_pk primary key(nom_centre)
);


create table semaine(
    no_semaine integer NOT NULL
    constraint semaine_pk primary key(no_semaine)
    check(no_semaine >=1 AND no_semaine <= 53)
);




create table activite(
    code_act varchar(5),
    lib_act varchar(10) NOT NULL,
    constraint activite _pk primary key (code_act)
);


create table stage(
    no_stage numeric(5) NOT NULL,
    niveau_stage varchar(10),
    nom_centre varchar (25),
    no_semaine numeric(2) NOT NULL,
    code_act varchar(20),
    constraint no_stage_pk primary key(no_stage)
);


CONSTRAINT stage_fk_centre
stage{nom_centre} <= centre{nom_centre};

CONSTRAINT stage_fk_semaine
stage{no_semaine} <= semaine{no_semaine};

CONSTRAINT stages_fk_activite
stage{cod_act} <= activite{code_act};


create table encadre(
    nom_resp varchar,
    no_stage integer NOT NULL,
    constraint no_stage_pk primary key (no_stage)
);

CONSTRAINT encadre_fk1
encadre{no_stage} <= stage{no_stage};



create table client(
    no_client integer NOT NULL,
    nom varchar(30),
    prenom varchar(30),
    adresse varchar(30),
    code_postal varchar(50),
    ville varchar(50),
    tel_client varchar (10),
    CONSTRAINT no_client_pk primary key (no_client)
);

create table inscription(
    no_client numeric(5) NOT NULL,
    no_stage numeric(5) NOT NULL,
    date_inscription date NOT NULL,
    constraint inscription_pk 
        primary key (no_client, no_stage)
    constraint incription_fk_client
    foreign key (no_client) references client(no_client),
    constraint inscription_fk_stage
    foreign key (no_stage) references (no_client)
);

CONSTRAINT inscription_fk1
inscription{no_client} = client{no_client};

CONSTRAINT inscription_fk2
inscription{no_stage} <= stage{no_stage};


create table ville(
    nom_v varchar(20),
    nb_habit numeric(8,2) NOT NULL,
    nom_p varchar(30) NOT NULL,
    constraint ville_pk pirmary key (nom_v)
    -- pas possible de mettre ne place la FK pour l'instant
);

create table pays(
    nom_p varchar(30),
    superficie numeric(8) NOT NULL,
    popul numeric(5) NOT NULL,
    capitale varchar(20) NOT NULL,
    constraint pays_pk primary key(nom_p),
    constraint pays_uk UNIQUE(capitale), -- clé alternative
    constraint pays_fk_capitale foreign key(capitale)
        references ville(nom_v)
);

alter table ville
    add constraint ville_fk_pays
    foreign key(nom_p) references pays(nom_p); -- préciser car on peut référencer clé (primaire ou alternative)
-- Remarquer qu'on aurait des soucis d'insertion ici.