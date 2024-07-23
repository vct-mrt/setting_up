/*
** EPITECH PROJECT, 2024
** put_x.c
** File description:
** put x
*/

#include "setting_up.h"

void put_x(char **tab, int *ind_max)
{
    for (int i = 0; i < ind_max[2]; i++) {
        for (int y = 0; y < ind_max[2]; y++) {
            tab[ind_max[1] - i + 1][ind_max[0] - y] = 'x';
        }
    }
}
