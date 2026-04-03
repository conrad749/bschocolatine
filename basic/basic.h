/*
** EPITECH PROJECT, 2026
** BASIC.H
** File description:
** basic
*/

#ifndef BASIC_H_
    #define BASIC_H_
    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <string.h>

char *my_strcpy(char *s1, char *s2);
int my_strcmp(char *s1, char *s2);
char *my_strdup(char *str);
int my_strlen(char *str);
void free_array(void **arr);
char **my_str_to_word_array(char *str, char c);
int my_strncmp(char *s1, char *s2, int n);
char *my_strcat(char *src, char *dest);
void my_putstr(char *str);

#endif
