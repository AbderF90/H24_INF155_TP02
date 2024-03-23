#ifndef INF155_TP02_STAT_FINALES_H
#define INF155_TP02_STAT_FINALES_H

#include "phase_elimin.h"

void afficher_stats_premier_tour(t_wcup *wc);
t_equipe* equipes_plus_buts_marques(t_wcup *wc, int *nb_equipes);
t_equipe* equipes_plus_buts_encaisses(t_wcup *wc, int *nb_equipes);
t_equipe* equipes_plus_victoires(t_wcup *wc, int *nb_equipes);
t_equipe* equipes_plus_defaites(t_wcup *wc, int *nb_equipes);
t_equipe* equipes_plus_matchs_nuls(t_wcup *wc, int *nb_equipes);

void test_stat();

#endif //INF155_TP02_STAT_FINALES_H
