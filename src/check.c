/*
** EPITECH PROJECT, 2023
** control.c
** File description:
** control
*/

#include "my.h"

int check_w(char **tab_map, char *map)
{
    for (int i = 0; map[i] != '\0'; i++) {
        if (map[i] == 'O')
            return 1;
    }
    return 0;
}
