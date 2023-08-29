/*
** EPITECH PROJECT, 2023
** deplacement_g_d_h_b.c
** File description:
** deplacement_g_d_h_b
*/
#include "my.h"

void moove_gauche(char **tab_map, int ligne, char *map)
{
    int x = 0;
    int i = 0;
    while (i < ligne) {
        x = my_strlen(tab_map[i]);
        place_gauche(tab_map, x, i);
        i++;
    }
    window_map(tab_map, ligne, map);
}

void moove_droit(char **tab_map, int ligne, char *map)
{
    int x = 0;
    int i = 0;
    while (i < ligne) {
        x = my_strlen(tab_map[i]);
        if (place_droit(tab_map, x, i)) {
            break;
        }
        i++;
    }
    window_map(tab_map, ligne, map);
}

void moove_haut(char **tab_map, int ligne, char *map)
{
    int x = 0;
    int i = 0;
    while (i < ligne) {
        x = my_strlen(tab_map[i]);
        place_haut(tab_map, x, i);
        i++;
    }
    window_map(tab_map, ligne, map);
}

void moove_bas(char **tab_map, int ligne, char *map)
{
    int x = 0;
    int i = 0;
    while (i < ligne) {
        x = my_strlen(tab_map[i]);
        if (place_bas(tab_map, x, i)) {
            break;
        }
        i++;
    }
    window_map(tab_map, ligne, map);
}
