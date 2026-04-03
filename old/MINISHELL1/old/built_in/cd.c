/*
** EPITECH PROJECT, 2026
** CD.C
** File description:
** cd
*/

#include "../include/my.h"

int count(char **string)
{
    int i = 0;

    while (string[i] != '\0') {
        i++;
    }
    return i;
}

void cd(char **a)
{
    int n = count(a);

    if (n = 1) {
        chdir("~");
        exit(0);
    } else if (ac == 2) {
        chdir(a[1]);
        exit(0);
    }
    my_putstr(av[1]);
    my_putstr(": No such file or directory\n");
}
