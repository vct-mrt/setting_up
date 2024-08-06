/*
** EPITECH PROJECT, 2024
** generator.c
** File description:
** generator
*/

#include "setting_up.h"

static char *put_gen(char *pattern, int nb, int ind_tab)
{
    char *line = malloc((nb + 1) * sizeof(char));
    int ind_line = 0;
    int ind = ind_tab % nb;

    for (int i = 0; i < nb; i++) {
        if (ind >= my_strlen(pattern))
            ind = 0;
        line[ind_line] = pattern[ind];
        ind++;
        ind_line++;
    }
    line[ind_line] = '\0';
    return line;
}

char **generator(char *pattern, int nb)
{
    char **tab = malloc((nb + 1) * sizeof(char *));
    int ind_tab = 0;

    for (int i = 0; i < nb; i++) {
        tab[ind_tab] = put_gen(pattern, nb, ind_tab);
        ind_tab++;
    }
    tab[ind_tab] = NULL;
    return tab;
}
