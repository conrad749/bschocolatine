/*
** EPITECH PROJECT, 2026
** SHELL.C
** File description:
** shell
*/

#include "./include/my.h"

void quit(char *line)
{
    if (my_strcmp(line, "exit") == 0) {
        free(line);
        exit(0);
    }
}

void command(char **env, char *array)
{
    char **tab = my_str_to_word_array(array, ' ');
    int cmp = my_strcmp(*tab, "cd");

    if (cmp == 0) {
        cd_executer(tab);
        quit(array);
    } else if (cmp != 0){
        create_child(env, tab);
        free_array(tab);
        quit(array);
    }
}

int execute(char **env)
{
    char *line = NULL;
    size_t n = 0;
    char **array = NULL;
    char *clean = NULL;
    int l = getline(&line, &n, stdin);

    while (l != -1) {
        my_putstr("$> ");
        end_str(line);
        clean = clean_str(line);
        command(env, clean);
        quit(clean);
        l = getline(&line, &n, stdin);
    }
    return 0;
}

int main(int ac, char **av, char **env)
{
    int i = execute(env);

    return i;
}
