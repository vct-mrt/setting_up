/*
** EPITECH PROJECT, 2024
** len_tab.c
** File description:
** len tab
*/

#include "lib.h"

int len_tab(char **tab)
{
    int cmp = 0;

    while (tab[cmp] != NULL) {
        cmp++;
    }
    return cmp;
}
