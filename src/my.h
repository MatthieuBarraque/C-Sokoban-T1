/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my.h
*/
#ifndef MY_H_
    #define MY_H_

    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <ncurses.h>
    #include <string.h>
    #include <fcntl.h>
    #include <sys/stat.h>
    int nb_lignes(char *tab);
    int my_strlen(char const *str);
    char my_putchar(char c);
    int my_putstr(char *str);
    void error(void);
    void moove_gauche(char **tab_map, int ligne, char *map);
    void moove_droit(char **tab_map, int ligne, char *map);
    void moove_haut(char **tab_map, int ligne, char *map);
    void moove_bas(char **tab_map, int ligne, char *map);
    void place_gauche(char **tab_map, int x, int i);
    int place_droit(char **tab_map, int x, int i);
    int place_bas(char **argv, int x, int i);
    void place_haut(char **tab_map, int x, int i);
    void col_gauche(char **map, int i, int j);
    void col_haut(char **tab_map, int i, int j);
    int col_droit(char **tab_map, int i, int j);
    int col_bas(char **map, int i, int j);
    void moove(int touche, char **tab_map, int ligne, char *map);
    int window_map(char **tab_map, int ligne, char *map);
    int control(char *tab, char *map);
    char *affichage_map(char *filepath);
    int cs_place(char **tab_map, int i, int j);
    int cs_place_b(char **tab_map, int i, int j);
    void coll_g(char **tab_map, int x, int i);
    int coll_d(char **tab_map, int i, int j);
    int coll_b(char **tab_map, int i, int j);
    void coll_h(char **tab_map, int i, int j);
    int check_w(char **tab_map, char *map);

#endif
