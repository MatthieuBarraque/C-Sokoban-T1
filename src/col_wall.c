/*
** EPITECH PROJECT, 2023
** condition.c
** File description:
** condition.c
*/

#include "my.h"

void coll_g(char **tab_map, int i, int j)
{
    char next_pos = tab_map[i][j - 2];
    if (next_pos != '#' && next_pos != 'X') {
        tab_map[i][j - 2] = 'P';
        tab_map[i][j] = ' ';
        tab_map[i][j - 1] = 'O';
    }
}

int coll_d(char **tab_map, int i, int j)
{
    char next_pos = tab_map[i][j + 2];
    if (next_pos != '#' && next_pos != 'X') {
        tab_map[i][j + 2] = 'P';
        tab_map[i][j] = ' ';
        tab_map[i][j + 1] = 'O';
        return 1;
    }
    return 0;
}

void coll_h(char **tab_map, int i, int j)
{
    char next_pos = tab_map[i - 2][j];
    if (next_pos != '#' && next_pos != 'X') {
        tab_map[i - 2][j] = 'P';
        tab_map[i][j] = ' ';
        tab_map[i - 1][j] = 'O';
    }
}

int coll_b(char **tab_map, int i, int j)
{
    char next_pos = tab_map[i + 2][j];
    if (next_pos != '#' && next_pos != 'X') {
        tab_map[i + 2][j] = 'P';
        tab_map[i][j] = ' ';
        tab_map[i + 1][j] = 'O';
        return 1;
    }
    return 0;
}
