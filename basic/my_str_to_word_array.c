/*
** EPITECH PROJECT, 2026
** MY_STR
** File description:
** MY_STR
*/

#include <stdio.h>
#include <stdlib.h>

int count_lines(char *str, char c)
{
    int i = 0;
    int j = 0;

    while (str[i] != '\0') {
        if (str[i] == c) {
            j++;
        }
        i++;
    }
    return (j + 1);
}

int *count_cols(char *str, char c, int lines)
{
    int *tab = (int *)malloc(sizeof(int) * lines);
    int i = 0;
    int index = 0;

    for (int j = 0; str[j] != '\0'; j++) {
        i++;
        if (str[j] == c) {
            tab[index] = i;
            index++;
            i = 0;
        }
    }
    tab[index] = i + 1;
    return tab;
}

char **alloc(char *str, int lines, int *cols)
{
    char **array = (char **)malloc(sizeof(char *) * (lines + 1));
    int i = 0;

    for (; i < lines; i++) {
        array[i] = (char *)malloc(sizeof(char) * cols[i]);
    }
    array[i] = NULL;
    return array;
}

char **fill_array(char **array, char *str, int line, int *cols)
{
    int index = 0;
    int j = 0;

    for (int i = 0; array[i] != NULL; i++) {
        for (j = 0; j < cols[i] - 1; j++) {
            array[i][j] = str[index];
            index++;
        }
        array[i][j] = '\0';
        index++;
    }
    return array;
}

char **my_str_to_word_array(char *str, char c)
{
    int len = count_lines(str, c);
    int *cols = count_cols(str, c, len);
    char **array = alloc(str, len, cols);

    array = fill_array(array, str, len, cols);
    return array;
}
