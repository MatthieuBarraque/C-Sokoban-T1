/*
** EPITECH PROJECT, 2022
** emacs my_strlen.c
** File description:
** my_strlen
*/
#include "my.h"

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}
