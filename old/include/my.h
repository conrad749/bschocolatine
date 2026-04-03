/*
** EPITECH PROJECT, 2026
** MY.H
** File description:
** my.h
*/

#ifndef MY_H
    #define MY_H

    #include <unistd.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <sys/wait.h>
    #include <signal.h>

typedef struct env {
    char *name;
    char *value;
    struct env *next;
} env_t;

void my_putchar(char c);
void my_putstr(char *str);
void my_putnbr(int nb);
int my_strstr(char *str, char *to_find);
int my_strcmp(char *s1, char *s2);
char *my_strdup(const char *src);
char *my_strcpy(char *src, char *dest);
int my_strncmp(char *s1, char *s2, int n);
int my_strlen(char *str);
char *my_strcat(char *src, char *dest);
void end_str(char *str);
void print_args(char **arg);
char **my_str_to_word_array(char *str, char c);
void free_array(char **array);
char *get_path(char **env);
int find_path(char *str);
int cat_command(char **env, char *command);
void quit(char *line);
int change_dir(char *enter);
int pwd(char **env, char *command);
void create_child(char **env, char **command);
void my_puterror(char *str);
char *clean_str(char *str);
int cd_executer(char **arg);
int exec(char *cmd, char **env);
#endif
