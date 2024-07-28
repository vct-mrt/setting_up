/*
** EPITECH PROJECT, 2024
** lib.h
** File description:
** lib
*/

#ifndef MY_LIB_H
    #define MY_LIB_H
    #include <stddef.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include <sys/stat.h>
    #include <stdlib.h>

int len_tab(char **tab);
int my_getnbr(char *str);
int my_strlen(char *str);
void my_putstr(char *str);
char *my_strdup(char *str);
void free_int_tab(int **tab);
char *openfile(char *filepath);
void free_char_tab(char **tab);
char **put_tab(char *str, char separator);

#endif /* MY_LIB_H */
