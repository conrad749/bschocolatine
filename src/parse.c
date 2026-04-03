/*
** EPITECH PROJECT, 2026
** PARSE.C
** File description:
** parse
*/

#include "../include/robot.h"

int step1(char *filename)
{
    for (int i = 0; filename[i] != '\0'; i++) {
        if (filename[i] == '.')
            return 0;
    }
    return -1;
}

int count_array(char **array)
{
    int i = 0;

    while (array[i] != NULL)
        i++;
    return (i - 1);
}

int parse_name(char *filename)
{
    char **array = my_str_to_word_array(filename, '.');
    int i = count_array(array);

    if (my_strcmp(array[i], "s") == 0)
        return 0;
    return -1;
}

int recap_parse(char *filename)
{
    int i = step1(filename);
    int j = 0;

    if (i == 0) {
        j = parse_name(filename);
        return j;
    }
    return i;
}
