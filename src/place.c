/*
** EPITECH PROJECT, 2023
** condition_g_d_h_b.c
** File description:
** condition_g_d_h_b.
*/
#include "my.h"

void place_gauche(char **tab_map, int x, int i)
{
    for (int j = 0; j < x; j++) {
        if (tab_map[i][j] == 'P') {
            switch (tab_map[i][j - 1]) {
                case 'O':
                    coll_g(tab_map, i, j);
                    break;
                case ' ':
                    tab_map[i][j - 1] = 'P';
                    tab_map[i][j] = ' ';
                    break;
                case 'X':
                    col_gauche(tab_map, i, j);
                    return;
            }
        }
    }
}

int place_droit(char **tab_map, int x, int i)
{
    for (int j = 0; j < x; j++) {
        if (tab_map[i][j] == 'P') {
            switch (tab_map[i][j + 1]) {
                case 'O':
                    coll_d(tab_map, i, j);
                    return 1;
                case ' ':
                    tab_map[i][j + 1] = 'P';
                    tab_map[i][j] = ' ';
                    return 1;
                case 'X':
                    cs_place_b(tab_map, i, j);
                    return 1;
            }
        }
    }
    return 0;
}

int place_bas(char **tab_map, int x, int i)
{
    for (int j = 0; j < x; j++) {
        if (tab_map[i][j] == 'P') {
            switch (tab_map[i + 1][j]) {
                case 'O':
                    coll_b(tab_map, i, j);
                    return 1;
                case ' ':
                    tab_map[i + 1][j] = 'P';
                    tab_map[i][j] = ' ';
                    return 1;
                case 'X':
                    cs_place(tab_map, i, j);
                    return 1;
            }
        }
    }
    return 0;
}

void place_haut(char **tab_map, int x, int i)
{
    for (int j = 0; j < x; j++) {
        if (tab_map[i][j] == 'P') {
            switch (tab_map[i - 1][j]) {
                case 'O':
                    coll_h(tab_map, i, j);
                    break;
                case ' ':
                    tab_map[i - 1][j] = 'P';
                    tab_map[i][j] = ' ';
                    break;
                case 'X':
                    col_haut(tab_map, i, j);
                    break;
            }
        }
    }
}
