/*
** EPITECH PROJECT, 2026
** MY.H
** File description:
** my.h
*/

#ifndef MY_H
    #define MY_H
    #include <stdlib.h>
    #include <unistd.h>
    #include <string.h>
    #include <stdio.h>

void my_putchar(char c);
void my_putstr(char *str);
int my_strcmp(char *s1, char *s2);
int my_strlen(char *str);
char **my_str_to_word_array(char *str, char c);
void free_array(char **array);
#endif
