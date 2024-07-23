/*
** EPITECH PROJECT, 2024
** put_tab.c
** File description:
** put tab
*/

#include "lib.h"

static int compteur_line(char *str, char separator)
{
    int cmp = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == separator)
            cmp++;
    }
    if (str[my_strlen(str) - 1] != separator)
        cmp++;
    return cmp;
}

static int *len_every_lines(char *str, char separator)
{
    int nb_line = compteur_line(str, separator);
    int *nb = malloc((nb_line + 1) * sizeof(int));
    int ind = 0;
    int cmp = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == separator) {
            nb[ind] = cmp;
            ind++;
            cmp = 0;
        } else
            cmp++;
    }
    if (str[my_strlen(str) - 1] != separator) {
        nb[ind] = cmp;
        ind++;
    }
    nb[ind] = -1;
    return nb;
}

char *put_line(char *str, int ind, int len_lines)
{
    char *line = malloc((len_lines + 1) * sizeof(char));
    int ind_line = 0;
    int start = ind - len_lines;

    while (ind_line < len_lines) {
        line[ind_line] = str[start];
        ind_line++;
        start++;
    }
    line[ind_line] = '\0';
    return line;
}

char **put_tab(char *str, char separator)
{
    int nb_lines = compteur_line(str, separator);
    int *len_lines = len_every_lines(str, separator);
    char **tab = malloc((nb_lines + 1) * sizeof(char *));
    int i = 0;
    int ind_tab = 0;

    while (str[i] != '\0') {
        if (str[i] == separator) {
            tab[ind_tab] = put_line(str, i, len_lines[ind_tab]);
            ind_tab++;
        }
        i++;
    }
    if (str[my_strlen(str) - 1] != separator) {
        tab[ind_tab] = put_line(str, i, len_lines[ind_tab]);
        ind_tab++;
    }
    tab[ind_tab] = NULL;
    free(len_lines);
    return tab;
}
