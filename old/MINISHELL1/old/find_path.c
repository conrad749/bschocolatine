/*
** EPITECH PROJECT, 2026
** FIND_PATH.C
** File description:
** find_path
*/

#include "include/my.h"

int find_path(char *str)
{
    if (str[0] == 'P' && str[1] == 'A' && str[2] == 'T' && str[3] == 'H') {
        return 1;
    }
    return 0;
}
