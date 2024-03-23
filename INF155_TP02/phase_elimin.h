#ifndef INF155_TP02_PHASE_ELIMIN_H
#define INF155_TP02_PHASE_ELIMIN_H

#include "sim_phase_grp.h"

void equipes_qualifiees(t_wcup *wc);
t_equipe* jouer_match_eliminatoire(t_equipe *eq1, t_equipe *eq2);
void simuler_tour(t_wcup *wc, t_eliminatoire *tour_actuel, int nb_matchs, t_eliminatoire *prochain_tour) ;
void tour_eliminatoires(t_wcup *wc);

void test_equipes_qualifiees();
void test_jouer_match_eliminatoire();
void test_simuler_tour() ;
void test_tour_eliminatoires();

#endif //INF155_TP02_PHASE_ELIMIN_H
