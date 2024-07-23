/*
** EPITECH PROJECT, 2024
** setting_up.h
** File description:
** setting up
*/

#ifndef SETTING_UP_H
    #define SETTING_UP_H
    #include "lib.h"
    #include <stddef.h>
    #include <stdio.h>

int error(int ac, char **av);
int setting_up(int ac, char **av);
int **reverse_demineur(char **tab);
int **adder_tab(int **tab);
int *find_max(int **tab);
void put_x(char **tab, int *ind_max);
void display(char **tab);


#endif /* SETTING_UP_H */
