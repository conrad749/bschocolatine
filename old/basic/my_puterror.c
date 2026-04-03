/*
** EPITECH PROJECT, 2026
** MY_PUTERROR.C
** File description:
** my_puterror
*/

#include "../include/my.h"

void my_puterror(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        write(2, &str[i], 1);
        i++;
    }
}
