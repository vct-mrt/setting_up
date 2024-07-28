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

void display(char **tab);
int *find_max(int **tab);
int **adder_tab(int **tab);
int error(int ac, char **av);
int setting_up(int ac, char **av);
int **reverse_demineur(char **tab);
void put_x(char **tab, int *ind_max);
int gen_setting_up(int ac, char **av);


#endif /* SETTING_UP_H */
