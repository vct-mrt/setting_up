/*
** EPITECH PROJECT, 2024
** reverse demineur.c
** File description:
** reverse demineur
*/

#include "setting_up.h"

static int min(int a, int b, int c)
{
    if (a <= b && a <= c)
        return a;
    if (b <= a && b <= c)
        return b;
    if (c <= b && c <= a)
        return c;
}

static int put_add_tab(int i, int y, int **tab)
{
    int nb = tab[i][y];

    if (nb == 0)
        return 0;
    if (nb == 1)
        return min(tab[i][y - 1], tab[i - 1][y - 1], tab[i - 1][y]) + 1;
}

int **adder_tab(int **tab)
{
    for (int i = 1; tab[i] != NULL; i++) {
        for (int y = 1; tab[i][y] != -1; y++) {
            tab[i][y] = put_add_tab(i, y, tab);
        }
    }
    return tab;
}

static int *put_reverse(char *str)
{
    int *line = malloc((my_strlen(str) + 1) * sizeof(int));
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == '.')
            line[i] = 1;
        if (str[i] == 'o')
            line[i] = 0;
        i++;
    }
    line[i] = -1;
    return line;
}

int **reverse_demineur(char **tab, int flag)
{
    int **reverse = malloc((len_tab(tab) + 1) * sizeof(int *));
    int ind_reverse = 0;
    int i = 0;

    if (flag == 0)
        i = 1;
    while (tab[i] != NULL) {
        reverse[ind_reverse] = put_reverse(tab[i]);
        ind_reverse++;
        i++;
    }
    reverse[ind_reverse] = NULL;
    return reverse;
}
