/*
** EPITECH PROJECT, 2024
** setting_up.h
** File description:
** setting up
*/

#ifndef SETTING_UP_H
    #define SETTING_UP_H
    #include "lib.h"
    #include <stdio.h>
    #include <stddef.h>

int *find_max(int **tab);
int **adder_tab(int **tab);
int error(int ac, char **av);
int setting_up(int ac, char **av);
void display(char **tab, int flag);
void put_x(char **tab, int *ind_max);
int gen_setting_up(int ac, char **av);
char **generator(char *pattern, int nb);
int **reverse_demineur(char **tab, int flag);

#endif /* SETTING_UP_H */
