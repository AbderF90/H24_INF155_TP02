

void test_trouver_equipe_par_id() {
    // Initialisation de la structure t_wcup pour les tests
    t_wcup wc = {0};

    lire_equipes(NOM_FICHIER_EQUIPES, &wc); // Chemin vers votre fichier de données



    // Test avec un ID existant
    t_equipe* equipe = trouver_equipe_par_id(&wc, "MAR");
    assert(equipe != nullptr && "L'équipe avec l'ID_EXISTANT doit exister.");

    // Test avec un ID inexistant
    equipe = trouver_equipe_par_id(&wc, "ALG");
    assert(equipe == nullptr && "Aucune équipe ne doit correspondre à l'ID_INEXISTANT.");

    // Libération de la mémoire allouée
    for (int i = 0; i < 8; ++i) {
        free(wc.grp[i].eqp);
    }

    printf("Tous les tests sont passés avec succès.\n");
}


void test_normalvariate(){
    for(int i = 0; i < 10000; i++) {
        int result = normalvariate(3, 1); // Utilisation de valeurs typiques pour mu et sigma
        assert(result >= 0 && result <= 6); // Vérification que le résultat est dans l'intervalle [0, 6]
    }

    printf("Tous les tests sont passés avec succès.\n");
}


void test_jouer_match() {
    t_equipe eq1 = {"ID1", "Equipe1", "UEFA", 'A', 0, 0, 0, 0, 0, 0, 1500, 0, 0};
    t_equipe eq2 = {"ID2", "Equipe2", "CONMEBOL", 'A', 0, 0, 0, 0, 0, 0, 1400, 0, 0};

    for(int i = 0; i < 1000; i++){
        t_buts resultat = jouer_match(&eq1, &eq2);

        // Vérifier que le score est non négatif
        assert(resultat.buts_eq1 >= 0);
        assert(resultat.buts_eq2 >= 0);
    }

    printf("Tous les tests sont passés avec succès.\n");
}


void test_mettre_a_jour_classement() {
    t_equipe eq1 = {"ID1", "Equipe1", "UEFA", 'A', 0, 0, 0, 0, 0, 0, 0, 1, 0}; // Initialisation d'une équipe avec des valeurs fictives
    t_equipe eq2 = {"ID2", "Equipe2", "CONMEBOL", 'B', 0, 0, 0, 0, 0, 0, 0, 2, 0}; // Initialisation d'une autre équipe avec des valeurs fictives
    t_buts resultat_match = {2, 1}; // Résultat fictif du match où eq1 marque 2 buts et eq2 marque 1 but

    mettre_a_jour_classement(&eq1, &eq2, resultat_match);

    // Assertions pour vérifier les mises à jour des statistiques
    assert(eq1.buts_p == 2);
    assert(eq1.buts_c == 1);
    assert(eq1.diff_buts == 1);
    assert(eq1.vic == 1);
    assert(eq1.pts == 3);
    assert(eq1.matche_jouer == 1);

    assert(eq2.buts_p == 1);
    assert(eq2.buts_c == 2);
    assert(eq2.diff_buts == -1);
    assert(eq2.def == 1);
    assert(eq2.pts == 0);
    assert(eq2.matche_jouer == 1);

    printf("Tous les tests sont passés avec succès.\n");
}


