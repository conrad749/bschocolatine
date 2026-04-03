/*
** EPITECH PROJECT, 2026
** 
** File description:
** 
*/

#include "include/robot.h"

int main(int ac, char **av)
{
    FILE *file = fopen(av[1], "r");
    struct stat st;
    if (stat(av[1], &st) == -1)
        return -1;
    printf("%lu", st.st_size);
}
