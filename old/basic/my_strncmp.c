/*
** EPITECH PROJECT, 2026
** MY_sTRNCMP.C
** File description:
** my_Strncmp
*/

#include "../include/my.h"

int my_strncmp(char *s1, char *s2, int n)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0' && i < n) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    if (i < n)
        return (s1[i] - s2[i]);
    return 0;
}
