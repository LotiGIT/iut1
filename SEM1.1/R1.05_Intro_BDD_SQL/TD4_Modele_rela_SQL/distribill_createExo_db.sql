set schema 'distribill';
SELECT * 
FROM fournisseur;

CREATE TABLE produit (
noproduit CHAR(3),
nomp VARCHAR(20) NOT NULL,
origine VARCHAR(20) NOT NULL,
couleur VARCHAR(20) NOT NULL,
CONSTRAINT produit_pk PRIMARY KEY(noproduit)
);



INSERT INTO produit VALUES('P1','Cassis','Dijon', 'Rouge');
INSERT INTO produit VALUES('P2','Champagne','Reims', 'Blanc');
INSERT INTO produit VALUES('P3','Huitre','Riec', 'Vert');
INSERT INTO produit VALUES('P4','Moutarde','Dijon', 'Jaune');
INSERT INTO produit VALUES('P5','Salade','Nice', 'Vert');
INSERT INTO produit VALUES('P6','Cornichon','Dijon', 'Vert');
INSERT INTO produit VALUES('P7','Muscadet','Nantes', 'Blanc');

SELECT * 
FROM produit;

create table fourniture(
nofour char(3),
noproduit char(3),
quantite INTEGER NOT NULL,
constraint fourniture_pk primary key (nofour, noproduit)
);

INSERT INTO fourniture VALUES ('F1', 'P1', 1);
INSERT INTO fourniture VALUES ('F1', 'P4', 1);
INSERT INTO fourniture VALUES ('F1', 'P5', 8);
INSERT INTO fourniture VALUES ('F1', 'P6', 2);
INSERT INTO fourniture VALUES ('F2', 'P2', 1);
INSERT INTO fourniture VALUES ('F2', 'P4', 1);
INSERT INTO fourniture VALUES ('F3', 'P2', 5);
INSERT INTO fourniture VALUES ('F3', 'P4', 1);
INSERT INTO fourniture VALUES ('F4', 'P4', 2);
INSERT INTO fourniture VALUES ('F4', 'P5', 7);
INSERT INTO fourniture VALUES ('F4', 'P6', 3);
INSERT INTO fourniture VALUES ('F5', 'P3', 10);

truncate table fourniture;

SELECT *
FROM fourniture;

alter table fourniture
  add constraint fourniture_fk_fournisseur
  foreign key(nofour) references fournisseur(nofour);
  
alter table fourniture
  add constraint fourniture_fk_produit
  foreign key(noproduit) references produit(noproduit);

-- question 3
select nomp
from produit 
where origine='Dijon'; 
  
-- question 5
select  nofour
from fourniture
where noproduit='P6';

-- question 7
select nofour 
from fournisseur
except
select nofour
from fourniture;

-- question 8
select nofour
from fourniture
except 
select  nofour
from fourniture
where noproduit='P6';

-- question 9
select nofour
from fourniture
where noproduit != 'P6';

-- question 10
select nofour
from fournisseur
except
select nofour 
from fourniture
where noproduit = 'P6';

-- question 11 
select nofour
from fournisseur
intersect
select nofour 
from fourniture
where noproduit = 'P6' or noproduit = 'P4';

-- question 12
select nofour
from fourniture
where noproduit = 'P6'
intersect 
select nofour
from fourniture
where noproduit = 'P4';

-- question 13

select nofour
from fournisseur
except
select nofour 
from fourniture
where noproduit = 'P6' or noproduit = 'P4';

-- question 14

select fournisseur.nofour, nomf
from fourniture
inner join
fournisseur on fourniture.nofour = fournisseur.nofour
where noproduit = 'P6';

select nofour, nomf
from fourniture
natural join fournisseur
where noproduit = 'P6';

-- question 15

select nofour, nomf
from fournisseur
except
select nofour, nomf
from fourniture
natural join fournisseur
where noproduit = 'P6' or noproduit = 'P4';

-- question 16

select nomp, produit.origine
from produit
inner join
fournisseur on produit.origine = fournisseur.ville;

select nomp, produit.origine
from produit
inner join
fournisseur on produit.origine = fournisseur.ville
select nofour, ville
from fournisseur;
