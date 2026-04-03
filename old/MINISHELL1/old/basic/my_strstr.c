/*
** EPITECH PROJECT, 2026
** MY_STRSTR.C
** File description:
** my_strstr
*/

#include "../include/my.h"

int intermediate(char *str, char *to_find, int i)
{
    if (str[i] == to_find[0]) {
        if (my_strncmp(&str[i], to_find, my_strlen(to_find)) == 0)
            return 0;
    }
    return 1;
}

int my_strstr(char *str, char *to_find)
{
    int i = 0;
    int j = my_strlen(to_find);

    while (str[i] != '\0') {
        if (intermediate(str, to_find, i) == 0)
            return 0;
        i++;
    }
    return 1;
}
