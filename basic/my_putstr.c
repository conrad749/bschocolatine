/*
** EPITECH PROJECT, 2026
** MY_PUTSTR.C
** File description:
** my_putstr
*/

#include "basic.h"

void my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        write(1, &str[i], 1);
        i++;
    }
}
