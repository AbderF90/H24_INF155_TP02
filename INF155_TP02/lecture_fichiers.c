#include "lecture_fichiers.h"


//Fonction lire_equipes qui permet de lire le fichier equipes2022.txt
void lire_equipes(const char* nom_fichier, t_wcup* wc){

    FILE *fichier; //déclaration d'un pointeur "fichier"
    //ouverture du fichier en mode lecture
    fichier = fopen(nom_fichier, "r");

    //condition si le fichier n'existe pas
    if (!fichier) {
        //message d'erreur
        printf("Erreur! le fichier ne peut s'ouvrir.\n");
        return;
    }

    char tab[200]; //déclaration d'un tableau pour stocker les lignes lues du fichier
    int totalEqpLues = 0; //déclaration d'un compteur pour le nombre d'équipes total lues

    //boucle pour lire les lignes du fichier
    while (fgets(tab, 200, fichier)) {

        int nb_equipes; //stockage nombre d'équipes à lire pour chaque confédération
        char confederation[50]; //stockage nom de confédération

        //condition pour lire les caractère d'une ligne jusqu'a un saut de ligne
        if (sscanf(tab, "%d %[^\n]", &nb_equipes, confederation) == 2) {

            //boucle d'itèration de 0 jusqu'au nombre d'éequipe dans une confédération
            for (int i = 0; i < nb_equipes; ++i) {
                t_equipe equipe; //srockage des informations de l'équipe

                //lecture des du nom, du id, de la classification et du groupe d'une équipe à partir du fichier
                if(fscanf(fichier, "%s %s %d %c", equipe.nom, equipe.id, &equipe.clas,
                          &equipe.groupe) == 4) {

                    //calcul l'index du groupe en soustrayant 'A'(65) du groupe de l'équipe
                    int index_grp = equipe.groupe - 'A';
                    //utilisation de l'index pour accéder au tableau de groupe dans la structure wc
                    t_groupe *groupe = &wc->grp[index_grp];

                    //condition qui vérifie si le groupe est plein et si besoin de redimensionner
                    if (groupe->nb_eqp == groupe->cap) {

                        //si la capacité actuelle est à zero, initialiser à 1, sinon doubler la capacité
                        int nv_capacite = groupe->cap == 0 ? 1 : groupe->cap *2;
                        t_equipe *nouvelles_eqp = realloc(groupe->eqp, nv_capacite *sizeof(t_equipe));

                        //condition qui vérifie si l'allocation est réussie.
                        if(!nouvelles_eqp){
                            //message d'erreur
                            printf("Erreur lors de l'allocation de la memoire!\n");
                            fclose(fichier);//fermeture fichier
                            return;
                        }
                        // pointeur vers le nouvel emplcaement en mémoire du tableau
                        groupe->eqp = nouvelles_eqp;
                        //nouvelle capacité du tableau d'équipes
                        groupe->cap = nv_capacite;
                    }
                    //ajout de l'équipe au groupe
                    groupe->eqp[groupe->nb_eqp++]=equipe;
                    totalEqpLues ++; //ajoute 1 au compteur de nombre d'équipes total
                }
            }
        }
    }

    fclose(fichier); //fermeture fichier

    //condition qui vérifie s'il y a bien 32 équipes au total
    if (totalEqpLues != 32){
        //affichage de message d'erreur
        printf("Erreur ! Le nombre totoal d'equipes lues n'est pas egale a 32.\n");
    }
}


void test_lire_equipes() {
    t_wcup wc = {0}; // Initialiser la structure t_wcup
    lire_equipes(NOM_FICHIER_EQUIPES, &wc); // Chemin vers votre fichier de données

    // Assertions de test
    // Vérifiez que le nombre total d'équipes lues correspond au nombre attendu
    int totalEquipes = 0;
    for (int i = 0; i < 8; ++i) { // En supposant qu'il y a 8 groupes
        totalEquipes += wc.grp[i].nb_eqp;
    }
    assert(totalEquipes == 32); // En supposant 32 équipes au total dans tous les groupes

    // Exemple d'autres assertions
    // Vérifiez qu'une équipe spécifique est correctement placée dans son groupe avec les détails corrects
    // Cela pourrait être étendu en fonction des données connues de votre fichier
    t_groupe test_groupe = wc.grp[0]; // Exemple : Groupe A
    int trouve = 0;
    for (int i = 0; i < test_groupe.nb_eqp; ++i) {
        if (strcmp(test_groupe.eqp[i].nom, "Qatar") == 0 &&
            strcmp(test_groupe.eqp[i].id, "QAT") == 0 &&
            test_groupe.eqp[i].clas == 1439 &&
            test_groupe.eqp[i].groupe == 'A') {
            trouve = 1;
            break;
        }
    }
    assert(trouve == 1); // Assurez-vous que le Qatar est correctement placé dans le Groupe A avec les détails corrects

    // Libération de la mémoire allouée
    for (int i = 0; i < 8; ++i) {
        free(wc.grp[i].eqp);
    }

    printf("Tous les tests sont passés avec succès.\n");
}

void test_lire_matches() {
    t_liste_matches liste_matches;
    lire_matches(NOM_FICHIER_MATCHES, &liste_matches);

    // Tester si le nombre de matchs lus est égal au nombre attendu dans le fichier
    assert(liste_matches.nb_matche == 48);

    // Tester si le premier et le dernier match ont été lus correctement
    assert(strcmp(liste_matches.matches[0].id_dom, "QAT") == 0);
    assert(strcmp(liste_matches.matches[0].id_vis, "ECU") == 0);
    assert(strcmp(liste_matches.matches[47].id_dom, "KOR") == 0);
    assert(strcmp(liste_matches.matches[47].id_vis, "POR") == 0);

    // Libérer la mémoire allouée pour la liste des matchs
    free(liste_matches.matches);

    printf("Tous les tests sont passés avec succès.\n");
}
