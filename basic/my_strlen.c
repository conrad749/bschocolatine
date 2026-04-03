/*
** EPITECH PROJECT, 2026
** MY_STRLEN.C
** File description:
** my_strlen
*/

#include "basic.h"

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return i;
}
