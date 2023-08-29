/*
** EPITECH PROJECT, 2023
** col.c
** File description:
** col.c
*/
#include "my.h"

int col_droit(char **tab_map, int i, int j)
{
    char next_pos = tab_map[i][j + 2];
    if (next_pos != '#' && next_pos != 'X') {
        tab_map[i][j + 2] = 'X';
        tab_map[i][j + 1] = 'P';
        tab_map[i][j] = ' ';
        return 1;
    }
    return 0;
}

void col_gauche(char **tab_map, int i, int j)
{
    char next_pos = tab_map[i][j - 2];
    if (next_pos != '#' && next_pos != 'X') {
        tab_map[i][j - 2] = 'X';
        tab_map[i][j - 1] = 'P';
        tab_map[i][j] = ' ';
    }
}

void col_haut(char **tab_map, int i, int j)
{
    char next_pos = tab_map[i - 2][j];
    if (next_pos != '#' && next_pos != 'X') {
        tab_map[i - 2][j] = 'X';
        tab_map[i - 1][j] = 'P';
        tab_map[i][j] = ' ';
    }
}

int col_bas(char **tab_map, int i, int j)
{
    char next_pos = tab_map[i + 2][j];
    if (next_pos != '#' && next_pos != 'X') {
        tab_map[i + 2][j] = 'X';
        tab_map[i + 1][j] = 'P';
        tab_map[i][j] = ' ';
        return 1;
    }
    return 0;
}