void test_echanger() {
    t_equipe equipeA = {"ID_A", "Equipe A", "UEFA", 'A', 1, 0, 0, 10, 0, 0, 3, 1110, 1};
    t_equipe equipeB = {"ID_B", "Equipe B", "CONMEBOL", 'B', 0, 1, 0, 0, 5, 0, 1, 1120, 1};

    // Sauvegarde des valeurs initiales pour comparaison après échange
    t_equipe equipeA_init = equipeA;
    t_equipe equipeB_init = equipeB;

    // Échange des données entre equipeA et equipeB
    echanger(&equipeA, &equipeB);

    // Assertions pour vérifier que les données ont été correctement échangées
    assert(strcmp(equipeA.id, equipeB_init.id) == 0);
    assert(strcmp(equipeA.nom, equipeB_init.nom) == 0);
    assert(strcmp(equipeA.conf, equipeB_init.conf) == 0);
    assert(equipeA.groupe == equipeB_init.groupe);
    assert(equipeA.vic == equipeB_init.vic);
    assert(equipeA.def == equipeB_init.def);
    assert(equipeA.buts_p == equipeB_init.buts_p);
    assert(equipeA.vic == equipeB_init.vic);
    assert(equipeA.pts == equipeB_init.pts);

    assert(strcmp(equipeB.id, equipeA_init.id) == 0);
    assert(strcmp(equipeB.nom, equipeA_init.nom) == 0);
    assert(strcmp(equipeB.conf, equipeA_init.conf) == 0);
    assert(equipeB.groupe == equipeA_init.groupe);
    assert(equipeB.vic    == equipeA_init.vic);
    assert(equipeB.def    == equipeA_init.def);
    assert(equipeB.buts_p == equipeA_init.buts_p);
    assert(equipeB.vic    == equipeA_init.vic);
    assert(equipeB.pts    == equipeA_init.pts);

    printf("Tous les tests sont passés avec succès.\n");
}


// Test de la fonction trier_groupes
void test_trier_groupes() {
    t_groupe groupeTest;
    groupeTest.nb_eqp = 4; // Nombre d'équipes dans le groupe
    groupeTest.eqp = (t_equipe*)malloc(groupeTest.nb_eqp * sizeof(t_equipe));

    // Initialisation des équipes avec des statistiques pour couvrir tous les cas de tri
    groupeTest.eqp[0] = (t_equipe){"ID1", "Equipe1", "UEFA", 'A', 0, 1, 1, 3, 4, -1, 1, 3, 3}; // Moins de points
    groupeTest.eqp[1] = (t_equipe){"ID2", "Equipe2", "CONMEBOL", 'A', 3, 0, 0, 5, 2, 3, 9, 1, 3}; // Plus de points
    groupeTest.eqp[2] = (t_equipe){"ID3", "Equipe3", "AFC", 'A', 1, 1, 1, 4, 4, 0, 4, 2, 3}; // Egalité de points et différence de buts, mais moins de buts pour
    groupeTest.eqp[3] = (t_equipe){"ID4", "Equipe4", "CAF", 'A', 1, 1, 1, 5, 5, 0, 4, 2, 3}; // Egalité de points et différence de buts, mais plus de buts pour

    // Tri des équipes dans le groupe
    trier_groupes(&groupeTest);

    // Vérification de l'ordre après le tri
    assert(strcmp(groupeTest.eqp[0].id, "ID2") == 0); // L'équipe avec le plus de points doit être première
    assert(strcmp(groupeTest.eqp[1].id, "ID4") == 0); // L'équipe avec plus de buts pour en cas d'égalité de points et de différence de buts
    assert(strcmp(groupeTest.eqp[2].id, "ID3") == 0); // L'équipe avec moins de buts pour en cas d'égalité de points et de différence de buts
    assert(strcmp(groupeTest.eqp[3].id, "ID1") == 0); // L'équipe avec le moins de points doit être dernière

    printf("Tous les tests sont passés avec succès.\n");
    free(groupeTest.eqp);
}


