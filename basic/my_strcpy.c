/*
** EPITECH PROJECT, 2026
** MY_STRCPY.C
** File description:
** my_strcpy
*/

#include "basic.h"

char *my_strcpy(char *s1, char *s2)
{
    int i = 0;

    for (; s1[i] != '\0'; i++) {
        s2[i] = s1[i];
    }
    s2[i] = '\0';
    return s2;
}
