/*
** EPITECH PROJECT, 2024
** main.c
** File description:
** main
*/

#include "setting_up.h"

int main(int ac, char **av)
{
    if (ac == 2 && error(ac, av) != 84)
        return setting_up(ac, av);
    else if (ac == 3 && error(ac, av) != 84)
        return gen_setting_up(ac, av);
    else
        return 84;
}
