/*
** EPITECH PROJECT, 2024
** error.c
** File description:
** error
*/

#include "setting_up.h"

static int check_pattern(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '.' && str[i] != 'o')
            return 84;
    }
    return 0;
}

static int is_nbr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 48 || str[i] > 57)
            return 84;
    }
    return 0;
}

static int gen_error(int ac, char **av)
{
    if (is_nbr(av[1]) != 0)
        return 84;
    if (check_pattern(av[2]) != 0)
        return 84;
    return 0;
}

static int setting_error(int ac, char **av)
{
    return 0;
}

int error(int ac, char **av)
{
    if (ac == 2)
        return setting_error(ac, av);
    else if (ac == 3)
        return gen_error(ac, av);
    else
        return 84;
}
