/*
** EPITECH PROJECT, 2026
** END_STR.C
** File description:
** end_str
*/

#include "../include/my.h"

void end_str(char *str)
{
    if (str[my_strlen(str) - 1] == '\n')
        str[my_strlen(str) - 1] = '\0';
}
