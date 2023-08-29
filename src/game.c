/*
** EPITECH PROJECT, 2023
** control.c
** File description:
** control
*/
#include "my.h"
#include "moove.h"

void moove(int touche, char **tab_map, int ligne, char *map)
{
    switch (touche) {
        case KEY_UP:
            moove_haut(tab_map, ligne, map);
            break;
        case KEY_DOWN:
            moove_bas(tab_map, ligne, map);
            break;
        case KEY_LEFT:
            moove_gauche(tab_map, ligne, map);
            break;
        case KEY_RIGHT:
            moove_droit(tab_map, ligne, map);
            break;
    }
}

int window_map(char **tab_map, int ligne, char *map)
{
    initscr();
    keypad(stdscr, TRUE);

    while (1) {
        clear();
        for (int i = 0; i < ligne; i++) {
            int x = my_strlen(tab_map[i]) / 2;
            int y = (LINES / 1.5) - ligne + i;
            int z = (COLS / 2) - x;
            mvprintw(y, z, tab_map[i]);
        }
        refresh();
        int touche = getch();
        if (touche == SPACE) {
            affichage_map(map);
            break;
        }
        if (check_w(tab_map, map) == 1) {
            return 0;
        }
        moove(touche, tab_map, ligne, map);
    }
    endwin();
    return 84;
}

int control(char *buffer, char *map)
{
    int ligne = nb_lignes(buffer);
    char **tab_map = malloc(sizeof(char *) * ligne);
    int j = 0, k = 0, i = 0;
    while (buffer[j] != '\0') {
        if (buffer[j] == '\n')
            i++;
        tab_map[i] = malloc(sizeof(char) * (j + 1));
        j++;
    }
    j = 0;
    for (int i = 0; buffer[j] != '\0'; j++, k++) {
        if (buffer[j] == '\n') {
            tab_map[i][j] = '\0';
            i++;
            j++;
            k = 0;
        }
        tab_map[i][k] = buffer[j];
    }
    int val = window_map(tab_map, ligne, map);
    return val;
}
