/*
** EPITECH PROJECT, 2024
** gen_setting_up.c
** File description:
** gen part setting up
*/

#include "setting_up.h"

int gen_setting_up(int ac, char **av)
{
    int nb = my_getnbr(av[1]);
    char **gen = generator(av[2], nb);
    int **reverse = reverse_demineur(gen, 1);
    int **add = adder_tab(reverse);
    int *ind_max = find_max(add);

    put_x(gen, ind_max, 1);
    display(gen, 1);
    free_char_tab(gen);
    free_int_tab(reverse);
    free(ind_max);
    return 0;
}
