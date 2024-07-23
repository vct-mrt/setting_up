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

int my_strlen(char *str);
char *openfile(char *filepath);
char **put_tab(char *str, char separator);
char *my_strdup(char *str);
int len_tab(char **tab);
void free_char_tab(char **tab);
void free_int_tab(int **tab);
void my_putstr(char *str);


#endif /* MY_LIB_H */
