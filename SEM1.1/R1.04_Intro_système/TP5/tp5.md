

<h2> Redirection des canaux</h2>

tout processus possède un canal d'entrée STDIN et un canal de sortie STDOUT.

On redirige un STDIN comme ça :     une_commande < un_fichier

et ça le détache pour l'attacher à un fichier. Il en devient la source d'alimentation du STDIN.


On redirige un STDOUT comme ça :    une_commande > un_fichier

ça détache STDOUT pour l'attacher à un fichier. Il en devien la destination du STDOUT.

<h2>Tubes</h2>

<article> 

    On peut brancher les caneaux STDIN et STDOUT avec des canaux d'autres processus et non plus avec des fichiers.


    On fait un tube comme ça :   une_commande | une_autre_commande

    Pour rediriger un STDOUT vers un fichier :
      une_commande | une_autre_commande > un_fichier

    ou vers une autre commande :
    une_commande | une_autre_commande | une_troisième | commande

     !! Seul la 1ere commande peut avoir un '<'
     Seul la dernière commande peut avoir un '>'
</article>
    
<h2>Filtres</h2>

Le filtre reçoit des données sur son STDIN et applique une éventuelle transformation pour afficher le résultat sur son STDOUT.

Ils s'utilisent donc avec des tubes.

!! Le filtre ne modifie **JAMAIS** la source de données.

**IMPORTANT** :

<article>

    Le filtre réduit.

    Le tri rend la même quantité qu'en sortie.
</article>

filtre généralement avec des tubes : 

une_commande | un_filtre

Un filtre peut être seul : 

un_filtre < un_fichier

ou en passant un nom de fichier en paramètre :

un_filtre un_fichier


<h2>Fichiers tests</h2>

Fichiers "au kilomètre" :
<article>

    fichiers au texte brut. exemple : fichiers 'murphy' et 'lorem'

</article>head -n <nb> 
    
</article>


<h3>Conseils</h3>head -n <nb> pte le nombre total de la globalité des lignes des fichiers lang et prod.
</article>

### Sort -Trierhead -n <nb> 
**-n** : Tri numérique. Par défaut, les champs sont comme du texte. 10 arrive avant 2 car 1 est avant 2.

**-u** : Ne produit que des lignes uniques, retire les lignes double.


### uniq - Débdoublonner (fonctionne que sur les listes trieés)

#### Syntaxe 

**uniq** : On ne peut pas faire plus simple 

#### Options utiles

**-i** : Minuscules et majuscules sont équivalentes

**-d** : fait l'inverse : produit en sortie uniquement les lignes qui apparaissent plusieurs fois.

#### Exemples 

**uniq < depts** : élimine en sortie les lignes en double

**uniq -d < depts** : Affiche en sortie uniquement les doublons mais une seule fois.

uniq sort -u permet de conserver qu'un exemplaire de chaque ligne en douvlon.

### colrm - Supprimer des colonnes

#### Syntaxe

**colrm col1 [] col2** : Omet en sortie tout ce qu'il y a entre les colonnes col1 et col2. Si col2 n'est pas là, elle omet tout entre col1 et la fin de chaque ligne.

#### Exemples

**colrm 12 16 < lang** : Omet en sortie la partie date du fichier lang

#### A savoir

1ere colonne = 1

### cut - Couper des champs

Coupe les champs qu'on souhaite conserver.
cut s'utilise avec des **sep**arateurs.

**cut et sort sont deux commandes différentes**

#### Syntaxe

cut -d < sep > - < champs > : Extrait de chaque ligne des valeurs du ou des champs.

#### Exemples 

**cut -d ':' - 3 < prod** : Extrait de ce qui arrive de STDIN (fichier prod), le champs 3(couleur) et l'envoi sur STDOUT en utilisant ":" comme séparateur de champs.

**cut -d ':' -f 3- < prod** : Extrait les champs à partir du 3eme (couleur et ceux qui suivent)


#### A savoir 

* N : le Neme
* N- : le Neme et les suivants
* N,M : les Neme et Meme (on peut en ajouter d'autres séparés par des virgules)
* N-M : Du Neme au Meme (inclus)
* N-M, X-Y : Du Neme au Meme et du Xeme au Yeme (et ainsi de suite)

### head - Garder des lignes de tête

#### Syntaxe

**head -n < nb >** : Produit en sortie une extraction des nb lignes du début de la source d'entrée.

**head -<nb>** : Autre façon de faire la même chose

#### Exemples

**head -n 2 < prod** : Extrait et affiche (sur STDOUT) les 2 premières lignes de STDIN

**head-3 < depts** : Idem avec les 3premières lignes depts (sans le -n)

#### A savoir

**-< nb > ou -n < nb >** ont 10 lignes par défaut


### tail- Garder des lignes de queue

#### Syntaxe 

**tail -n <nb>** : Extrait en sortie des nb lignes de la fin de la source d'entrée.

**tail -<nb>** : Une autre façon de faire la même chose mais sans le -n.

#### Options utiles
**-f** : Laisse tourner tail sans fin pour afficher les nouvelles lignes. Pratique pour les log.

### tr - Convertir

#### Synthaxe 

**tr liste_cars_source liste_cars_remp1** : Convertit chaque caractère de la liste liste_cars_source par le cara de liste_cars_remp1.

**tr -d liste_cars** : Supprime chaque caractère de la liste liste_cars

#### Options utiles

**-s** : Permet de supprimer toutes les redondances successives du même caractère d'une liste pour n'en garder qu'une seul à chaque fois.

#### Exemples

**tr , ' ' < murphy** : Remplace par des espaces toutes les virgules des données arrivant sur STDIN (ici le fichier murphy).

**tr '0123456789' _ < depts** : Remplace les chiffres de depts par des _.










    




    