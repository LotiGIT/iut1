## Ex. 3 — Requêtes

On souhaite extraire de l’information de la base de donnée précédente en mettant en œuvre les opérateurs de l’algèbre
relationnelle disponibles en Tutorial D.


On demande de formuler en Tutorial D les requêtes suivantes :


1. Quels sont les noms des produits commercialisés par l’entreprise ?
    Cassis Champagne Huitre Moutarde Salade Cornichon Muscadet
    PRODUIT{NOMP}


2. Quels sont les produits originaires de ’Dijon’ ?

    P1 P4 P6
    PRODUIT where ORIGINE = DVILLE ('Dijon')

3. Quels sont les noms des produits originaires de ’Dijon’ ?

    Cassis Moutarde Cornichon 
    (PRODUIT where ORIGINE = DVILLE ('Dijon')) {NOMP}

4. Quels sont les numéros des fournisseurs qui fournissent quelque chose ?

    F1 F2 F3 F4 F5 
    FOURNITURE{NOFOUR} 

5. Quels sont les numéros des fournisseurs qui ne fournissent rien ?

    F6
    FOURNISSEUR {NOFOUR} MINUS FOURNITURE{NOFOUR}

6. Quels sont les numéros des fournisseurs qui fournissent au moins le produit ’P6’ ?

    F1 F4
    (FOURNITURE where NOPRODUIT=DNOPRODUIT("P6")){NOFOUR}

7. Quels sont les numéros des fournisseurs qui fournissent quelque chose d’autre que ’P6’ ?

    F1 F2 F3 F4 F5
    FOURNITURE{NOFOUR} WHERE NOPRODUIT <> DNOPRODUIT("P6")

8. Quels sont les numéros des fournisseurs qui ne fournissent pas ’P6’ ?

    F2 F3 F5
    FOURNISSEUR(NOFOUR) MINUS (FOURNITURE WHERE NOPRODUIT = DDNOPRODUIT("P6")){NOMP}
    
9. Quels sont les numéros des fournisseurs qui fournissent quelque chose mais pas ’P6’ ?

    F1 F2 F3 F4 F5
    FOURNITURE(NOFOUR) MINUS (FOURNITURE WHERE NOPRODUIT = DDNOPRODUIT("P6")){NOMP}

10. Quels sont les numéros des Fournisseurs qui ne fournissent que ’P6’ ?
    
    FOURNITURE{NOFOUR} WHERE NOPRODUIT 
    
11. Quels sont les numéros des fournisseurs qui fournissent ’P4’ ou ’P6’ ?


12. Quels sont les numéros des fournisseurs qui fournissent ’P4’ et ’P6’ ?

13. Quels sont les numéros des fournisseurs qui ne fournissent ni ’P4’ ni ’P6’ ?

14. Quels sont les numéros et noms des fournisseurs qui fournissent ’P6’ ?

    FOURNISSEUR JOIN (FOURNITURE WHERE NOPRODUIT = DNOPRODUIT("P6")){NOMF, NOFOUR};

15. Quels sont les numéros et noms des fournisseurs qui ne fournissent ni ’P4’ ni ’P6’ ?

    (FOURNISSEUR join (FOURNISSEUR {NOFOUR} MINUS (FOURNITURE WHERE NOPRODUIT = DNOPRODUIT ("P6") OR NOPRODUIT = DNOPRODUIT ("P4")))){NOFOUR}
16. Quels sont les numéros,noms et villes des fournisseurs qui fournissent au moins un produit originaire de leur ville ?


17. Quels sont les produits qui sont de même couleur ? Le résultat sera présenté par des couples de numéros de produits. 

18. Quels sont les produits de même couleur que la salade (certaines salades sont rouges, d’autres vertes . . . ) ?

19.  Quels sont les numéros des fournisseurs qui fournissent des produits verts ou rouges ?


20. Quels sont les numéros des fournisseurs qui fournissent des produits verts et rouges ?


21. Quels sont les numéros des fournisseurs qui fournissent des produits verts et des produits rouges (interdiction d’utiliser
l’opérateur ’intersect’) ?


22. Quels sont les numéros et noms des fournisseurs qui ne fournissent pas de produit vert ?


23. Quels sont les numéros et noms des fournisseurs qui ne fournissent que des produits verts ?


24. Quels sont les numéros et noms des fournisseurs qui ne fournissent que des produits verts ou jaunes ?