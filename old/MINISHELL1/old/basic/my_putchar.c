/*
** EPITECH PROJECT, 2026
** MY_PUTCHAR.C
** File description:
** MY_PUTCHAR.C
*/

#include "../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
