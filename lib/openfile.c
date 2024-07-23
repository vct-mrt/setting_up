/*
** EPITECH PROJECT, 2024
** openfile.c
** File description:
** openfile
*/

#include "lib.h"

char *openfile(char *filepath)
{
    struct stat st;
    int fd_stat = stat(filepath, &st);
    int size = st.st_size;
    char *buffer = malloc((size + 1) * sizeof(char));
    int fd_file = open(filepath, O_RDONLY);

    if (fd_file == -1)
        return NULL;
    read(fd_file, buffer, size);
    buffer[size] = '\0';
    return buffer;
}
