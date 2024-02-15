## Prise de note

On peut créer un conteneur en précisant le nom d’un autre programme que celui prévu
par défaut, à exécuter juste après la création du conteneur.

Un conteneur est un processus.

En fait, un conteneur et le processus qui s’exécute à l’intérieur du conteneur sont la
même chose.

Quand le conteneur s'éxécute  :

• Il ne voit que les fichiers qui sont dans le conteneur.
• Il ne voit que les autres processus qui ont été lancés (généralement par lui d’ailleurs)
dans le conteneur.

ID est une chaîne hexadécimale qui fait 64 caractères de long, et dont
seulement les 12 premiers sont indiqués dans l’afichage d’un docker container ps.

## A savoir

Docker : 
* ~~technologie de virtualisation~~
* technologie de **conteneurisation**
* très présent dans le développement de logiciel
* fonctionne nativement et exclusivement sous Linux

### Images et Conetneurs

Conteneur besoin image pour exister
exemple : ZIP --> Dossier = Image --> Conteneur

### Explications
Quand on run un conteneur il est attaché au Terminal : son STDIN et ses STDOUT et
STDERR sont attachés au Terminal. S’il écrit des choses (printf(...)), ça s’affiche sur le
Terminal.
Quand on stop un conteneur, le processus du conteneur s’arrête et disparaît de la liste
des processus (cf un ps -a), mais on a vu que le conteneur demeure présent dans la
liste des conteneurs, dans un état Exited. Plus de processus en exécution signifie, plus de
rattachement à un Terminal.
Quand on start un conteneur qui a été stop, celui-ci reprend vie, un processus tictac
est à nouveau créé et c’est reparti !
Le problème est que rien ne permet de lier tictac au Terminal T1, qui peut même avoir
été fermé depuis ! Le nouveau processus tictac est donc créé... détaché de tout
Terminal !
Alors, où se font les affichages ?



## Commandes

**docker container ps** : affiche tous les conteneurs actifs. Ps liste les processus actifs :

* **CONTAINER ID** : un identifiant unique du conteneur (on y revient plus loin).

* **IMAGE** : l’image qui a servi de modèle pour créer le conteneur.

* **COMMAND** : la commande exécutée dans le conteneur, c’est-à-dire soit celle
configurée par défaut dans l’image, soit celle passée en remplacement sur la
ligne du docker container run.

* **CREATED** : âge du conteneur.

* **STATUS** : état actuel du conteneur (Up signifie qu’il est actif, en cours d’exécution).
On y revient plus loin.

* **PORTS** : vu plus tard.

* **NAMES**: un petit nom unique pour chaque conteneur. On peut le spécifier à la
création du conteneur, ou laisser le hasard faire les choses .

**docker container ps -a** : affiche tous les conteneurs même inactif

**docker container stop < ID >** : stop le container

**docker container logs -f < ID >** : affiche la fin d'une source de données et permet un affichage sans fin.

 
#### Q1

oui, c'est le root qui l'a lancé. c'est moi qui l'ai lancé.
Le PID de tictac est le 1 soit le root.


#### Q3

Qu’a affiché le conteneur ?
/bin/tictac

Dans T2, lancez un affichage de tous les processus du système, voyez-vous une
commande which tourner ?
NON

Est-ce que le conteneur dans T2 est toujours en cours d’exécution comme c’est
actuellement le cas pour le 1er conteneur lancé dans T1 ?

non

Qu’en déduisez-vous concernant le conteneur que vous venez de lancer, existe-t-il
toujours ?

Oui mais il est juste arrêté.



