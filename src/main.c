/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my.h"

int cs_place(char **tab_map, int i, int j)
{
    if (col_bas(tab_map, i, j) == 1) {
        return 1;
    }
    return 0;
}

int cs_place_b(char **tab_map, int i, int j)
{
    if (col_droit(tab_map, i, j) == 1) {
        return 1;
    }
    return 0;
}

int nb_lignes(char *tab)
{
    int lines = 0;
    int i = 0;
    while (tab[i] != '\0') {
        if (tab[i] == '\n') {
            lines ++;
        }
        i++;
    }
    return lines + 1;
}

int main(int ac, char **av)
{
    if (av[1][0] == '-' && av[1][1] == 'h') {
        error();
        return (84);
    }
    if (ac < 1)
        return (84);

    char *map = affichage_map(av[1]);
    int val = control(map, av[1]);
    return val;
}
