/*
** EPITECH PROJECT, 2026
** cd2.c
** File description:
** CD
*/

#include "../include/my.h"

int parcours(char **array)
{
    int i = 0;

    while (array[i] != NULL) {
        i++;
    }
    return i;
}

int cd_executer(char **arg)
{
    if (parcours(arg) == 1) {
        chdir("..");
    }
    if (parcours(arg) == 2 && chdir(arg[1]) == 0) {
        return 0;
    } else if (parcours(arg) == 2 && chdir(arg[1]) == -1) {
        my_puterror("No such file or directory\n");
        return 84;
    }
    if (parcours(arg) > 2) {
        my_puterror("Too many arguments\n");
    }
    return 0;
}
