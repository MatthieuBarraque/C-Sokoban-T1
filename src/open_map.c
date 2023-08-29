/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main.c
**carré
*/

#include "my.h"

long taille_fichier(char const *filepath)
{
    struct stat taille;
    stat(filepath, &taille);
    int size = taille.st_size;
    return taille.st_size;
}

char *affichage_map(char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char *map;
    int taille = taille_fichier(filepath);
    if (fd == -1 || taille == -1)
        return 0;
    map = malloc(sizeof(char) * (taille + 1));
    int des = read(fd, map, taille);
    if (!map || des == -1)
        return 0;
    map[taille] = '\0';
    close(fd);
    return (map);
}
