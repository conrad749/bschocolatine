/*
** EPITECH PROJECT, 2026
** MY_STRDUP.C
** File description:
** my_strdup
*/

#include "basic.h"

char *my_strdup(char *str)
{
    char *s = malloc(sizeof(char) * (my_strlen(str) + 1));
    int i = 0;

    if (s == NULL)
        return NULL;
    for (; str[i] != '\0'; i++) {
        s[i] = str[i];
    }
    s[i] = '\0';
    return s;
}
