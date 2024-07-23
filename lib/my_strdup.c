/*
** EPITECH PROJECT, 2024
** my_strdup.c
** File description:
** my strdup
*/

#include "lib.h"

char *my_strdup(char *str)
{
    char *cpy = malloc((my_strlen(str) + 1) * sizeof(char));
    int ind = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        cpy[ind] = str[i];
        ind++;
    }
    cpy[ind] = '\0';
    return cpy;
}
