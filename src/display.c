/*
** EPITECH PROJECT, 2024
** display.c
** File description:
** display
*/

#include "setting_up.h"

void display(char **tab)
{
    for (int i = 1; tab[i] != NULL; i++)
        my_putstr(tab[i]);
}
