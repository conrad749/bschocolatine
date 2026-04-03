/*
** EPITECH PROJECT, 2026
** CLEAN_STR.C
** File description:
** clean_str
*/

#include "basic.h"

char separator(char c)
{
    if (c == ' ' || c == '\t')
        return c;
    return 0;
}

int count_separator(char *str)
{
    int i = 0;
    int n = 0;

    while (str[i] != '\0') {
        if (separator(str[i]) && separator(str[i - 1])) {
            n++;
        }
        i++;
    }
    return n;
}

void to_space(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == '\t') {
            str[i] = ' ';
        }
        i++;
    }
}

char *clean_str0(char *str)
{
    int i = 0;
    char *stocke = (char *)malloc(sizeof(char) * strlen(str) + 1);
    int n = 0;

    to_space(str);
    while (str[0] == '\t' || str[0] == ' ')
        str++;
    while (str[i] != '\0') {
        while (separator(str[i]) && separator(str[i - 1])) {
            i++;
        }
        stocke[n] = str[i];
        i++;
        n++;
    }
    stocke[n] = '\0';
    return stocke;
}

char *clean_str(char *str)
{
    char *stocke = NULL;
    int i = 0;

    if (str == NULL)
        return NULL;
    else {
        stocke = clean_str0(str);
        i = my_strlen(stocke) - 1;
        if (stocke[i] == ' ' || stocke[i] == '\t') {
            stocke[i] = '\0';
        }
    }
    return stocke;
}
