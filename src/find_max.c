/*
** EPITECH PROJECT, 2024
** find_max.c
** File description:
** find ind max
*/

#include "setting_up.h"

static void put_max(int *line, int ind_line, int *ind)
{
    for (int i = 0; line[i] != -1; i++) {
        if (line[i] > ind[2]) {
            ind[2] = line[i];
            ind[1] = ind_line;
            ind[0] = i;
        }
    }
}

int *find_max(int **tab)
{
    int *ind = malloc(3 * sizeof(int));

    ind[0] = -1;
    ind[1] = -1;
    ind[2] = -1;
    for (int i = 0; tab[i] != NULL; i++)
        put_max(tab[i], i, ind);
    return ind;
}
