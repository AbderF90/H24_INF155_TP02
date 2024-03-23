

void test_equipes_qualifiees(){
    // Initialisation de la structure t_wcup pour les tests
    t_wcup wc = {0};
    t_liste_matches liste_matches = {0};

    lire_equipes(NOM_FICHIER_EQUIPES, &wc); // Chemin vers votre fichier de données
    lire_matches(NOM_FICHIER_MATCHES, &liste_matches);

    // Appel de la fonction de simulation
    simuler_matchs(&wc, &liste_matches);

    equipes_qualifiees(&wc);

    const char* ids_qualifies[] = {"SEN", "ECU", "USA", "IRN", "MEX", "SAU", "DEN", "AUS", "GER", "CRC", "MAR", "CAN", "SRB", "SUI", "GHA", "URU"};
    const int nb_ids = sizeof(ids_qualifies) / sizeof(ids_qualifies[0]);
    int trouve;

    for(int i = 0; i < 8; i++){
        trouve = 0;
        t_equipe eq1 = wc.tour_16[i].rencontre[0];
        t_equipe eq2 = wc.tour_16[i].rencontre[1];
        for (int j = 0; j < nb_ids; j++) {
            if (strcmp(eq1.id, ids_qualifies[j]) == 0 || strcmp(eq2.id, ids_qualifies[j]) == 0) {
                trouve = 1;
                break; // Arrête la boucle interne dès qu'une correspondance est trouvée
            }
        }
        assert(trouve); // Vérifie qu'au moins une des équipes qualifiées est dans la liste des identifiants

        // Vérification des statistiques pour la première équipe de chaque rencontre
        assert(eq1.pts == 6);
        assert(eq1.vic == 2);
        assert(eq1.def == 1);
        assert(eq1.buts_p == 5);
        assert(eq1.buts_c == 4);
        assert(eq1.diff_buts == 1);
    }
    printf("Tous les tests sont passés avec succès.\n");

    // Libération de la mémoire allouée
    for (int i = 0; i < 8; ++i) {
        free(wc.grp[i].eqp);
    }
    free(liste_matches.matches);
}

void test_simuler_tour() {
    // Initialisation de la structure t_wcup pour les tests
    t_wcup wc = {0};
    t_liste_matches liste_matches = {0};

    lire_equipes(NOM_FICHIER_EQUIPES, &wc); // Chemin vers votre fichier de données
    lire_matches(NOM_FICHIER_MATCHES, &liste_matches);

    // Appel de la fonction de simulation
    simuler_matchs(&wc, &liste_matches);

    equipes_qualifiees(&wc);

    simuler_tour(&wc, wc.tour_16, 8, wc.tour_8);

    // Définition des ID des équipes attendues dans le tour des 8
    const char* ids_attendus[] = {"SEN", "USA", "MEX", "DEN", "GER", "MAR", "SRB", "GHA"};
    int ids_attendus_count = sizeof(ids_attendus) / sizeof(ids_attendus[0]);

    for (int i = 0; i < 4; i++) {
        int id_trouve = 0;
        for (int j = 0; j < ids_attendus_count; j++) {
            if (strcmp(wc.tour_8[i].rencontre[0].id, ids_attendus[j]) == 0 ||
                strcmp(wc.tour_8[i].rencontre[1].id, ids_attendus[j]) == 0) {
                id_trouve = 1;
                break;
            }
        }
        assert(id_trouve); // Vérifie que l'ID de l'équipe est trouvé parmi les IDs attendus

        // Vérification des statistiques pour le premier participant de chaque rencontre
        t_equipe eq = wc.tour_8[i].rencontre[0];
        assert(eq.pts == 6);
        assert(eq.vic == 3);
        assert(eq.def == 1);
        assert(eq.buts_p == 7);
        assert(eq.buts_c == 5);
        assert(eq.diff_buts == 2);
    }
    printf("Tous les tests sont passés avec succès.\n");

    // Libération de la mémoire allouée
    for (int i = 0; i < 8; ++i) {
        free(wc.grp[i].eqp);
    }
    free(liste_matches.matches);
}

void test_tour_eliminatoires(){
    // Initialisation de la structure t_wcup pour les tests
    t_wcup wc = {0};
    t_liste_matches liste_matches = {0};

    lire_equipes(NOM_FICHIER_EQUIPES, &wc); // Chemin vers votre fichier de données
    lire_matches(NOM_FICHIER_MATCHES, &liste_matches);

    // Appel de la fonction de simulation
    simuler_matchs(&wc, &liste_matches);

    equipes_qualifiees(&wc) ;

    tour_eliminatoires(&wc);

    assert(strcmp(wc.finale.rencontre[0].id, "SEN") == 0 || strcmp(wc.finale.rencontre[0].id, "GER") == 0);
    assert(wc.finale.rencontre[0].pts == 6);
    assert(wc.finale.rencontre[0].vic == 6);
    assert(wc.finale.rencontre[0].def == 1);
    assert(wc.finale.rencontre[0].buts_p == 13);
    assert(wc.finale.rencontre[0].buts_c == 8);
    assert(wc.finale.rencontre[0].diff_buts == 5);

    assert(wc.finale.rencontre[1].pts == 6);
    assert(wc.finale.rencontre[1].vic == 5);
    assert(wc.finale.rencontre[1].def == 2);
    assert(wc.finale.rencontre[1].buts_p == 12);
    assert(wc.finale.rencontre[1].buts_c == 9);
    assert(wc.finale.rencontre[1].diff_buts == 3);

    printf("Tous les tests sont passés avec succès.\n");

    // Libération de la mémoire allouée
    for (int i = 0; i < 8; ++i) {
        free(wc.grp[i].eqp);
    }
    free(liste_matches.matches);
}
