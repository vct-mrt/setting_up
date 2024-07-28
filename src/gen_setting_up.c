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

    for (int i = 0; gen[i] != NULL; i++) {
        printf("%s\n", gen[i]);
    }
    printf("\n");
    for (int i = 0; reverse[i] != NULL; i++) {
        for (int y = 0; reverse[i][y] != -1; y++) {
            printf("%d", reverse[i][y]);
        }
        printf("\n");
    }
    printf("\n");
    put_x(gen, ind_max);
    display(gen, 1);
    free_char_tab(gen);
    free_int_tab(reverse);
    free(ind_max);
    return 0;
}
