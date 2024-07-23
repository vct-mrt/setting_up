/*
** EPITECH PROJECT, 2024
** my_putstr.c
** File description:
** my putstr
*/

#include "lib.h"

void my_putstr(char *str)
{
    write(STDOUT_FILENO, str, my_strlen(str));
    write(STDOUT_FILENO, "\n", 1);
}
