/*
** EPITECH PROJECT, 2024
** setting_up.c
** File description:
** setting up
*/

#include "setting_up.h"
#include <stdio.h>

int setting_up(int ac, char **av)
{
    char *buffer = openfile(av[1]);
    char **tab = put_tab(buffer, '\n');
    int **reverse = reverse_demineur(tab, 0);
    int **add = adder_tab(reverse);
    int *ind_max = find_max(add);

    put_x(tab, ind_max, 0);
    display(tab, 0);
    free(ind_max);
    free(buffer);
    free_char_tab(tab);
    free_int_tab(reverse);
    return 0;
}
