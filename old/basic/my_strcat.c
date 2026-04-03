/*
** EPITECH PROJECT, 2026
** MY_STRCAT.C
** File description:
** my_strcat
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *my_strcat(char *dest, char *src)
{
    int j = 0;
    int i = 0;

    while (dest[i] != '\0') {
        i++;
    }
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}
