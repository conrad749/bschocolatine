/*
** EPITECH PROJECT, 2026
** SHELL.C
** File description:
** shell
*/

#include "./include/my.h"

void quit(char *str)
{
    if (my_strcmp(str, "exit") == 0) {
        exit(0);
    }
}

char *invite(void)
{
    char *line = NULL;
    size_t n;
    char **array = NULL;

    my_putstr("$> ");
    getline(&line, &n, stdin);
    end_str(line);
    return line;
}

char *execute(char **env)
{
    char *line = NULL;
    char **array = NULL;
    uid_t p = 0;
    int status;

    while (1) {
        line = invite();
        quit(line);
        array = my_str_to_word_array(line, ' ');
        cat_command(env, array[0]);
    }
    free_array(array);
    return 0;
}

int main(int ac, char **av, char **env)
{
    execute(env);
}
