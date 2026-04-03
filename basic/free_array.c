/*
** EPITECH PROJECT, 2026
** FREE_ARRAY.C
** File description:
** free_array
*/

#include "basic.h"

void free_array(void **arr)
{
    if (arr == NULL)
        return;
    for (int i = 0; arr[i] != NULL; i++) {
        free(arr[i]);
    }
    free(arr);
}
