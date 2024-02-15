drop schema if exists programme_but cascade;
create schema programme_but;
set schema 'programme_but';


create table _niveau(
  numero_n int not null,
  constraint numero_n_pk primary key(numero_n)
);

create table _competences(
  lib_competence varchar(10),
  constraint lib_c_pk primary key (lib_competence)
);
create table _activites(
  lib_activite varchar(50),
  lib_competence varchar(50),
  constraint lib_a_pk primary key(lib_activite),
  constraint activite_competence_fk foreign key (lib_competence) references _competences(lib_competence)
);

create table _semestre(
  numero_sem varchar(3),
  numero_n int not null,
  constraint numero_sem_pk primary key (numero_sem),
  constraint num_sem_n_fk foreign key (numero_n) references _niveau(numero_n)
);

create table _ue(
  code_ue varchar(5),
  lib_activite varchar(50),
  numero_sem varchar(3),
  constraint code_ue_pk primary key(code_ue),
  constraint code_lib_activite_fk foreign key (lib_activite) references _activites(lib_activite),
  constraint numero_sem_code_ue_fk foreign key (numero_sem) references _semestre(numero_sem)
);

create table _ressources(
  code_r varchar(5),
  numero_sem varchar(3),
  lib_r varchar(50),
  nb_h_cm_pn int not null,
  nb_h_td_pn int not null,
  nb_h_tp_pn int not null,
  constraint code_r_pk primary key (code_r),
  constraint numero_sem_code_r_fk foreign key (numero_sem) references _semestre(numero_sem)
);

create table _sae(
  code_sae varchar(10), 
  lib_sae varchar(50),
  nb_h_td_enc int not null,
  nb_h_td_projet_autonomie int not null,
  constraint code_sae_pk primary key(code_sae)
);

create table _comprend_r(
  code_r varchar(5),
  code_sae varchar(10),
  nb_h_td_c int,
  nb_h_tp_c int,
  constraint comprend_r_pk primary key (code_r, code_sae),
  constraint comprend_1_fk foreign key (code_r) references _ressources(code_r),
  constraint comprend_2_fk foreign key (code_sae) references _sae(code_sae)
);

create table _parcours(
  code_p varchar(20),
  libelle_parcours varchar(10),
  nbre_groupe_tp_p int not null,
  nbre_groupe_td_p int not null,
  constraint code_p_pk primary key(code_p)
);

create table _correspond(
  lib_activite varchar(50),
  code_p varchar(20),
  numero_n int not null,
  constraint correspond_pk primary key (lib_activite, code_p, numero_n),
  constraint correspond_lib_fk foreign key (lib_activite) references _activites(lib_activite),
  constraint correspond_code_fk foreign key (code_p) references _parcours(code_p),
  constraint correspond_numero_fk foreign key (numero_n) references _niveau(numero_n)
);

create table _est_enseignee(
  code_p varchar(20),
  code_r varchar(5),
  constraint est_enseignee_pk primary key (code_p, code_r),
  constraint est_enseignee_1_fk foreign key (code_p) references _parcours(code_p),
  constraint est_enseignee_2_fk foreign key (code_r) references _ressources(code_r)
);
