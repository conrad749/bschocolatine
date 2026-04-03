/*
** EPITECH PROJECT, 2026
** MY_STRCAT.C
** File description:
** my_strcat
*/

#include "basic.h"
char *my_strcat(char *src, char *dest)
{
    int i = my_strlen(src) + my_strlen(dest);
    char *res = (char *)malloc(sizeof(char) * (i + 1));
    int f = 0;
    int t = 0;

    while (src[t] != '\0') {
        res[f] = src[t];
        f++;
        t++;
    }
    t = 0;
    while (dest[t] != '\0') {
        res[f] = dest[t];
        f++;
        t++;
    }
    res[f] = '\0';
    return res;
}
