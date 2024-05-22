create table _region(
    code_region varchar(2),
    libelle_region varchar(50),
    constraint code_region_pk primary key(code_region)
);

create table _academie(
    code_academie varchar(2),
    lib_academie varchar(50),
    constraint code_academie_pk primary key(code_academie),
);



create table _departement(
    code_du_departement varchar(2),
    code_region varchar(2),
    nom_departement varchar(50) unique,
    constraint code_du_departement_pk primary key(code_du_departement),
    constraint departement1_fk foreign key(code_region) references _region(code_region)
);

create table _commune(
    code_insee_de_la_commune varchar(5),
    nom_de_la_commune varchar(50) unique,
    code_du_departement varchar(2),
    constraint code_insee_de_la_commune_pk primary key(code_insee_de_la_commune),
    constraint commune1_fk foreign key(code_du_departement) references _departement(code_du_departement)


);

create table _quartier_prioritaire(
    code_quartier_prioritaire varchar(5),
    nom_quartier_prioritaire varchar(50),
    constraint code_quartier_prioritaire_pk primary key(code_quartier_prioritaire)
);

create table _type(
    code_nature varchar(2),
    libelle_nature varchar(50),
    constraint nature primary key(code_nature, libelle_nature)
);

create table _annee(
    annee_scolaire varchar(9),
    constraint annee_scolaire_pk primary key(annee_scolaire)
);

create table _classe(
    id_classe varchar(10),
    constraint id_classe_pk primary key(id_classe)
);

create table _etablissement(
    uai varchar(8),
    code_nature varchar(2),
    code_academie varchar(2),
    code_insee_de_la_commune varchar(5),
    libelle_nature varchar(50),
    nom_etablissement varchar(50),
    secteur varchar(50),
    code_postal varchar(5),
    lattitude float(10),
    longitude float(10),
    constraint uai_pk primary key(uai),
    constraint etablissement1_fk foreign key(code_nature, libelle_nature) references _type(code_nature, libelle_nature),
    constraint etablissement2_fk foreign key(code_academie) references _academie(code_academie),
    constraint etablissement3_fk foreign key(code_insee_de_la_commune) references _commune(code_insee_de_la_commune)
);
create table _caracteristique_tout_etablissement(
    annee_scolaire varchar(9),
    uai varchar(8),
    effectifs int,
    ips float(10),
    ecart_type_de_l_ips float(10),
    ep varchar(50),
    constraint _caracteristique_tout_etablissement_pk primary key(annee_scolaire, uai),
    constraint _caracteristique_tout_etablissement1_fk foreign key(annee_scolaire) references _annee(annee_scolaire),
    constraint _caracteristique_tout_etablissement2_fk foreign key(uai) references _etablissement(uai)   
);

create table _caracteristique_college(
    uai varchar(8),
    annee_scolaire varchar(9),
    nbre_eleves_hors_segpa_hors_ulis int,
    nbre_eleves_segpa int,
    nbre_eleves_ulis int,
    constraint _caracteristique_college_pk primary key(uai, annee_scolaire),
    constraint _caracteristique_college1_fk foreign key(uai) references _etablissement(uai),
    constraint _caracteristique_college2_fk foreign key(annee_scolaire) references _annee(annee_scolaire)
);

create table _caracteristique_selon_classe(
    id_classe varchar(10),
    annee_scolaire varchar(9),
    uai varchar(8),
    nbre_eleves_hors_segpa_hors_ulis_selon_niveau int,
    nbre_eleves_segpa_selon_niveau int,
    nbre_eleves_ulis_selon_niveau int,
    constraint _caracteristique_selon_classe_pk primary key(id_classe, annee_scolaire, uai),
    constraint _caracteristique_selon_classe1_fk foreign key(id_classe) references _classe(id_classe),
    constraint _caracteristique_selon_classe2_fk foreign key(annee_scolaire) references _annee(annee_scolaire),
    constraint _caracteristique_selon_classe3_fk foreign key(uai) references _etablissement(uai)
    
);