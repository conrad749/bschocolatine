/*
** EPITECH PROJECT, 2026
** my.h
** File description:
** library
*/

#ifndef MY_H
    #define MY_H
    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include "../op.h"
    #include <criterion/criterion.h>
    #include "../basic/basic.h"
    #include <sys/stat.h>

typedef struct for_getline {
    char *line;
    size_t n;
} f_g_t;

int my_putnbr(int nb);
int mini_printf(const char *format, ...);
void my_putchar(char c);
void usage(void);
header_t *fill_header(char *o_filename);
int recap_parse(char *filename);
void writer(header_t *head, char *o_filename);
char *clean_str(char *str);

#endif
