/*
** EPITECH PROJECT, 2024
** main.c
** File description:
** main
*/

#include "setting_up.h"

int main(int ac, char **av)
{
    if (error(ac, av) == 84)
        return 84;
    else
        return setting_up(ac, av);
}
