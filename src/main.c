/*
** EPITECH PROJECT, 2026
** MAIN.C
** File description:
** main
*/

#include "../include/robot.h"

int main(int ac, char **av)
{
    header_t *head = NULL;

    if (ac == 2) {
        if (my_strcmp(av[1], "-h") == 0) {
            usage();
            return 0;
        }
    }
    if (recap_parse(av[1]) == -1) {
        my_putstr("bad file\n");
        return 84;
    }
    head = fill_header(av[1]);
    if (head != NULL)
        writer(head, av[1]);
    else {
        my_putstr("Invalide file\n");
        return 84;
    }
}
