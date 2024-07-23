/*
** EPITECH PROJECT, 2024
** free_tab.c
** File description:
** free tab
*/

#include "lib.h"

void free_char_tab(char **tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        free(tab[i]);
    }
    free(tab);
}

void free_int_tab(int **tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        free(tab[i]);
    }
    free(tab);
}
