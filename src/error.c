/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main.c
*/

#include "my.h"

void error(void)
{
    my_putstr("USAGE\n");
    my_putstr("     ./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("      map file representing the warehouse map,");
    my_putstr(" containing ‘#’ for walls,\n");
    my_putstr("          ‘P’ for the player, ‘X’ for boxes and");
    my_putstr(" ‘O’ for storage locations.");
    my_putstr("\n");
}
