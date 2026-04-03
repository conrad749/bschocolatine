/*
** EPITECH PROJECT, 2025
** MY_STRDUP.C
** File description:
** my_strdup
*/

#include "../include/my.h"

char *my_strdup(const char *src)
{
    int i = 0;
    int j = 0;
    char *dest = NULL;

    while (src[i] != '\0') {
        i++;
    }
    dest = malloc(sizeof(char) * (i + 1));
    while (src[j] != '\0') {
        dest[j] = src[j];
        j++;
    }
    dest[i] = '\0';
    return dest;
}
