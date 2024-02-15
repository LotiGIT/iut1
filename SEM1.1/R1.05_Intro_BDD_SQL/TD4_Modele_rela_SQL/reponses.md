# Ex. 2 — Exprimez les requêtes suivantes en langage SQL-PostgreSQL.

1.Quels sont les noms des produits commercialisés par l’entreprise ?

    SELECT  nomp
    FROM produit;

2.Quels sont les produits originaires de ’Dijon’ ?

    select noproduit
    from produit 
    where origine='Dijon'; 

3.Quels sont les noms des produits originaires de ’Dijon’ ?

    select nomp
    from produit 
    where origine='Dijon';

4.Quels sont les numéros des fournisseurs qui fournissent quelque chose ?

    select distinct nofour
    from fourniture;

5.Quels sont les numéros des fournisseurs qui fournissent au moins le produit ’P6’ ?

    select  nofour
    from fourniture
    where noproduit='P6';

6.Quels sont les numéros des fournisseurs qui ne fournissent rien ?

select nofour 
from fournisseur
except
select nofour
from fourniture;
  
7.Quels sont les numéros des fournisseurs qui fournissent quelque chose d’autre que ’P6’ ?

    select nofour 
    from fournisseur
    except 
    select nofour
    from fourniture;

8.Quels sont les numéros des fournisseurs qui ne fournissent pas ’P6’ ?

select nofour
from fournisseur
except
select nofour 
from fourniture
where noproduit = 'P6';

9.Quels sont les numéros des fournisseurs qui fournissent quelque chose mais pas ’P6’ ?

select distinct nofour
from fourniture
where noproduit != 'P6';

10.Quels sont les numéros des Fournisseurs qui ne fournissent que ’P6’ ?
    
    select nofour
    from fournisseur
    except
    select nofour 
    from fourniture
    where noproduit != 'P6';

11.Quels sont les numéros des fournisseurs qui fournissent ’P4’ ou ’P6’ ?

select nofour
from fournisseur
intersect
select nofour 
from fourniture
where noproduit = 'P6' or noproduit = 'P4';


12.Quels sont les numéros des fournisseurs qui fournissent ’P4’ et ’P6’ ?
select nofour
from fourniture
where noproduit = 'P6'
intersect 
select nofour
from fourniture
where noproduit = 'P4';

13.Quels sont les numéros des fournisseurs qui ne fournissent ni ’P4’ ni ’P6’ ?

select nofour
from fournisseur
except
select nofour 
from fourniture
where noproduit = 'P6' or noproduit = 'P4';

14.Quels sont les numéros et noms des fournisseurs qui fournissent ’P6’ ?

select fournisseur.nofour, nomf
from fourniture
inner join
fournisseur on fourniture.nofour = fournisseur.nofour
where noproduit = 'P6';

select nofour, nomf
from fourniture
natural join fournisseur
where noproduit = 'P6';

15.Quels sont les numéros et noms des fournisseurs qui ne fournissent ni ’P4’ ni ’P6’ ?

select nofour, nomf
from fournisseur
except
select nofour, nomf
from fourniture
natural join fournisseur
where noproduit = 'P6' or noproduit = 'P4';

16.Quels sont les numéros,noms et villes des fournisseurs qui fournissent au moins un produit originaire de
leur ville ?

select nofour, nomp, origine
from produit
intersect
;


17.Quels sont les produits qui sont de même couleur ? Le résultat sera présenté par des couples de numéros
de produits.


18.Quels sont les produits de même couleur que la salade (certaines salades sont rouges, d’autres vertes
...) ?


19.Quels sont les numéros des fournisseurs qui fournissent des produits verts ou rouges ?


20.Quels sont les numéros des fournisseurs qui fournissent des produits verts et rouges ?


21.Quels sont les numéros et noms des fournisseurs qui ne fournissent pas de produit vert ?


22.Quels sont les numéros et noms des fournisseurs qui ne fournissent que des produits verts ?


23.Quels sont les numéros et noms des fournisseurs qui ne fournissent que des produits verts ou jaunes ?