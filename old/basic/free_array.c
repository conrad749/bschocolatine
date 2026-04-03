/*
** EPITECH PROJECT, 2026
** FREE_ARRAY.C
** File description:
** free_array
*/

#include "../include/my.h"

void free_array(char **array)
{
    for (int i = 0; array[i]; i++) {
        free(array[i]);
    }
    free(array);
}
