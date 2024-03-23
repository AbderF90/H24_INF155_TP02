#ifndef INF155_TP02_STRUCTURES_H
#define INF155_TP02_STRUCTURES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <assert.h>

#define NOM_FICHIER_EQUIPES "..//equipes2022.txt"
#define NOM_FICHIER_MATCHES "..//matchs2022.txt"


typedef struct {
    char id[10];
    char nom[20];
    char conf[20];
    char groupe;
    int vic, def, nul;
    int buts_p, buts_c, diff_buts;
    int pts, clas, matche_jouer;
}t_equipe;

typedef struct {
    char nom;
    t_equipe* eqp;
    int nb_eqp;
    int cap;
} t_groupe;

typedef struct {
    int buts_eq1, buts_eq2;
}t_buts;

typedef struct {
    t_equipe rencontre[2];
}t_eliminatoire;

typedef struct {
    t_groupe grp[8];
    t_eliminatoire tour_16[8];
    t_eliminatoire tour_8[4];
    t_eliminatoire tour_4[2];
    t_eliminatoire finale;
}t_wcup;

typedef struct {
    char id_vis[10], id_dom[10];
    int clas_vis, clas_dom;
    int buts_eq1, buts_eq2;
    int pts_vis, pts_dom;
}t_matche;

typedef struct {
    t_matche* matches;
    int nb_matche;
    int cap;
}t_liste_matches;

#endif //INF155_TP02_STRUCTURES_H
