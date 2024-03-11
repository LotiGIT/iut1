drop schema if exists "TdVues" cascade;

create schema "TdVues";
set schema 'TdVues';

create table producteur (
  raison_sociale    varchar(25),
  ville             varchar(255),
  primary key(raison_sociale)
);
 
create table consommateur (
  login   varchar(10),
  email   varchar(50),
  nom     varchar(50)   not null,
  prenom  varchar(50)   not null,
  ville   varchar(255)  not null default 'Lannion',
  primary key (login, email),
  unique(nom, prenom, ville)
);

create table produit(
  id                  integer,
  description         varchar(100),
  produit_par         varchar(25)   not null,
  consomme_par_login  varchar(10),
  consomme_par_email  varchar(50),
  primary key (id),
  foreign key (produit_par) references producteur(raison_sociale),
  foreign key (consomme_par_login,consomme_par_email) 
      references consommateur (login, email)
);

-- question 3

create view LannionProducteur
as select * from producteur
where ville ='Lannion';

select raison_sociale
from LannionProducteur;

select *
from LannionProducteur
where ville ='Lannion';

-- question 4
select raison_sociale
from producteur
where ville ='Lannion';

select *
from producteur
where ville='Lannion' and ville <> 'Lannion';


CREATE  VIEW  NomsConsommateurs  AS  SELECT  nom,  prenom 
FROM Consommateur;

CREATE  VIEW  ListeProduits  AS  SELECT  id,  description 
FROM Produit;

-- question 7

create view LaVueLa as
select id
from produit inner join producteur
on produit_par = raison_sociale
inner join consommateur
on consomme_par_email = login
and consomme_par_email = login
where consommateur.ville = producteur.ville;

create view ProdNomConso 
as select * 
from produit
where consomme_par_login is NULL;

create view Nb_prod as 
select produit_par, count(id)
from produit
group by produit_par;