#ifndef INF155_TP02_SIM_PHASE_GRP_H
#define INF155_TP02_SIM_PHASE_GRP_H

#include "lecture_fichiers.h"

t_equipe* trouver_equipe_par_id(t_wcup* wc, const char* id);
int normalvariate(double mu, double sigma);
t_buts jouer_match(t_equipe *eq1, t_equipe *eq2);
void mettre_a_jour_classement(t_equipe *eq1, t_equipe *eq2, t_buts but);
void echanger(t_equipe *a, t_equipe *b) ;
void trier_groupes(t_groupe *grp);
void simuler_matchs(t_wcup *wc, t_liste_matches *liste_matches);

void test_trouver_equipe_par_id();
void test_normalvariate();
void test_jouer_match();
void test_mettre_a_jour_classement();
void test_echanger();
void test_trier_groupes();
void test_simuler_matchs();

#endif //INF155_TP02_SIM_PHASE_GRP_H
