/*
** EPITECH PROJECT, 2026
** MY_PUTNBR.C
** File description:
** my_putnbr
*/

#include "../include/my.h"

void my_putnbr(int nb)
{
    if (nb < 0) {
        nb = -nb;
    }
    if (nb > 9) {
        my_putnbr(nb / 10);
    }
    my_putchar('0' + nb % 10);
}
