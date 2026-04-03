/*
** EPITECH PROJECT, 2026
** PRINT_ARGS
** File description:
** print_args
*/

#include "../include/my.h"

void print_args(char **arg)
{
    int i = 0;

    while (*arg) {
        my_putstr(*arg);
        my_putstr("\n");
        arg++;
    }
}
