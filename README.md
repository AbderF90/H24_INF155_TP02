<p align="center">
  <img src="https://www.etudesuniversitaires.ca/wp-content/uploads/2013/08/ecole-de-technologie-superieure-campus-image2.jpg" />
</p>


# TP02: Coupe du Monde de Football Qatar 2022
- [Directives particulières](#directives)
- [Introduction](#introduction)
- [Objectifs](#objectif) 
- [Énoncé de travail](#description) 
- [Déroulement de la Coupe du Monde de Football Qatar 2022](#saison)
- [Structures de Données Utilisées](#data-structures)
- [Organisation du Projet en Modules](#project-modules)
- [Fonction à implémenter](#fonctions)
  - [Partie 1: Lire et construire la base de données](#part1)
  - [Partie 2: Simulation de la Phase de Groupes](#part2)
  - [Partie 3: Gestion de la Phase Éliminatoire ](#part3)
  - [Partie 4: Gestion des Statistiques Finales](#part4)
- [Barème](#bareme)

:alarm_clock: [Date de remise le dimanche 14 avril à 23h59](https://www.timeanddate.com/countdown/generic?iso=20240414T235959&p0=165&font=cursive)


# Directives particulières <a name="directives"></a>
* Le travail doit être effectué en équipe de 2 à 4 personnes.
* Respecter [guide de codage](https://ena.etsmtl.ca/pluginfile.php/1933883/mod_resource/content/0/INF145%20-%20Normes%20de%20programmations.pdf)
* Noms de variables et fonctions adéquats (concis, compréhensibles);  
* Pas de librairies externes autres que celles déjà importées;
* Lien utile:
  * [Les chaînes de caractères](https://openclassrooms.com/fr/courses/19980-apprenez-a-programmer-en-c/7672681-manipulez-du-texte-avec-les-chaines-de-caracteres)
  * [Les structures](https://openclassrooms.com/fr/courses/19980-apprenez-a-programmer-en-c/16119-creez-vos-propres-types-de-variables)
  * [L'allocation dynamique](https://openclassrooms.com/fr/courses/19980-apprenez-a-programmer-en-c/16595-creez-des-variables-grace-a-lallocation-dynamique)
  * [Manipulez des fichiers](https://openclassrooms.com/fr/courses/19980-apprenez-a-programmer-en-c/16421-manipulez-des-fichiers-a-laide-de-fonctions)
  
<div align="justify">

# 1. Introduction <a name="introduction"></a>

L'analyse de données sportives, en particulier dans le contexte du football, est devenue un domaine d'étude et d'application de première importance dans le monde contemporain. La collecte, l'analyse et l'interprétation des données relatives aux performances des équipes, aux statistiques des matchs et au classement mondial revêtent une importance capitale non seulement pour les clubs et les organisations sportives, mais aussi pour les fans et les analystes.

Ce projet propose une immersion dans l'univers fascinant de la simulation sportive au moyen du langage de programmation C. La simulation de la Coupe du Monde de Football, un évènement qui retient l'attention globale tous les quatre ans, sera réalisée en s'appuyant sur des données concrètes. Ce processus permettra de développer des compétences importantes en manipulation de données, en algorithmique et en programmation structurée.

</div>



<div align="justify">

# 2. Objectifs du Projet <a name="objectif"></a>

Ce projet vise à atteindre les objectifs suivants :

- **Maîtrise des notions de base et des structures de données en C** : Approfondir la compréhension et l'application des concepts fondamentaux et des structures de données spécifiques au langage C, essentiel pour la modélisation et la simulation de compétitions sportives.
- **Gestion de fichiers** : Développer les compétences nécessaires pour manipuler des fichiers en C, permettant de lire et stocker des informations relatives aux équipes, aux joueurs, et aux résultats des matchs.
- **Adhésion aux standards de programmation** : Encourager l'adoption des meilleures pratiques de programmation, y compris le respect des conventions de codage et la production d'un code clair, maintenable, et efficace.
- **Simulation de matchs** : Utiliser des algorithmes pour simuler les rencontres entre équipes, prenant en compte divers facteurs tels que le classement des équipes, les performances historiques, et l'avantage de jouer à domicile.
- **Analyse statistique des résultats** : Appliquer des techniques d'analyse pour traiter et interpréter les données issues des simulations, afin de produire des statistiques détaillées sur les performances des équipes et prédire les issues potentielles des matchs.

</div>


# 3. Énoncé de travail <a name="description"></a>

<p align="center">
  <img src="https://upload.wikimedia.org/wikipedia/en/thumb/e/e3/2022_FIFA_World_Cup.svg/313px-2022_FIFA_World_Cup.svg.png" />
</p>

<div align="justify">

L'objectif de ce projet est de simuler la Coupe du Monde de Football Qatar 2022. Cet évènement majeur du football mondial rassemble les meilleures équipes nationales, chacune aspirant à remporter le titre le plus prestigieux. À travers une série de simulations, ce projet vise à prédire les résultats des matchs, en s'appuyant sur des données réelles telles que le classement FIFA des équipes, leurs performances historiques, et d'autres statistiques pertinentes. La question centrale est de savoir comment, en utilisant des méthodes de programmation en C et des algorithmes de simulation, il est possible de calculer les probabilités de chaque équipe de progresser à travers les différentes phases du tournoi, de la phase de groupes à la finale. Ce faisant, le projet explorera la capacité de modéliser des évènements sportifs complexes et d'en prédire les issues, en se basant sur l'analyse de données et la simulation informatique.

</div>



<div align="justify">

## 3.1 Votre mission:

Votre mission consiste à :

1. **Développer un programme en C** qui simule l'intégralité de la Coupe du Monde de Football Qatar 2022, en utilisant des données réelles sur les équipes qualifiées et des fonctions de simulation pour générer les résultats des matchs.
2. **Réaliser une analyse détaillée** pour extraire des insights significatifs sur les performances des équipes tout au long du tournoi, en se concentrant sur les aspects suivants :
   - Les équipes ayant marqué le plus et le moins de buts durant le tournoi.
   - Les équipes ayant accumulé le plus et le moins de points au cours des matchs de groupes et des phases éliminatoires.
   - Les équipes présentant le plus grand et le plus petit nombre de victoires, de défaites, et de matchs nuls.
   - Réaliser une analyse comparative des performances des équipes par confédération, incluante :
     - Le pourcentage de buts marqués par confédération.
     - Le pourcentage de points accumulés par confédération.
     - Le pourcentage de victoires, de défaites, et de matchs nuls par confédération.

Cette mission implique la création de structures de données complexes pour gérer les informations des équipes et des matchs, l'utilisation avancée de fichiers pour lire et stocker les données, et l'application d'algorithmes de tri et de recherche pour organiser et analyser les résultats obtenus.

</div>


## 3.2 Données:
  
Pour simuler avec précision la Coupe du Monde de Football Qatar 2022, les données suivantes seront utilisées :

- `equipes2022.txt` : 
- `matchs2022.txt` : 

### 3.2.1 Fichier `equipes2022.txt`

<div align="justify">
  
Ce fichier contient les informations des équipes participantes, organisées par confédération. Chaque section commence par le nombre d'équipes suivi du nom de la confédération. Pour chaque équipe, les informations incluent le nom, l'identifiant FIFA, le classement FIFA, et le groupe d'affectation, formatées comme suit :
</div>

```
[nombre d'équipes] [nom de la confédération]
    [nom de l'équipe] [identifiant FIFA] [classement FIFA] [groupe]
...
...
...

[nombre d'équipes] [nom de la confédération]
    [nom de l'équipe] [identifiant FIFA] [classement FIFA] [groupe]
...
...
```
<div align="center">
  
| Confédération | Places | Équipes qualifiées | Identifiant FIFA |  Classement FIFA | Groupe |
|---------------|--------|---------------------|---------------------|---------------------|---------------------|
| UEFA | 13 | ![Drapeau Allemagne](https://upload.wikimedia.org/wikipedia/commons/thumb/b/ba/Flag_of_Germany.svg/20px-Flag_of_Germany.svg.png) Allemagne | GER | 1650 | E |
| | | ![Drapeau Angleterre](https://upload.wikimedia.org/wikipedia/commons/thumb/b/be/Flag_of_England.svg/20px-Flag_of_England.svg.png) Angleterre | ENG | 1728 | B |
| | | ![Drapeau Belgique](https://upload.wikimedia.org/wikipedia/commons/thumb/9/92/Flag_of_Belgium_(civil).svg/20px-Flag_of_Belgium_(civil).svg.png) Belgique | BEL | 1816 | F |
| | | ![Drapeau Croatie](https://upload.wikimedia.org/wikipedia/commons/thumb/1/1b/Flag_of_Croatia.svg/20px-Flag_of_Croatia.svg.png) Croatie | CRO | 1645 | F |
| | | ![Drapeau Danemark](https://upload.wikimedia.org/wikipedia/commons/thumb/9/9c/Flag_of_Denmark.svg/20px-Flag_of_Denmark.svg.png) Danemark | DEN | 1666 | D |
| | | ![Drapeau Espagne](https://upload.wikimedia.org/wikipedia/commons/thumb/9/9a/Flag_of_Spain.svg/20px-Flag_of_Spain.svg.png) Espagne | ESP | 1715 | E |
| | | ![Drapeau France](https://upload.wikimedia.org/wikipedia/commons/thumb/c/c3/Flag_of_France.svg/20px-Flag_of_France.svg.png) France | FRA | 1759 | D |
| | | ![Drapeau Pays-Bas](https://upload.wikimedia.org/wikipedia/commons/thumb/2/20/Flag_of_the_Netherlands.svg/20px-Flag_of_the_Netherlands.svg.png) Pays-Bas | NED | 1694 | A |
| | | ![Drapeau Pays de Galles](https://upload.wikimedia.org/wikipedia/commons/thumb/d/dc/Flag_of_Wales.svg/20px-Flag_of_Wales.svg.png) Pays de Galles | WAL | 1569 | B |
| | | ![Drapeau Pologne](https://upload.wikimedia.org/wikipedia/commons/thumb/1/12/Flag_of_Poland.svg/20px-Flag_of_Poland.svg.png) Pologne | POL | 1548 | C |
| | | ![Drapeau Portugal](https://upload.wikimedia.org/wikipedia/commons/thumb/5/5c/Flag_of_Portugal.svg/20px-Flag_of_Portugal.svg.png) Portugal | POR | 1676 | H |
| | | ![Drapeau Serbie](https://upload.wikimedia.org/wikipedia/commons/thumb/f/ff/Flag_of_Serbia.svg/20px-Flag_of_Serbia.svg.png) Serbie | SRB | 1563 | G |
| | | ![Drapeau Suisse](https://upload.wikimedia.org/wikipedia/commons/thumb/f/f3/Flag_of_Switzerland.svg/15px-Flag_of_Switzerland.svg.png) Suisse | SUI | 1635 | G |
| CAF | 5 | ![Drapeau Cameroun](https://upload.wikimedia.org/wikipedia/commons/thumb/4/4f/Flag_of_Cameroon.svg/20px-Flag_of_Cameroon.svg.png) Cameroun | CMR | 1471 | G |
| | | ![Drapeau Ghana](https://upload.wikimedia.org/wikipedia/commons/thumb/1/19/Flag_of_Ghana.svg/20px-Flag_of_Ghana.svg.png) Ghana | GHA | 1393 | H |
| | | ![Drapeau Maroc](https://upload.wikimedia.org/wikipedia/commons/thumb/2/2c/Flag_of_Morocco.svg/20px-Flag_of_Morocco.svg.png) Maroc | MAR | 1563 | F |
| | | ![Drapeau Sénégal](https://upload.wikimedia.org/wikipedia/commons/thumb/f/fd/Flag_of_Senegal.svg/20px-Flag_of_Senegal.svg.png) Sénégal | SEN | 1584  | A |
| | | ![Drapeau Tunisie](https://upload.wikimedia.org/wikipedia/commons/thumb/c/ce/Flag_of_Tunisia.svg/20px-Flag_of_Tunisia.svg.png) Tunisie | TUN | 1507 | D |
| CONCACAF | 4 | ![Drapeau Canada](https://upload.wikimedia.org/wikipedia/commons/thumb/c/cf/Flag_of_Canada.svg/20px-Flag_of_Canada.svg.png) Canada | CAN | 1475 | F |
| | | ![Drapeau Costa Rica](https://upload.wikimedia.org/wikipedia/commons/thumb/f/f2/Flag_of_Costa_Rica.svg/20px-Flag_of_Costa_Rica.svg.png) Costa Rica | CRC | 1503 | E |
| | | ![Drapeau États-Unis](https://upload.wikimedia.org/wikipedia/commons/thumb/a/a4/Flag_of_the_United_States.svg/20px-Flag_of_the_United_States.svg.png) États-Unis | USA | 1627 | B |
| | | ![Drapeau Mexique](https://upload.wikimedia.org/wikipedia/commons/thumb/f/fc/Flag_of_Mexico.svg/20px-Flag_of_Mexico.svg.png) Mexique | MEX | 1644 | C |
| CONMEBOL | 4 | ![Drapeau Argentine](https://upload.wikimedia.org/wikipedia/commons/thumb/1/1a/Flag_of_Argentina.svg/20px-Flag_of_Argentina.svg.png) Argentine | ARG | 1773 | C |
| | | ![Drapeau Brésil](https://upload.wikimedia.org/wikipedia/commons/thumb/0/05/Flag_of_Brazil.svg/20px-Flag_of_Brazil.svg.png) Brésil | BRA | 1816 | G |
| | | ![Drapeau Équateur](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e8/Flag_of_Ecuador.svg/20px-Flag_of_Ecuador.svg.png) Équateur | ECU | 1464 |  A|
| | | ![Drapeau Uruguay](https://upload.wikimedia.org/wikipedia/commons/thumb/f/fe/Flag_of_Uruguay.svg/20px-Flag_of_Uruguay.svg.png) Uruguay | URU | 1638 | H |
| AFC | 6 | ![Drapeau Arabie saoudite](https://upload.wikimedia.org/wikipedia/commons/thumb/0/0d/Flag_of_Saudi_Arabia.svg/20px-Flag_of_Saudi_Arabia.svg.png) Arabie saoudite | SAU | 1437 | C |
| | | ![Drapeau Australie](https://upload.wikimedia.org/wikipedia/commons/thumb/b/b9/Flag_of_Australia.svg/20px-Flag_of_Australia.svg.png) Australie | AUS | 1488 | D |
| | | ![Drapeau Corée du Sud](https://upload.wikimedia.org/wikipedia/commons/thumb/0/09/Flag_of_South_Korea.svg/20px-Flag_of_South_Korea.svg.png) Corée du Sud | KOR | 1530| H | 
| | | ![Drapeau Iran](https://upload.wikimedia.org/wikipedia/commons/thumb/c/ca/Flag_of_Iran.svg/20px-Flag_of_Iran.svg.png) Iran | IRN | 1564 | B |
| | | ![Drapeau Japon](https://upload.wikimedia.org/wikipedia/commons/thumb/9/9e/Flag_of_Japan.svg/20px-Flag_of_Japan.svg.png) Japon | JPN | 1559 |  E|
| | | ![Drapeau Qatar](https://upload.wikimedia.org/wikipedia/commons/thumb/6/65/Flag_of_Qatar.svg/20px-Flag_of_Qatar.svg.png) Qatar (pays hôte) | QAT | 1439 | A |
</div>

  
### 3.2.2 Fichier `matchs2022.txt`

<div align="justify">
  
Liste tous les matchs de la phase de groupes avec les identifiants des équipes domicile et visiteuse. Chaque ligne représente un match :

```
[id équipe domicile] [id équipe visiteuse]
...
...
```
Ces fichiers fourniront la base de données nécessaire pour alimenter le programme de simulation, permettant ainsi de reproduire le déroulement du tournoi de manière réaliste et fondée sur des données authentiques.</div>

<div align="justify">

## 3.3 Mécanisme de Simulation

La simulation réaliste des matchs de la Coupe du Monde de Football Qatar 2022 est le cœur de notre projet. Pour ce faire, nous adoptons une approche méthodique qui tient compte à la fois des performances historiques des équipes et de leur classement FIFA actuel. Le processus de simulation est divisé en étapes clairement définies pour assurer des résultats à la fois cohérents et imprévisibles, reflétant la nature dynamique du football.

### Étape 1: Préparation des Données
Avant la simulation, les données pertinentes sur les équipes, incluant le classement FIFA, les performances historiques et les statistiques de match, sont collectées et structurées. Ces données servent de base pour évaluer la force relative de chaque équipe.

### Étape 2: Simulation des Matchs
Chaque match est simulé en tenant compte des facteurs suivants :
- **Classement FIFA :** Influence directement les probabilités de victoire, de nul ou de défaite pour chaque équipe.
- **Distribution des Scores :** Utilisation d'une fonction générant des scores basés sur une distribution normale, ajustée selon le classement FIFA des équipes. Cela permet de simuler des résultats de matchs qui reflètent les capacités réelles des équipes.
- **Résolution des Égalités :** En cas de match nul à la fin du temps règlementaire, des mécanismes tels que la prolongation ou les tirs au but sont aléatoirement choisis pour déterminer le gagnant.

### Étape 3: Mise à jour des Statistiques
Après chaque match simulé, les statistiques des équipes sont mises à jour pour inclure les résultats, les buts marqués et encaissés, et d'autres données pertinentes. Cela permet de maintenir un classement à jour et de préparer le terrain pour les simulations suivantes.

### Étape 4: Avancement et Élimination
- **Phase de Groupes :** Les équipes sont classées selon leurs performances, avec les deux meilleures équipes de chaque groupe avançant aux phases éliminatoires.
- **Phases Éliminatoires :** À partir des huitièmes de finale, les matchs sont éliminatoires, menant finalement à la finale où le champion est couronné.

### Étape 5: Analyse et Répétition
Le processus de simulation peut être répété plusieurs fois pour générer des données statistiques significatives, permettant une analyse approfondie des performances des équipes et la prédiction des issues potentielles du tournoi.

</div>


<div align="justify">

# 4. Déroulement de la Coupe du Monde de Football Qatar 2022 <a name="saison"></a>

La Coupe du Monde de Football Qatar 2022 se distingue par son format unique et sa répartition globale des équipes. Le tournoi regroupe 32 équipes nationales issues de différentes confédérations à travers le monde, réparties en huit groupes de quatre équipes chacun. La phase de groupes est suivie par les phases éliminatoires, incluant les huitièmes de finale, les quarts de finale, les demi-finales, et la finale.

- **Phase de groupes** : Chaque équipe joue trois matchs, un contre chaque autre équipe de son groupe. Les points sont attribués comme suit:
  - **Victoire** : 3 points pour l'équipe gagnante.
  - **Match nul** : 1 point pour chaque équipe.
  - **Défaite** : 0 point pour l'équipe perdante.

- **Phases éliminatoires** : Les deux premières équipes de chaque groupe, basées sur le total de points accumulés, se qualifient pour les huitièmes de finale. Les matchs éliminatoires sont joués sur un format de match unique, où le vainqueur avance à l'étape suivante, tandis que le perdant est éliminé du tournoi.

- **Critères de départage** : En cas d'égalité de points dans les phases de groupes, plusieurs critères sont utilisés pour départager les équipes, tels que la différence de buts générale, le nombre de buts marqués, et les résultats directs entre les équipes concernées.

À la fin du tournoi, l'équipe gagnante de la finale est couronnée championne du monde, tandis que les équipes ayant perdu en demi-finales jouent un match pour la troisième place. Ce format garantit une compétition intense et offre de nombreuses possibilités de surprises et de moments mémorables.

</div>



<div align="justify">

# 5. Structures de Données Utilisées <a name="data-structures"></a>

Ce projet utilise des structures de données spécifiques pour modéliser les aspects clés de la Coupe du Monde de Football. Ces structures représentent les équipes, les groupes, les matchs, et l'organisation générale du tournoi. Voici une explication détaillée de chaque structure et de ses champs :

## Structure `t_equipe`
Cette structure représente une équipe participant au tournoi, contenant toutes les informations nécessaires relatives à son identité et ses performances.
```c
typedef struct {
    char id[10];       // Identifiant unique de l'équipe, souvent basé sur des abréviations ou des codes FIFA.
    char nom[20];      // Nom complet de l'équipe.
    char conf[20];     // Confédération à laquelle appartient l'équipe (ex : UEFA, CONMEBOL).
    char groupe;       // Lettre désignant le groupe dans lequel l'équipe est placée.
    int vic;           // Nombre de victoires de l'équipe dans le tournoi.
    int def;           // Nombre de défaites de l'équipe dans le tournoi.
    int nul;           // Nombre de matchs nuls de l'équipe dans le tournoi.
    int buts_p;        // Nombre total de buts marqués par l'équipe.
    int buts_c;        // Nombre total de buts encaissés par l'équipe.
    int diff_buts;     // Différence entre les buts marqués et les buts encaissés.
    int pts;           // Nombre total de points accumulés par l'équipe dans le tournoi.
    int clas;          // Classement FIFA de l'équipe.
    int matchs_joues;  // Nombre total de matchs joués par l'équipe.
} t_equipe;
```

## Structure `t_groupe`
Organise les équipes en groupes pour la phase de groupes du tournoi.
```c
typedef struct {
    char nom;          // Lettre désignant le nom du groupe.
    t_equipe* eqp;       // Pointeur vers un tableau dynamique d'équipes dans le groupe.
    int nb_eqp;        // Nombre d'équipes actuellement dans le groupe.
    int cap;           // Capacité actuelle du tableau d'équipes (permet d'allouer dynamiquement plus d'espace si nécessaire).
} t_groupe;
```

## Structure `t_buts`
Contient le décompte des buts pour un match donné entre deux équipes.
```c
typedef struct {
    int buts_eq1;      // Nombre de buts marqués par l'équipe 1.
    int buts_eq2;      // Nombre de buts marqués par l'équipe 2.
} t_buts;
```

## Structure `t_eliminatoire`
Définit une rencontre éliminatoire, pouvant être un match des huitièmes de finale, quarts de finale, demi-finales, ou la finale.
```c
typedef struct {
    t_equipe rencontre[2];  // Les deux équipes participant à la rencontre éliminatoire.
} t_eliminatoire;
```

## Structure `t_wcup`
Représente la structure globale du tournoi, incluant toutes les phases de jeu.
```c
typedef struct {
    t_groupe grp[8];           // Tableau des 8 groupes de la phase de groupes.
    t_eliminatoire tour_16[8]; // Tableau des 8 matchs des huitièmes de finale.
    t_eliminatoire tour_8[4];  // Tableau des 4 matchs des quarts de finale.
    t_eliminatoire tour_4[2];  // Tableau des 2 matchs des demi-finales.
    t_eliminatoire finale;     // La finale du tournoi.
    t_equipe gagnant;          // Équipe qui a gagné la finale.
} t_wcup;
```

## Structure `t_match` et `t_liste_matchs`
Ces structures permettent de gérer les informations relatives aux matchs programmés et simulés durant le tournoi.
```c
typedef struct{
    char id_vis[10];     // Identifiant de l'équipe visiteuse.
    char id_dom[10];     // Identifiant de l'équipe à domicile.
    int clas_vis;        // Classement

 FIFA de l'équipe visiteuse.
    int clas_dom;        // Classement FIFA de l'équipe à domicile.
    int buts_eq1;        // Buts marqués par l'équipe à domicile.
    int buts_eq2;        // Buts marqués par l'équipe visiteuse.
    int pts_vis;         // Points accumulés par l'équipe visiteuse.
    int pts_dom;         // Points accumulés par l'équipe à domicile.
} t_match;

typedef struct{
    t_t_match matchs;     // Pointeur vers un tableau dynamique de matchs.
    int nb_match;       // Nombre de matchs contenus dans le tableau.
    int cap;             // Capacité actuelle du tableau (pour allocation dynamique).
} t_liste_matchs;
```

La compréhension de ces structures est essentielle pour naviguer à travers les différentes phases du projet de simulation.

</div>



<div align="justify">

# 6. Organisation du Projet en Modules <a name="project-modules"></a>

Afin de structurer le projet de manière modulaire et de faciliter la compréhension ainsi que la manipulation du code par les étudiants, le projet est divisé en cinq modules principaux, chacun ayant une responsabilité spécifique. Voici une description de chaque module et de son rôle au sein du projet :

### Module 1: Déclaration des Structures (`structures.h`)
Ce module contient les déclarations de toutes les structures de données utilisées dans le projet, offrant une référence centrale pour la modélisation des éléments du tournoi.
- **`structures.h`** : Contient les déclarations des structures `t_equipe`, `t_groupe`, `t_buts`, `t_eliminatoire`, `t_matche`, `t_liste_matches`, et `t_wcup`.

### Module 2: Lecture des Fichiers (`lecture_fichiers.c` et `lecture_fichiers.h`)
Ce module se charge de lire les informations des équipes et des matchs depuis des fichiers, permettant de charger les données nécessaires pour le tournoi.
- **`lecture_fichiers.h`** : Définit les prototypes des fonctions `lire_equipes` et `lire_matches`.
- **`lecture_fichiers.c`** : Implémente les fonctions pour la lecture des fichiers des équipes et des matchs.

### Module 3: Simulation de la Phase de Groupes (`sim_phase_grp.c` et `sim_phase_grp.h`)
Ce module gère la simulation des matchs de la phase de groupes, y compris la mise à jour des classements et l'affichage des statistiques des groupes.
- **`sim_phase_grp.h`** : Définit les prototypes des fonctions pour simuler les matchs de la phase de groupes et afficher les groupes.
- **`sim_phase_grp.c`** : Implémente la logique de simulation des matchs de la phase de groupes et les fonctions d'affichage.

### Module 4: Gestion de la Phase Éliminatoire (`phase_elimin.c` et `phase_elimin.h`)
Ce module prend en main la simulation des matchs éliminatoires, de la phase des huitièmes de finale jusqu'à la finale.
- **`phase_elimin.h`** : Définit les prototypes des fonctions `jouer_match_eliminatoire`, `simuler_tour`, et `tour_eliminatoires`.
- **`phase_elimin.c`** : Implémente les fonctions pour gérer et simuler la phase éliminatoire du tournoi.

### Module 5: Gestion des Statistiques Finales (`stat_finales.c` et `stat_finales.h`)
Ce module est responsable de l'analyse et de l'affichage des statistiques finales après la conclusion du tournoi, fournissant des insights sur les performances des équipes.
- **`stat_finales.h`** : Définit les prototypes des fonctions pour l'affichage des statistiques finales et éventuellement d'autres analyses.
- **`stat_finales.c`** : Implémente les fonctions pour calculer et présenter diverses statistiques finales du tournoi.

### Résumé de l'Organisation des Fichiers
- **`structures.h`** : Déclarations centrales des structures.
- **`lecture_fichiers.c` / `lecture_fichiers.h`** : Lecture des données à partir de fichiers.
- **`sim_phase_grp.c` / `sim_phase_grp.h`** : Simulation de la phase de groupes.
- **`phase_elimin.c` / `phase_elimin.h`** : Gestion de la phase éliminatoire.
- **`stat_finales.c` / `stat_finales.h`** : Analyse et présentation des statistiques finales.

Cette organisation modulaire permet une meilleure répartition des responsabilités au sein du code, facilitant ainsi la gestion du projet et permettant aux étudiants de se concentrer sur des aspects individuels de la simulation du tournoi.

</div>


# 7. Fonction à implémenter <a name="fonctions"></a>

<div align="justify">
Pour structurer le projet de manière efficace et garantir une avancée méthodique, il s'avère essentiel de segmenter le travail en sous-programmes spécialisés, organisés en divers sous-modules. Cette approche contribue à une compréhension détaillée des processus internes du programme, tout en augmentant la modularité, facilitant ainsi les ajustements ou l'ajout de nouvelles fonctionnalités à l'avenir. Les tâches fondamentales seront abordées en premier lieu, établissant ainsi la base sur laquelle les procédures plus complexes seront ultérieurement construites.</div>


## 7.1 Partie 1: Lire et construire la base de données (Semaine 1: 17.5 Points)<a name="part1"></a>

<div align="justify">

### Lire les équipes (7.5 Points)

Cette fonction est conçue pour charger les données des équipes qualifiées pour la Coupe du Monde de Football Qatar 2022 à partir d'un fichier texte. Elle lit les informations concernant chaque équipe, telles que le nom de l'équipe, son identifiant FIFA, son classement FIFA, et le groupe auquel elle appartient. Ces informations sont ensuite organisées dans une structure <code>t_equipe</code> et stockées dans un tableau dynamique au sein d'une structure <code>t_groupe</code>, elle-même intégrée dans une structure globale <code>t_wcup</code> représentant la Coupe du Monde.<br><br>

Le fichier est structuré par confédérations, avec chaque section débutant par le nombre d'équipes et le nom de la confédération. Pour chaque équipe, la fonction lit le nom, l'identifiant FIFA, le classement FIFA, et le groupe d'affectation, avant d'ajouter l'équipe à son groupe respectif dans la structure `t_wcup`. Si nécessaire, l'espace alloué pour les équipes dans un groupe est dynamiquement agrandi pour accueillir de nouvelles entrées.

#### Paramètres :
- `nom_fichier` : Chaîne de caractères constante représentant le chemin vers le fichier contenant les données des équipes.
- `wc` : Pointeur vers une structure `t_wcup`, qui sera remplie avec les données des équipes lues du fichier.

#### Déroulement de la fonction :
1. La fonction commence par ouvrir le fichier spécifié pour la lecture. Si l'ouverture échoue, elle affiche un message d'erreur et s'arrête.
2. Pour chaque confédération, le nombre d'équipes et le nom de la confédération sont lus, puis chaque équipe est traitée individuellement.
3. Pour chaque équipe, les informations sont lues et stockées dans une structure `t_equipe`. Cette structure est ensuite ajoutée à un tableau dynamique correspondant au groupe de l'équipe dans la structure `t_wcup`.
4. Le tableau des équipes dans chaque groupe est agrandi dynamiquement au besoin pour accueillir toutes les équipes.
5. Fermeture du fichier une fois toutes les données lues et traitées.

<p align="justify">
Voici une implémentation en pseudo-code :
</p>

<p align="center">
    <img src="./Images/Algo_1.svg">
</p>


#### Exemple d'utilisation :
```c
t_wcup wc; 
lire_equipes("equipes2022.txt", &wc);
```
</div>

---


<div align="justify">

### Afficher les Groupes (3 Points)

La fonction `afficher_groupe` est conçue pour présenter les informations détaillées de chaque groupe de la phase de groupes de la Coupe du Monde de Football. Elle parcourt tous les groupes, affichant pour chaque équipe son nom, son identifiant (ID), et son classement FIFA, fournissant ainsi une vue d'ensemble claire de la composition initiale des groupes du tournoi.

#### Fonctionnement :
- **Parcours des groupes :** La fonction itère sur chaque groupe de la Coupe du Monde, affichant le nom du groupe suivi des détails des équipes qui le composent.
- **Affichage des équipes :** Pour chaque équipe dans un groupe, le nom de l'équipe, son identifiant (ID) et son classement FIFA sont affichés, offrant une perspective sur la force relative des équipes au sein de chaque groupe.

#### Paramètres :
- `wc` : Une structure `t_wcup` passée par valeur, contenant les informations complètes des groupes et des équipes de la Coupe du Monde.

#### Type de retour :
- Aucun. Les informations sont affichées directement à l'écran.

#### Exemple d'utilisation :
```c
t_wcup wc; // Supposons que wc a été préalablement initialisé avec les données des groupes et des équipes. 

// Afficher les détails de chaque groupe de la Coupe du Monde
afficher_groupe(wc);
```
</div>

**Groupe A:**
|   | Équipe        | Pts | M-J | V | N | D | BP | BC | Diff |
|---|---------------|-----|---|---|---|---|----|----|------|
| 1 | ![Qatar](https://upload.wikimedia.org/wikipedia/commons/thumb/6/65/Flag_of_Qatar.svg/20px-Flag_of_Qatar.svg.png) **Qatar**     | 0  | 0  | 0  | 0  | 0  | 0   |  0  |   0   |
| 2 | ![Équateur](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e8/Flag_of_Ecuador.svg/20px-Flag_of_Ecuador.svg.png) **Équateur** | 0  | 0  | 0  | 0  | 0  | 0   |  0  |   0   |
| 3 | ![Sénégal](https://upload.wikimedia.org/wikipedia/commons/thumb/f/fd/Flag_of_Senegal.svg/20px-Flag_of_Senegal.svg.png) **Sénégal** | 0  | 0  | 0  | 0  | 0  | 0   |  0  |   0   |
| 4 | ![Pays-Bas](https://upload.wikimedia.org/wikipedia/commons/thumb/2/20/Flag_of_the_Netherlands.svg/20px-Flag_of_the_Netherlands.svg.png) **Pays-Bas**| 0  | 0  | 0  | 0  | 0  | 0   |  0  |   0   |

**Groupe B:**
|   | Équipe        | Pts | M-J | V | N | D | BP | BC | Diff |
|---|---------------|-----|---|---|---|---|----|----|------|
| 1 | ![Angleterre](https://upload.wikimedia.org/wikipedia/commons/thumb/b/be/Flag_of_England.svg/20px-Flag_of_England.svg.png) **Angleterre** | 0  | 0  | 0  | 0  | 0  | 0   |  0  |   0   |
| 2 | ![Iran](https://upload.wikimedia.org/wikipedia/commons/thumb/c/ca/Flag_of_Iran.svg/20px-Flag_of_Iran.svg.png) **Iran** | 0  | 0  | 0  | 0  | 0  | 0   |  0  |   0   |
| 3 | ![États-Unis](https://upload.wikimedia.org/wikipedia/commons/thumb/a/a4/Flag_of_the_United_States.svg/20px-Flag_of_the_United_States.svg.png) **États-Unis** | 0  | 0  | 0  | 0  | 0  | 0   |  0  |   0   |
| 4 | ![Pays de Galles](https://upload.wikimedia.org/wikipedia/commons/thumb/d/dc/Flag_of_Wales.svg/20px-Flag_of_Wales.svg.png) **Pays de Galles**| 0  | 0  | 0  | 0  | 0  | 0   |  0  |   0   |

**Groupe C:**
|   | Équipe        | Pts | M-J | V | N | D | BP | BC | Diff |
|---|---------------|-----|---|---|---|---|----|----|------|
| 1 | ![Argentine](https://upload.wikimedia.org/wikipedia/commons/thumb/1/1a/Flag_of_Argentina.svg/20px-Flag_of_Argentina.svg.png) **Argentine** | 0  | 0  | 0  | 0  | 0  | 0   |  0  |   0   |
| 2 | ![Arabie Saoudite](https://upload.wikimedia.org/wikipedia/commons/thumb/0/0d/Flag_of_Saudi_Arabia.svg/20px-Flag_of_Saudi_Arabia.svg.png) **Arabie Saoudite** | 0  | 0  | 0  | 0  | 0  | 0   |  0  |   0   |
| 3 | ![Mexique](https://upload.wikimedia.org/wikipedia/commons/thumb/f/fc/Flag_of_Mexico.svg/20px-Flag_of_Mexico.svg.png) **Mexique** | 0  | 0  | 0  | 0  | 0  | 0   |  0  |   0   |
| 4 | ![Pologne](https://upload.wikimedia.org/wikipedia/commons/thumb/1/12/Flag_of_Poland.svg/20px-Flag_of_Poland.svg.png) **Pologne**| 0  | 0  | 0  | 0  | 0  | 0   |  0  |   0   |


**Groupe D:**
|   | Équipe        | Pts | M-J | V | N | D | BP | BC | Diff |
|---|---------------|-----|---|---|---|---|----|----|------|
| 1 | ![France](https://upload.wikimedia.org/wikipedia/commons/thumb/c/c3/Flag_of_France.svg/20px-Flag_of_France.svg.png) **France** | 0  | 0  | 0  | 0  | 0  | 0   |  0  |   0   |
| 2 | ![Australie](https://upload.wikimedia.org/wikipedia/commons/thumb/8/88/Flag_of_Australia_%28converted%29.svg/20px-Flag_of_Australia_%28converted%29.svg.png) **Australie** | 0  | 0  | 0  | 0  | 0  | 0   |  0  |   0   |
| 3 | ![Danemark](https://upload.wikimedia.org/wikipedia/commons/thumb/9/9c/Flag_of_Denmark.svg/20px-Flag_of_Denmark.svg.png) **Danemark** | 0  | 0  | 0  | 0  | 0  | 0   |  0  |   0   |
| 4 | ![Tunisie](https://upload.wikimedia.org/wikipedia/commons/thumb/c/ce/Flag_of_Tunisia.svg/20px-Flag_of_Tunisia.svg.png) **Tunisie**| 0  | 0  | 0  | 0  | 0  | 0   |  0  |   0   |

**Groupe E:**
|   | Équipe         | Pts | M-J | V | N | D | BP | BC | Diff |
|---|----------------|-----|---|---|---|---|----|----|------|
| 1 | ![Espagne](https://upload.wikimedia.org/wikipedia/commons/thumb/9/9a/Flag_of_Spain.svg/20px-Flag_of_Spain.svg.png) **Espagne** | 0  | 0  | 0  | 0  | 0  | 0   |  0  |   0   |
| 2 | ![Costa Rica](https://upload.wikimedia.org/wikipedia/commons/thumb/f/f2/Flag_of_Costa_Rica.svg/20px-Flag_of_Costa_Rica.svg.png) **Costa Rica** | 0  | 0  | 0  | 0  | 0  | 0   |  0  |   0   |
| 3 | ![Allemagne](https://upload.wikimedia.org/wikipedia/commons/thumb/b/ba/Flag_of_Germany.svg/20px-Flag_of_Germany.svg.png) **Allemagne** | 0  | 0  | 0  | 0  | 0  | 0   |  0  |   0   |
| 4 | ![Japon](https://upload.wikimedia.org/wikipedia/commons/thumb/9/9e/Flag_of_Japan.svg/20px-Flag_of_Japan.svg.png) **Japon**| 0  | 0  | 0  | 0  | 0  | 0   |  0  |   0   |

**Groupe F:**
|   | Équipe         | Pts | M-J | V | N | D | BP | BC | Diff |
|---|----------------|-----|---|---|---|---|----|----|------|
| 1 | ![Belgique](https://upload.wikimedia.org/wikipedia/commons/thumb/6/65/Flag_of_Belgium.svg/20px-Flag_of_Belgium.svg.png) **Belgique** | 0  | 0  | 0  | 0  | 0  | 0   |  0  |   0   |
| 2 | ![Canada](https://upload.wikimedia.org/wikipedia/commons/thumb/d/d9/Flag_of_Canada_%28Pantone%29.svg/20px-Flag_of_Canada_%28Pantone%29.svg.png) **Canada** | 0  | 0  | 0  | 0  | 0  | 0   |  0  |   0   |
| 3 | ![Maroc](https://upload.wikimedia.org/wikipedia/commons/thumb/2/2c/Flag_of_Morocco.svg/20px-Flag_of_Morocco.svg.png) **Maroc**| 0  | 0  | 0  | 0  | 0  | 0   |  0  |   0   |
| 4 | ![Croatie](https://upload.wikimedia.org/wikipedia/commons/thumb/1/1b/Flag_of_Croatia.svg/20px-Flag_of_Croatia.svg.png) **Croatie**| 0  | 0  | 0  | 0  | 0  | 0   |  0  |   0   |


**Groupe G:**
|   | Équipe          | Pts | M-J | V | N | D | BP | BC | Diff |
|---|-----------------|-----|---|---|---|---|----|----|------|
| 1 | ![Brésil](https://upload.wikimedia.org/wikipedia/commons/thumb/0/05/Flag_of_Brazil.svg/20px-Flag_of_Brazil.svg.png) **Brésil** | 0  | 0  | 0  | 0  | 0  | 0   |  0  |   0   |
| 2 | ![Cameroun](https://upload.wikimedia.org/wikipedia/commons/thumb/4/4f/Flag_of_Cameroon.svg/20px-Flag_of_Cameroon.svg.png) **Cameroun**| 0  | 0  | 0  | 0  | 0  | 0   |  0  |   0   |
| 3 | ![Serbie](https://upload.wikimedia.org/wikipedia/commons/thumb/f/ff/Flag_of_Serbia.svg/20px-Flag_of_Serbia.svg.png) **Serbie**| 0  | 0  | 0  | 0  | 0  | 0   |  0  |   0   |
| 4 | ![Suisse](https://upload.wikimedia.org/wikipedia/commons/thumb/f/f3/Flag_of_Switzerland.svg/20px-Flag_of_Switzerland.svg.png) **Suisse**| 0  | 0  | 0  | 0  | 0  | 0   |  0  |   0   |


**Groupe H:**
|   | Équipe         | Pts | M-J | V | N | D | BP | BC | Diff |
|---|----------------|-----|---|---|---|---|----|----|------|
| 1 | ![Portugal](https://upload.wikimedia.org/wikipedia/commons/thumb/5/5c/Flag_of_Portugal.svg/20px-Flag_of_Portugal.svg.png) **Portugal**| 0  | 0  | 0  | 0  | 0  | 0   |  0  |   0   |
| 2 | ![Ghana](https://upload.wikimedia.org/wikipedia/commons/thumb/1/19/Flag_of_Ghana.svg/20px-Flag_of_Ghana.svg.png) **Ghana**| 0  | 0  | 0  | 0  | 0  | 0   |  0  |   0   |
| 3 | ![Uruguay](https://upload.wikimedia.org/wikipedia/commons/thumb/f/fe/Flag_of_Uruguay.svg/20px-Flag_of_Uruguay.svg.png) **Uruguay** | 0  | 0  | 0  | 0  | 0  | 0   |  0  |   0   |
| 4 | ![Corée du Sud](https://upload.wikimedia.org/wikipedia/commons/thumb/0/09/Flag_of_South_Korea.svg/20px-Flag_of_South_Korea.svg.png) **Corée du Sud**| 0  | 0  | 0  | 0  | 0  | 0   |  0  |   0   |



---



<div align="justify">

### Lire les matchs (5 Points)

Cette fonction lit les informations des matchs prévus pour la Coupe du Monde de Football Qatar 2022 à partir d'un fichier nommé `matchs2022.txt`. Chaque ligne du fichier contient les identifiants des deux équipes qui s'affronteront, ce qui permet d'organiser les données des matchs de manière efficace. La fonction procède à la lecture de chaque ligne, extrayant les identifiants des équipes participantes et les stockant dans des structures `t_matche` correspondantes. Ces structures sont ensuite ajoutées à un tableau dynamique, qui est capable de s'agrandir au besoin pour accueillir tous les matchs lus du fichier.

#### Paramètres :
- `nom_fichier` : Chaîne de caractères constante indiquant le chemin d'accès au fichier contenant les données des matchs.
- `t_liste_matches` : Pointeur vers une structure `t_liste_matches` qui est utilisée pour stocker le tableau des matchs lus, ainsi que le nombre total de matchs et la capacité actuelle du tableau.

#### Fonctionnalités :
- **Ouverture du fichier** : La fonction commence par ouvrir le fichier spécifié pour la lecture. Si l'ouverture échoue, elle affiche un message d'erreur et s'arrête.
- **Initialisation du tableau de matchs** : Avant de commencer la lecture, la fonction initialise la structure `t_liste_matches` avec une capacité initiale de 1, prête à être agrandie selon le besoin.
- **Lecture des matchs** : La fonction lit le fichier ligne par ligne. Pour chaque ligne lue avec succès, elle crée une nouvelle structure `t_matche` et la remplit avec les identifiants des équipes domicile et visiteuses lues.
- **Gestion dynamique de la mémoire** : Si le nombre de matchs lus atteint la capacité actuelle du tableau, la fonction augmente cette capacité en la doublant, utilisant `realloc` pour ajuster la taille du tableau en mémoire.
- **Fermeture du fichier** : Une fois toutes les lignes lues et traitées, la fonction ferme le fichier.

<p align="justify">
Voici une implémentation en pseudo-code :
</p>

<p align="center">
    <img src="./Images/Algo_2.svg">
</p>


#### Exemple d'utilisation :
```c
int nombre_matchs;
t_match matches = lire_matchs("matchs2022.txt", &nombre_matchs);
```

</div>


---



<div align="justify">

### Afficher les Matchs (2 Points)
La fonction `afficher_match` est conçue pour présenter une liste des matchs programmés dans un format simplifié, en affichant les identifiants (ID) des équipes domicile et visiteuse pour chaque match prévu. Cela permet d'avoir une vision claire de l'ensemble des confrontations à venir ou simulées dans le cadre de la Coupe du Monde de Football.

#### Fonctionnement :
- **Itération sur les matchs :** La fonction parcourt l'ensemble des matchs enregistrés dans la liste fournie, affichant les identifiants des équipes impliquées dans chaque rencontre.
- **Affichage simplifié :** Pour chaque match, les identifiants de l'équipe à domicile et de l'équipe visiteuse sont affichés côte à côte, facilitant ainsi la compréhension rapide des confrontations prévues.

#### Paramètres :
- `t_liste_matches` : Une structure `t_liste_matches` contenant la liste des matchs à afficher, y compris le nombre de matchs et un tableau des rencontres.

#### Type de retour :
- Aucun. Les informations sur les matchs sont directement affichées à l'utilisateur.

</div>


#### Exemple d'utilisation :
```c
Liste_matches liste_matches;
// Supposons que liste_matches a été préalablement remplie avec les données des matchs à venir.

// Afficher les identifiants des équipes pour chaque match prévu
afficher_match(liste_matches);
```

## 7.2 Partie 2: Simulation de la Phase de Groupes (Semaine 2: 25 Points)<a name="part2"></a>


<div align="justify">

### Trouver équipe par identifiant (2.5 Points)

La fonction `trouver_equipe_par_id` est essentielle dans le contexte de la simulation de la Coupe du Monde de Football FIFA Qatar 2022, car elle permet de localiser une équipe spécifique à partir de son identifiant unique. Cette capacité est cruciale pour le bon déroulement des simulations de matchs, assurant que chaque équipe puisse être correctement identifiée et manipulée avant, pendant, et après les matchs simulés.

#### Fonctionnement :
La fonction effectue une recherche séquentielle à travers la structure `t_wcup`, qui est organisée en groupes contenant les équipes qualifiées. Chaque groupe inclut un tableau d'équipes, avec chaque équipe représentée par une structure contenant des informations telles que son identifiant, son nom, et d'autres données pertinentes.

Pour trouver une équipe, la fonction parcourt chaque groupe et, au sein de chaque groupe, compare l'identifiant de chaque équipe avec l'identifiant recherché. Si elle trouve une équipe dont l'identifiant correspond à celui fourni, la fonction retourne immédiatement un pointeur vers cette structure `t_equipe`. Si aucune correspondance n'est trouvée dans l'ensemble des groupes, la fonction retourne `NULL`, signalant ainsi l'absence d'une équipe correspondant à l'identifiant spécifié.

#### Paramètres :
- `wc` : Pointeur vers la structure `t_wcup` contenant les données de tous les groupes et équipes de la Coupe du Monde.
- `id` : Chaîne de caractères constante représentant l'identifiant unique de l'équipe recherchée.

#### Type de retour :
- Un pointeur vers la structure `t_equipe` trouvée, contenant les informations détaillées de l'équipe correspondante. Retourne `NULL` si aucune équipe correspondante n'est trouvée.

</div>


#### Exemple d'utilisation :
```c
t_wcup wc; // Supposons que wc a été préalablement initialisé avec les données des groupes et des équipes.

char* id_recherche = "FRA";
t_equipe* equipe = trouver_equipe_par_id(&wc, id_recherche);

if (equipe != NULL) {
    printf("Equipe trouvée : %s\n", equipeTrouvee->nom);
} else {
    printf("Aucune équipe correspondante à l'ID '%s' n'a été trouvée.\n", id_recherche);
}
```



---



<div align="justify">

### Générateur de buts basé sur une distribution normale (2.5 Points)

La fonction décrite est un générateur de nombres aléatoires qui simule le nombre de buts marqués dans un match de football, en s'appuyant sur une distribution normale. Cette méthode est idéale pour refléter la distribution statistique réelle des scores dans le football, où la majorité des matchs se terminent avec peu de buts.

#### Fonctionnement :
Le générateur utilise la méthode Box-Muller pour convertir deux nombres aléatoires uniformes en une variable suivant une distribution normale standard. La procédure est détaillée ci-dessous, indépendamment de tout langage de programmation :

1. **Génération de deux nombres aléatoires uniformes** $u_1$ et $u_2$. Ces nombres sont choisis de manière à être distribués uniformément dans l'intervalle ouvert $(0, 1)$.

2. **Transformation de Box-Muller** : À partir de $u_1$ et $u_2$, une variable aléatoire $z$ suivant une distribution normale standard est générée selon la formule : $z = \sqrt{-2.\ln(u_1)} . \cos(2.\pi.u_2)$

La variable $z$ obtenue est ensuite ajustée pour modéliser un score de football réaliste. Pour ce faire, on la normalise avec une moyenne $\mu$ et un écart-type $\sigma$, puis on restreint le résultat à un intervalle spécifique pour assurer que le nombre de buts est réaliste dans le contexte d'un match de football selon la formule: $z.\sigma + \mu $

#### Ajustement du score :
Le score final est ajusté pour s'assurer qu'il reste dans une plage acceptable, typiquement entre 0 et 6 buts, pour refléter les scores communs observés dans les matchs de football. Cette restriction est appliquée à la variable normalisée pour obtenir un nombre entier de buts conforme aux attentes du contexte sportif.

#### Formule d'ajustement du score :
La variable normalisée et ajustée pour le contexte du football est calculée comme suit, sans se limiter à une implémentation spécifique dans un langage de programmation :
- Le score ajusté est obtenu en limitant la valeur de \$z$ normalisée (avec $\mu$ et $\sigma$) à l'intervalle $[0, 6]$.

#### Paramètres :
- `mu` : La moyenne de la distribution, représentant le score moyen attendu dans un match.
- `sigma` : L'écart-type de la distribution, indiquant la variabilité des scores autour de la moyenne.

#### Type de retour :
- Un entier représentant le nombre de buts généré, garantis d'être compris entre 0 et 6.

</div>


#### Exemple d'utilisation :
```c
int buts_marques = normalvariate(2, 1);
```


---


<div align="justify">

### Jouer un match (2.5 Points)

La fonction `jouer_match` simule l'issue d'une rencontre entre deux équipes lors de la Coupe du Monde de Football FIFA Qatar 2022, en se basant sur leur classement FIFA pour prédire le résultat du match. Cette approche de simulation est conçue pour refléter de manière réaliste l'influence du classement FIFA sur la performance des équipes, fournissant une prédiction du résultat basée sur les performances historiques.

#### Fonctionnement :
- **Influence du classement FIFA :** Le classement FIFA est utilisé pour ajuster la probabilité de marquer des buts pour chaque équipe, en prenant en compte la différence de classement entre les deux équipes. Cela permet à l'équipe avec un meilleur classement d'avoir statistiquement plus de chances de marquer.
- **Détermination des scores :** Le nombre de buts marqués par chaque équipe est généré à l'aide d'une distribution normale, où la moyenne est ajustée selon la différence de classement FIFA. Cela simule l'avantage ou le désavantage d'une équipe en fonction de son classement.

#### Calcul des buts :
La fonction calcule la différence de classement FIFA entre les deux équipes et le divise par 1000 (`diff_fifa`), puis utilise cette différence pour ajuster la moyenne des buts marqués. Pour l'équipe avec un classement supérieur, la moyenne est augmentée de `diff_fifa`, et pour l'équipe avec un classement inférieur, elle est diminuée de `diff_fifa`. Les buts sont générés en suivant une distribution normale centrée sur 3 buts, avec un écart type de 1, ajustée par la différence de classement FIFA.

#### Résultat du match :
Le match peut se terminer par une victoire d'une des équipes ou un match nul. La fonction calcule les scores finaux sans nécessiter de prolongation ou de tirs au but pour les matchs de phase de groupe.

#### Paramètres :
- `eq1` : Pointeur vers la première structure `t_equipe`, représentant l'une des équipes participant au match.
- `eq2` : Pointeur vers la seconde structure `t_equipe`, représentant l'autre équipe participant au match.

#### Type de retour :
- Renvoie une structure `t_buts` qui contient le nombre de buts marqués par chaque équipe pendant le match.

</div>

#### Exemple d'utilisation :
```c
t_equipe eq1 = {"FRA", "France", "UEFA", 'A', 1750}; // Exemple d'équipe 1
t_equipe eq2 = {"BRA", "Brésil", "CONMEBOL", 'B', 1822}; // Exemple d'équipe 2

Buts resultat = jouer_match(&eq1, &eq2);

printf("Résultat: %s %d - %d %s\n", eq1.nom, resultat.buts_eq1, resultat.buts_eq2, eq2.nom);
```


---



<div align="justify">

### Mettre à jour le classement (5 Points)

La fonction `mettre_a_jour_classement` joue un rôle crucial dans l'actualisation des statistiques des équipes à la suite d'un match dans le cadre de la simulation de la Coupe du Monde de la FIFA. Elle permet d'ajuster les données telles que le nombre de buts marqués et encaissés, ainsi que les points accumulés, en fonction des résultats des matchs, assurant ainsi que le classement reflète fidèlement les performances des équipes.

#### Fonctionnement :

- **Buts marqués et encaissés :** Les buts marqués durant le match sont ajoutés au total de buts pour et contre de chaque équipe, impactant directement leur différence de buts, un facteur déterminant pour le classement dans les phases de groupe.
- **Attribution des points :** Les points sont attribués en fonction du résultat du match (3 points pour une victoire, 1 point pour un nul, et 0 point pour une défaite), jouant un rôle essentiel dans le classement du groupe.
- **Mises à jour additionnelles :** Le nombre total de matchs joués, de victoires, de nuls, et de défaites est également mis à jour pour chaque équipe, offrant un aperçu complet de leur parcours dans le tournoi.

Ces mises à jour garantissent une gestion précise et à jour du classement des équipes, permettant une analyse plus approfondie de leurs performances.

#### Paramètres :
- `eq1` et `eq2` : Pointeurs vers les structures `t_equipe` représentant les deux équipes ayant participé au match.
- `but` : Une structure `t_buts` indiquant le nombre de buts marqués par chaque équipe.

#### Type de retour :
- Aucun. Les modifications sont appliquées directement aux structures `t_equipe` fournies en paramètres.

</div>



#### Exemple d'utilisation :
```c
// Initialisation des équipes
t_equipe eq1 = {"Eq1", "Equipe 1", 0, 0, 0, 0, 0, 0, 0, 0};
t_equipe eq2 = {"Eq2", "Equipe 2", 0, 0, 0, 0, 0, 0, 0, 0};

// Simulation d'un résultat de match
Buts resultat_match = {2, 1}; // L'équipe 1 marque 2 buts, l'équipe 2 marque 1 but

// Mise à jour des statistiques des équipes
mettre_a_jour_classement(&eq1, &eq2, resultat_match);

// Affichage des statistiques pour vérification
printf("Equipe 1 - Points: %d, Buts Pour: %d, Buts Contre: %d, Différence de Buts: %d\n", eq1.pts, eq1.buts_p, eq1.buts_c, eq1.diff_buts);
printf("Equipe 2 - Points: %d, Buts Pour: %d, Buts Contre: %d, Différence de Buts: %d\n", eq2.pts, eq2.buts_p, eq2.buts_c, eq2.diff_buts);
```


---



<div align="justify">

### Fonction pour échanger deux équipes (2.5 Points)

La fonction `echanger` permet de permuter les données de deux équipes au sein de simulations ou de traitements nécessitant la réorganisation des structures d'équipes. Cet échange est utile dans divers scénarios, tels que le tri des équipes selon leur classement, la mise à jour de leur positionnement dans un tableau, ou d'autres opérations de manipulation de données.

#### Fonctionnement :

La fonction réalise l'échange en copiant temporairement les données de la première équipe (`eq1`) dans une structure `t_equipe` intermédiaire, puis en copiant les données de la seconde équipe (`eq2`) dans la première équipe, et finalement en copiant les données de la structure temporaire dans la seconde équipe. Ce processus garantit que les données des deux équipes sont échangées de manière efficace et sûre, sans perte d'informations.

#### Paramètres :
- `eq1` et `eq2` : Pointeurs vers les structures `t_equipe` dont les données doivent être échangées.

#### Type de retour :
- Aucun. L'échange des données est effectué directement sur les structures passées en paramètres.

</div>


#### Exemple d'utilisation :
```c
t_equipe eq1 = {"Eq1", "Equipe 1", 0, 0, 0, 0, 0, 0, 0, 0};
t_equipe eq2 = {"Eq2", "Equipe 2", 0, 0, 0, 0, 0, 0, 0, 0};

// Avant l'échange
printf("Avant l'échange : Equipe 1 - %s, Equipe 2 - %s\n", eq1.nom, eq2.nom);

// Échange des équipes
echanger(&eq1, &eq2);

// Après l'échange
printf("Après l'échange : Equipe 1 - %s, Equipe 2 - %s\n", eq1.nom, eq2.nom);
```


---


<div align="justify">

### Trier les groupes (5 Points)

La fonction `trier_groupes` est essentielle dans le processus de simulation de la Coupe du Monde de Football, car elle organise les équipes de chaque groupe en fonction de leur performance. Le classement se base sur les critères officiels du tournoi, tels que les points accumulés, la différence de buts, et le nombre total de buts marqués, pour mettre en avant les équipes les plus performantes.

#### Fonctionnement :
- **Critères de classement :** Les équipes sont d'abord classées par points. En cas d'égalité, la différence de buts puis le nombre total de buts marqués sont utilisés pour départager les équipes.
- **Algorithme de tri :** Un algorithme de tri à bulles est employé pour ordonner les équipes selon ces critères, en effectuant des échanges successifs jusqu'à ce que le tableau soit entièrement trié.

#### Processus de tri :
- **Points :** Principal critère de classement. Les équipes avec le plus de points sont classées en premier.
- **Différence de buts :** Utilisée pour départager les équipes à égalité de points.
- **Buts marqués :** Critère final en cas d'égalité de points et de différence de buts.

#### Paramètres :
- `grp` : Pointeur vers le groupe d'équipes à trier. Ce groupe contient un tableau d'équipes avec leurs statistiques respectives.

#### Type de retour :
- Aucun. Le tri est effectué in situ, modifiant l'ordre des équipes directement dans le tableau fourni.

</div>

<p align="justify">
Voici une implémentation en pseudo-code :
</p>

<p align="center">
    <img src="./Images/Algo_3.svg">
</p>


#### Exemple d'utilisation :
```c
// Initialisation d'un groupe avec des données fictives
Groupe groupeA;
// Configuration initiale du groupe et allocation de la mémoire pour les équipes
// Initialisation des équipes avec des données fictives
groupeA.nom = 'A';
groupeA.cap = 4; // Capacité du tableau d'équipes
groupeA.nb_eqp = 4; // Nombre d'équipes réellement présentes
groupeA.eqp = (t_equipe*)malloc(groupeA.cap * sizeof(Equipe));
    
// Initialisation des équipes avec des données fictives
strcpy(groupeA.eqp[0].nom, "Equipe A1");
groupeA.eqp[0].pts = 6;
groupeA.eqp[0].buts_p = 8;
groupeA.eqp[0].buts_c = 4;

strcpy(groupeA.eqp[1].nom, "Equipe A2");
groupeA.eqp[1].pts = 6;
groupeA.eqp[1].buts_p = 10;
groupeA.eqp[1].buts_c = 5;

strcpy(groupeA.eqp[2].nom, "Equipe A3");
groupeA.eqp[2].pts = 4;
groupeA.eqp[2].buts_p = 5;
groupeA.eqp[2].buts_c = 5;

strcpy(groupeA.eqp[3].nom, "Equipe A4");
groupeA.eqp[3].pts = 2;
groupeA.eqp[3].buts_p = 3;
groupeA.eqp[3].buts_c = 7;

// Tri des équipes du groupe A selon leur performance
trier_groupes(&groupeA);

// Affichage du classement après tri
printf("Classement du Groupe A après tri :\n");
for (int i = 0; i < groupeA.nb_eqp; i++) {
    printf("%s - Points : %zu, Buts pour : %zu, Buts contre : %zu\n",
           groupeA.eqp[i].nom, groupeA.eqp[i].pts, groupeA.eqp[i].buts_p, groupeA.eqp[i].buts_c);
}

// Libération de la mémoire allouée pour les équipes
free(groupeA.eqp);
```



---


 
<div align="justify">

### Simuler les matchs (5 Points)

La fonction `simuler_matchs` est une composante clé de la simulation de la Coupe du Monde de Football Qatar 2022, permettant de simuler tous les matchs prévus dans le tournoi en se basant sur des données spécifiques telles que le classement FIFA et d'autres indicateurs de performance des équipes.

#### Fonctionnement :
- **Identification et confrontation des équipes :** Pour chaque match, les équipes sont identifiées grâce à leurs identifiants uniques. Elles sont ensuite confrontées via la fonction `jouer_match`, qui prend en compte le classement FIFA pour estimer les résultats possibles du match, tels que la victoire, le nul, ou la défaite.
- **Mise à jour des statistiques :** Après chaque match simulé, les statistiques des équipes, y compris les buts marqués et encaissés ainsi que les points gagnés, sont actualisées. Ces informations sont essentielles pour établir le classement des équipes dans leurs groupes respectifs.
- **Classement des équipes :** Une fois tous les matchs simulés, un tri est réalisé au sein de chaque groupe pour ordonner les équipes selon leurs performances, en utilisant des critères tels que les points accumulés, la différence de buts, et le total de buts marqués.

#### Paramètres :
- `wc` : Référence à la structure globale de la Coupe du Monde, comprenant les détails de chaque équipe et les groupes.
- `t_liste_matches` : Référence à une liste des matchs à simuler, incluant les identifiants des équipes.

#### Type de retour :
- Aucun. La fonction effectue les simulations et met à jour les structures concernées directement.

</div>


#### Exemple d'utilisation :
```c
t_wcup wc; // Supposons que wc a été préalablement initialisé avec les données des groupes et des équipes.
t_liste_matches liste_matches;

// Chargement des équipes et des matchs
lire_equipes("equipes2022.txt", &wc);
lire_matches("matchs2022.txt", &liste_matches);

// Simulation des matchs et mise à jour des classements
simuler_matchs(&wc, &liste_matches);

// Affichage du classement final des groupes
for (int i = 0; i < 8; i++) {
    printf("Classement final du Groupe %c:\n", wc.grp[i].nom);
    for (int j = 0; j < wc.grp[i].nb_eqp; j++) {
        printf("%d. %s - %zu points\n", j + 1, wc.grp[i].eqp[j].nom, wc.grp[i].eqp[j].pts);
    }
    printf("\n");
}

// Libération des ressources allouées
for (int i = 0; i < 8; i++) {
    free(wc.grp[i].eqp);
}
free(liste_matches.matches);
```

## 7.3 Partie 3: Gestion de la Phase Éliminatoire (Semaine 2-3: 30 Points)<a name="part3"></a>

<div align="justify">

### Équipes qualifiées (7.5 Points)

La fonction `equipes_qualifiees` identifie les équipes qui avancent aux phases éliminatoires de la Coupe du Monde de Football Qatar 2022, en se basant sur les résultats finaux de la phase de groupes. Cette étape est cruciale pour la transition du tournoi vers les huitièmes de finale, où les enjeux sont considérablement accrus.

#### Fonctionnement :
- **Critères de qualification :** Les deux meilleures équipes de chaque groupe sont sélectionnées selon leur nombre total de points. En cas d'égalité, la différence de buts, le nombre total de buts marqués, et les résultats des confrontations directes sont utilisés comme critères de départage.
- **Organisation pour les huitièmes de finale :** Les équipes qualifiées sont appariées pour les matchs des huitièmes de finale en fonction de leur position dans les groupes, assurant une progression équilibrée vers les phases suivantes du tournoi.

#### Paramètres :
- `wc` : Référence à la structure globale de la Coupe du Monde, contenant les détails des groupes et des équipes.

#### Type de retour :
- Aucun. Les équipes qualifiées sont directement intégrées dans la structure `t_wcup`, préparant le tableau pour les huitièmes de finale.

</div>


#### Exemple d'utilisation :
```c
t_wcup wc; // Supposons que wc a été préalablement initialisé avec les données des groupes et des équipes. 

// Identification des équipes qualifiées pour les phases éliminatoires
equipes_qualifiees(&wc);

// Les équipes qualifiées sont désormais prêtes pour les huitièmes de finale
```


---


<div align="justify">

### Jouer un match éliminatoire (7.5 Points)

La fonction `jouer_match_eliminatoire` simule un match éliminatoire entre deux équipes dans le cadre de la Coupe du Monde de Football, prenant en compte non seulement le score du match, mais également les mécanismes de décision en cas d'égalité, telle que la prolongation ou les tirs au but, pour déterminer l'équipe qui avance dans le tournoi.

#### Fonctionnement :
- **Calcul du score :** Utilise les classements FIFA des équipes pour simuler le résultat du match, ajustant les statistiques de buts marqués et encaissés en conséquence.
- **Mise à jour des statistiques :** Les statistiques des équipes, incluant les buts marqués, encaissés, et le nombre de matchs joués, sont actualisées suite au match.
- **Détermination du gagnant :** En cas de match nul à la fin du temps règlementaire, une décision aléatoire détermine le gagnant soit par une prolongation, soit par des tirs au but.

#### Paramètres :
- `eq1` et `eq2` : Pointeurs vers les structures `t_equipe` des équipes participant au match éliminatoire.

#### Type de retour :
- Retourne un pointeur vers l'équipe gagnante qui avance dans le tournoi.

</div>

<p align="justify">
Voici une implémentation en pseudo-code :
</p>

<p align="center">
    <img src="./Images/Algo_4.svg">
</p>


#### Exemple d'utilisation :
```c
t_equipe eq1; // Initialisée avec des données spécifiques
t_equipe eq2; // Initialisée avec des données spécifiques

t_equipe* equipe_gagnante = jouer_match_eliminatoire(&eq1, &eq2);

// Affichage de l'équipe gagnante
printf("L'équipe gagnante est : %s\n", equipe_gagnante->nom);
```


---


<div align="justify">

### Simuler un tour éliminatoire (7.5 Points)

La fonction `simuler_tour` joue un rôle crucial dans la progression des étapes éliminatoires de la Coupe du Monde de Football, en simulant chaque match d'un tour donné (huitièmes de finale, quarts de finale, demi-finales, et finale) et en préparant les confrontations pour le tour suivant, basées sur les équipes gagnantes.

#### Fonctionnement :
- **Simulation des matchs :** Pour chaque rencontre du tour actuel, les deux équipes sont confrontées via la fonction `jouer_match_eliminatoire`, qui détermine l'équipe gagnante en tenant compte des résultats du match, y compris les décisions en cas de match nul.
- **Préparation du prochain tour :** Les équipes gagnantes sont ensuite assignées au tour suivant, organisant les futures rencontres en fonction des résultats actuels.
- **Gestion de la finale :** Si le tour actuel est la finale, le gagnant est enregistré comme le vainqueur final du tournoi.

#### Paramètres :
- `wc` : Pointeur vers la structure globale de la Coupe du Monde, contenant les détails des tours éliminatoires.
- `tour_actuel` : Tableau contenant les rencontres du tour actuel.
- `nb_matchs` : Nombre de matchs dans le tour actuel.
- `prochain_tour` : Pointeur vers le tableau des rencontres du prochain tour, ou `NULL` si le tour actuel est la finale.

#### Type de retour :
- Aucun. Les résultats des matchs et les configurations des tours suivants sont mis à jour directement dans les structures fournies.

</div>


#### Exemple d'utilisation :
```c
t_wcup wc; // Supposons que wc a été préalablement initialisé avec les données des groupes et des équipes. 

// Simulation des huitièmes de finale
simuler_tour(&wc, wc.huitiemes, 8, wc.quarts);

// Après la simulation des huitièmes, les quarts sont prêts à être simulés, et ainsi de suite jusqu'à la finale
```


---


<div align="justify">

### Phase Éliminatoire (7.5 Points)

La fonction `tour_eliminatoires` orchestre la progression des tours éliminatoires dans la simulation de la Coupe du Monde de Football, depuis les huitièmes de finale jusqu'à la grande finale. Elle utilise la fonction `simuler_tour` pour simuler chaque tour, en s'appuyant sur les résultats pour déterminer les confrontations du tour suivant, jusqu'à couronner le champion du tournoi.

#### Fonctionnement :
- **Huitièmes de finale :** Le tournoi commence avec la simulation des huitièmes de finale, où les 16 équipes qualifiées sont confrontées pour déterminer les 8 qui avanceront.
- **Quarts de finale :** Les équipes victorieuses des huitièmes de finale sont ensuite engagées dans les quarts de finale, réduisant le nombre d'équipes à 4.
- **Demi-finales :** Les demi-finales déterminent les deux finalistes, ainsi que les équipes qui disputeront la troisième place.
- **Finale :** La simulation culmine avec la finale, où l'équipe gagnante est couronnée championne du monde.

#### Paramètres :
- `wc` : Pointeur vers la structure `t_wcup` contenant les détails des équipes et des tours éliminatoires.

#### Type de retour :
- Aucun. Le champion du tournoi est déterminé et enregistré dans la structure `t_wcup`.

</div>


#### Exemple d'utilisation :
```c
t_wcup wc; // Supposons que wc a été préalablement initialisé avec les données des groupes et des équipes. 

// Lancer la simulation des tours éliminatoires du tournoi
tour_eliminatoires(&wc);

// À la fin, wc contient le champion de la Coupe du Monde de Football.
```
## 7.4 Partie 4: Gestion des Statistiques Finales (Semaine 3: 27.5 Points)<a name="part4"></a>

<div align="justify">

### Afficher les Statistiques du Premier Tour (7.5 Points)

La fonction `afficher_stats_premier_tour` est dédiée à la présentation des statistiques détaillées de chaque équipe participant à la phase de groupes de la Coupe du Monde de Football, après que tous les matchs de cette phase ont été joués. Elle offre un aperçu complet des performances des équipes, incluant les victoires, défaites, nuls, buts pour et contre, la différence de buts, et les points accumulés, le tout organisé par groupe.

#### Fonctionnement :
- **Tri des équipes :** Avant l'affichage, les équipes de chaque groupe sont triées en fonction de leurs performances, assurant que les statistiques sont présentées de manière ordonnée et cohérente avec le classement final du groupe.
- **Présentation par groupe :** Les statistiques sont affichées groupe par groupe, avec un entête indiquant le nom du groupe suivi par les détails de chaque équipe.
- **Format des statistiques :** Pour chaque équipe, sont affichés le nom, le nombre de victoires (V), de défaites (D), de nuls (N), les buts pour (BP), les buts contre (BC), la différence de buts (DB), et le total des points (Pts).

#### Paramètres :
- `wc` : Pointeur vers la structure `t_wcup`, contenant les informations des groupes et des équipes de la Coupe du Monde.

#### Type de retour :
- Aucun. Les statistiques sont affichées directement sur la sortie standard.

</div>


#### Exemple d'utilisation :
```c
t_wcup wc; // Supposons que wc a été préalablement initialisé avec les données des groupes et des équipes. 

// Affichage des statistiques des équipes du premier tour, organisées par groupe
afficher_stats_premier_tour(&wc);
```


---


<div align="justify">

### Équipes avec le Plus de Buts Marqués (4 Points)

La fonction `equipes_plus_buts_marques` identifie les équipes ayant marqué le plus grand nombre de buts durant la phase de groupes de la Coupe du Monde de Football. Elle parcourt toutes les équipes participantes, compare leurs performances en termes de buts marqués, et sélectionne celles qui se distinguent par leur efficacité offensive.

#### Fonctionnement :
- **Analyse des performances :** La fonction examine les statistiques de buts marqués par chaque équipe au sein de leurs groupes respectifs, en se focalisant sur celles ayant le plus haut total de buts.
- **Sélection dynamique :** Les équipes répondant au critère de sélection sont ajoutées à un tableau dynamique, dont la capacité est ajustée au besoin pour accueillir toutes les équipes correspondantes.

#### Paramètres :
- `wc` : Pointeur vers la structure globale `t_wcup` contenant les détails des groupes et des équipes.
- `nb_equipes` : Pointeur vers une variable où le nombre d'équipes sélectionnées sera enregistré.

#### Type de retour :
- Retourne un tableau dynamique d'équipes ayant marqué le plus grand nombre de buts, ainsi que le nombre d'équipes dans ce tableau via le paramètre `nb_equipes`.

</div>

#### Exemple d'utilisation :
```c
t_wcup wc; // Supposons que wc a été préalablement initialisé avec les données des groupes et des équipes. 

int nb_equipes;
t_equipe* equipes_dominantes = equipes_plus_buts_marques(&wc, &nb_equipes);

// Affichage des équipes sélectionnées et de leurs buts marqués
for (int i = 0; i < nb_equipes; ++i) {
    printf("Equipe : %s, Buts marqués : %d\n", equipes_dominantes[i].nom, equipes_dominantes[i].buts_p);
}

// Libération de la mémoire allouée au tableau dynamique
free(equipes_dominantes);
```

---


<div align="justify">

### Équipes avec le Plus de Buts Encaissés (4 Points)

La fonction `equipes_plus_buts_encaisses` sert à identifier les équipes qui ont concédé le plus grand nombre de buts pendant la phase de groupes de la Coupe du Monde de Football. En parcourant les statistiques des équipes dans chaque groupe, cette fonction met en avant celles qui ont montré des vulnérabilités défensives en encaissant de nombreux buts.

#### Fonctionnement :
- **Évaluation des performances défensives :** La fonction examine le nombre de buts encaissés par chaque équipe, sélectionnant celles qui ont laissé passer le plus de buts.
- **Sélection et allocation dynamique :** Les équipes correspondant au critère sont ajoutées à un tableau dynamique, dont la taille est ajustée selon le nombre d'équipes répondant au critère.

#### Paramètres :
- `wc` : Pointeur vers la structure globale `t_wcup`, qui contient les informations sur les groupes et les équipes.
- `nb_equipes` : Pointeur vers une variable destinée à stocker le nombre d'équipes identifiées selon le critère de sélection.

#### Type de retour :
- Retourne un tableau dynamique contenant les équipes ayant encaissé le plus de buts, et le nombre d'équipes dans ce tableau est retourné via le paramètre `nb_equipes`.

</div>

#### Exemple d'utilisation :
```c
t_wcup wc; // Supposons que wc a été préalablement initialisé avec les données des groupes et des équipes. 

int nb_equipes;
t_equipe* equipes_vulnerables = equipes_plus_buts_encaisses(&wc, &nb_equipes);

// Affichage des équipes ayant encaissé le plus de buts
for (int i = 0; i < nb_equipes; ++i) {
    printf("Equipe : %s, Buts encaissés : %d\n", equipes_vulnerables[i].nom, equipes_vulnerables[i].buts_c);
}

// Libération de la mémoire allouée pour le tableau dynamique
free(equipes_vulnerables);
```

---

<div align="justify">
  
### Équipes avec le Plus de Victoires (4 Points)

La fonction `equipes_plus_victoires` extrait les équipes ayant enregistré le plus grand nombre de victoires durant la phase de groupes de la Coupe du Monde de Football. Cette approche permet de mettre en évidence les performances dominantes en termes de résultats positifs obtenus par les équipes tout au long du tournoi.

#### Fonctionnement :
- **Analyse des victoires :** Parcourt tous les groupes et équipes, identifiant celles avec le nombre le plus élevé de victoires.
- **Sélection et allocation dynamique :** Les équipes sélectionnées sont stockées dans un tableau dynamique, dont la taille est ajustée selon le nombre d'équipes répondant au critère de sélection.

#### Paramètres :
- `wc` : Pointeur vers la structure `t_wcup`, contenant les informations détaillées des équipes et des groupes.
- `nb_equipes` : Pointeur vers une variable où sera stocké le nombre d'équipes répondant au critère de sélection.

#### Type de retour :
- Retourne un tableau dynamique contenant les équipes ayant le plus de victoires, ainsi que le nombre d'équipes dans ce tableau via le paramètre `nb_equipes`.

</div>

#### Exemple d'utilisation :
```c
t_wcup wc; // Supposons que wc a été préalablement initialisé avec les données des groupes et des équipes. 

int nb_equipes;
t_equipe* equipes_dominantes = equipes_plus_victoires(&wc, &nb_equipes);

// Affichage des équipes avec le plus de victoires
for (int i = 0; i < nb_equipes; ++i) {
    printf("Equipe : %s, Victoires : %d\n", equipes_dominantes[i].nom, equipes_dominantes[i].vic);
}

// Libération de la mémoire allouée au tableau dynamique
free(equipes_dominantes);
```

---

<div align="justify">

### Équipes avec le Plus de Défaites (4 Points)

La fonction `equipes_plus_defaites` identifie les équipes ayant subi le plus grand nombre de défaites durant la phase de groupes de la Coupe du Monde de Football. Cette analyse permet de reconnaître les équipes qui ont eu des difficultés tout au long du tournoi, en mettant en lumière les défis auxquels elles ont été confrontées.

#### Fonctionnement :
- **Sélection basée sur les défaites :** Examine toutes les équipes participantes, identifiant celles qui ont enregistré le plus grand nombre de défaites.
- **Allocation dynamique :** Les équipes répondant au critère sont ajoutées à un tableau dynamique. La capacité de ce tableau est ajustée au besoin pour accueillir toutes les équipes concernées.

#### Paramètres :
- `wc` : Pointeur vers la structure `t_wcup`, contenant les détails des équipes et des groupes.
- `nb_equipes` : Pointeur vers une variable qui stockera le nombre d'équipes sélectionnées.

#### Type de retour :
- Un tableau dynamique d'équipes ayant le plus grand nombre de défaites, ainsi que le nombre d'équipes correspondantes, est retourné via le paramètre `nb_equipes`.

</div>

#### Exemple d'utilisation :
```c
t_wcup wc; // Supposons que wc a été préalablement initialisé avec les données des groupes et des équipes. 


int nb_equipes;
t_equipe* equipes_avec_defaites = equipes_plus_defaites(&wc, &nb_equipes);

// Affichage des équipes ayant le plus de défaites
for (int i = 0; i < nb_equipes; ++i) {
    printf("Equipe : %s, Défaites : %d\n", equipes_avec_defaites[i].nom, equipes_avec_defaites[i].def);
}

// Libération de la mémoire allouée pour le tableau dynamique
free(equipes_avec_defaites);
```

---

<div align="justify">
  
### Équipes avec le Plus de Matchs Nuls (4 Points)

La fonction `equipes_plus_matchs_nuls` cible les équipes ayant concédé le plus grand nombre de matchs nuls durant la phase de groupes de la Coupe du Monde de Football. Cette analyse révèle les équipes qui ont montré une résilience défensive ou qui ont été impliquées dans des confrontations très serrées, aboutissant à des issues indécises.

#### Fonctionnement :
- **Identification des matchs nuls :** Parcourt tous les groupes pour identifier les équipes ayant le plus de matchs nuls, soulignant leur capacité à résister à la défaite dans des situations compétitives.
- **Gestion dynamique du tableau :** Les équipes sélectionnées sont stockées dans un tableau dynamique, dont la taille est adaptée pour accueillir le nombre variable d'équipes répondant aux critères de sélection.

#### Paramètres :
- `wc` : Pointeur vers la structure `t_wcup`, englobant les informations détaillées sur les équipes et les groupes du tournoi.
- `nb_equipes` : Pointeur vers une variable qui sera utilisée pour stocker le nombre d'équipes ayant le plus grand nombre de matchs nuls.

#### Type de retour :
- Retourne un tableau dynamique contenant les équipes avec le plus grand nombre de matchs nuls et le nombre total d'équipes correspondantes via le paramètre `nb_equipes`.

</div>

#### Exemple d'utilisation :
```c
t_wcup wc; // Supposons que wc a été préalablement initialisé avec les données des groupes et des équipes.

int nb_equipes;
t_equipe* equipes_max_nuls = equipes_plus_matchs_nuls(&wc, &nb_equipes);

// Affichage des équipes ayant concédé le plus de matchs nuls
for (int i = 0; i < nb_equipes; ++i) {
    printf("Equipe : %s, Matchs Nuls : %d\n", equipes_max_nuls[i].nom, equipes_max_nuls[i].nul);
}

// Libération de la mémoire allouée au tableau dynamique
free(equipes_max_nuls);
```



# 8. Barème /100 <a name="bareme"></a>

La répartition des points pour l'évaluation de ce projet est détaillée ci-dessous. 

|**Nom des fonctions**|**Nombre de points attribuer**|
| :- | :- |
|*lire_equipes*| 7.5 |
|*lire_matches*| 3 |
|*afficher_groupe*| 5 |
|*afficher_t_match| 2 |
|*trouver_equipe_par_id*| 2.5 |
|*normalvariate*| 2.5 |
|*jouer_t_match| 2.5 |
|*mettre_a_jour_classement*| 5 |
|*echanger*| 2.5 |
|*trier_groupes*| 5 |
|*simuler_matchs*| 5 |
|*equipes_qualifiees*| 7.5 |
|*jouer_match_eliminatoire*| 7.5 |
|*simuler_tour*| 7.5 |
|*tour_eliminatoires*| 7.5 |
|*afficher_stats_premier_tour*| 7.5 |
|*equipes_plus_buts_marques*| 4 |
|*equipes_plus_buts_encaisses*| 4 |
|*equipes_plus_victoires*|4  |
|*equipes_plus_defaites*| 4 |
|*equipes_plus_matchs_nuls*| 4 |


La grille de correction suivante sera utilisée pour la correction de chacune des fonctions implémentées.

| Élément de correction | Explication | Pondération |
|---------|---------|---------|
| Structure du Programme | Utilisation adéquate de la structure, inclusion des bibliothèques nécessaires | 5% |
| Utilisation des Éléments de Langage | Déclarations de fonctions, structures conditionnelles et répétitives | 20%|
| Algorithme | Pertinence de l'algorithme par rapport aux exigences | 20% |
| Normes et Standards Enseignés | Commentaires, nommage des variables | 5%|
| Pénalités | Problèmes de compilation, problèmes de fonctionnement du programme | -50%|
