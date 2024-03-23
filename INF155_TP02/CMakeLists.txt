cmake_minimum_required(VERSION 3.27)
project(INF155_TP02 C)

set(CMAKE_C_STANDARD 23)

add_executable(INF155_TP02 main.c
        structures.h
        lecture_fichiers.h
        lecture_fichiers.c
        sim_phase_grp.h
        sim_phase_grp.c
        phase_elimin.h
        phase_elimin.c
        stat_finales.c
        stat_finales.h)
