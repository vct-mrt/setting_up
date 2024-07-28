/*
** EPITECH PROJECT, 2024
** display.c
** File description:
** display
*/

#include "setting_up.h"

void display(char **tab, int flag)
{
    int i = 0;

    if (flag == 0)
        i = 1;
    while (tab[i] != NULL) {
        my_putstr(tab[i]);
        i++;
    }
}