void test_simuler_matchs(){
    // Initialisation de la structure t_wcup pour les tests
    t_wcup wc = {0};
    t_liste_matches liste_matches = {0};

    lire_equipes(NOM_FICHIER_EQUIPES, &wc); // Chemin vers votre fichier de données
    lire_matches(NOM_FICHIER_MATCHES, &liste_matches);

    // Appel de la fonction de simulation
    simuler_matchs(&wc, &liste_matches);

    for(int i = 0; i < 8; i++){
        for (int j = 0; j < 4; j++){
            if( j < 2){
                assert(strcmp(wc.grp[i].eqp[j].id, "SEN") == 0 ||
                       strcmp(wc.grp[i].eqp[j].id, "ECU") == 0 ||
                       strcmp(wc.grp[i].eqp[j].id, "USA") == 0 ||
                       strcmp(wc.grp[i].eqp[j].id, "IRN") == 0 ||
                       strcmp(wc.grp[i].eqp[j].id, "MEX") == 0 ||
                       strcmp(wc.grp[i].eqp[j].id, "SAU") == 0 ||
                       strcmp(wc.grp[i].eqp[j].id, "DEN") == 0 ||
                       strcmp(wc.grp[i].eqp[j].id, "AUS") == 0 ||
                       strcmp(wc.grp[i].eqp[j].id, "GER") == 0 ||
                       strcmp(wc.grp[i].eqp[j].id, "CRC") == 0 ||
                       strcmp(wc.grp[i].eqp[j].id, "MAR") == 0 ||
                       strcmp(wc.grp[i].eqp[j].id, "CAN") == 0 ||
                       strcmp(wc.grp[i].eqp[j].id, "SRB") == 0 ||
                       strcmp(wc.grp[i].eqp[j].id, "SUI") == 0 ||
                       strcmp(wc.grp[i].eqp[j].id, "GHA") == 0 ||
                       strcmp(wc.grp[i].eqp[j].id, "URU") == 0);
                assert(wc.grp[i].eqp[j].pts == 6);
                assert(wc.grp[i].eqp[j].vic == 2);
                assert(wc.grp[i].eqp[j].def == 1);
                assert(wc.grp[i].eqp[j].buts_p == 5);
                assert(wc.grp[i].eqp[j].buts_c == 4);
                assert(wc.grp[i].eqp[j].diff_buts == 1);
            }
            else{
                assert(strcmp(wc.grp[i].eqp[j].id, "NED") == 0 ||
                        strcmp(wc.grp[i].eqp[j].id, "QAT") == 0 ||
                        strcmp(wc.grp[i].eqp[j].id, "ENG") == 0 ||
                        strcmp(wc.grp[i].eqp[j].id, "WAL") == 0 ||
                        strcmp(wc.grp[i].eqp[j].id, "POL") == 0 ||
                        strcmp(wc.grp[i].eqp[j].id, "ARG") == 0 ||
                        strcmp(wc.grp[i].eqp[j].id, "FRA") == 0 ||
                        strcmp(wc.grp[i].eqp[j].id, "TUN") == 0 ||
                        strcmp(wc.grp[i].eqp[j].id, "ESP") == 0 ||
                        strcmp(wc.grp[i].eqp[j].id, "JPN") == 0 ||
                        strcmp(wc.grp[i].eqp[j].id, "BEL") == 0 ||
                        strcmp(wc.grp[i].eqp[j].id, "CRO") == 0||
                        strcmp(wc.grp[i].eqp[j].id, "CMR") == 0 ||
                        strcmp(wc.grp[i].eqp[j].id, "BRA") == 0 ||
                        strcmp(wc.grp[i].eqp[j].id, "POR") == 0||
                        strcmp(wc.grp[i].eqp[j].id, "KOR") == 0);
                assert(wc.grp[i].eqp[j].pts == 3);
                assert(wc.grp[i].eqp[j].vic == 1);
                assert(wc.grp[i].eqp[j].def == 2);
                assert(wc.grp[i].eqp[j].buts_p == 4);
                assert(wc.grp[i].eqp[j].buts_c == 5);
                assert(wc.grp[i].eqp[j].diff_buts == -1);
            }
        }
    }
    printf("Tous les tests sont passés avec succès.\n");

    // Libération de la mémoire allouée
    for (int i = 0; i < 8; ++i) {
        free(wc.grp[i].eqp);
    }
    free(liste_matches.matches);
}
