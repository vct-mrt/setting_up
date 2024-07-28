/*
** EPITECH PROJECT, 2024
** my_getnbr.c
** File description:
** my get nbr
*/

#include "lib.h"
#include <stdio.h>

int my_getnbr(char *str)
{
    int result = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 48 && str[i] <= 57)
            result = result + (str[i] - 48);
        if (str[i] >= 48 && str[i] <= 57 && str[i + 1] != '\0')
            result *= 10;
    }
    return result;
}
