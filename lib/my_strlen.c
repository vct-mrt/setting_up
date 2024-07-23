/*
** EPITECH PROJECT, 2024
** my_strlen.c
** File description:
** my strlen
*/

int my_strlen(char *str)
{
    int cmp = 0;

    while (str[cmp] != '\0') {
        cmp++;
    }
    return cmp;
}
