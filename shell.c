/*
** EPITECH PROJECT, 2026
** SHELL.C
** File description:
** shell
*/

#include "include/my.h"

int quit(char *line, int i)
{
    if (my_strcmp(line, "exit") == 0) {
        exit(i);
    }
    return 1;
}

void end_str(char *line)
{
    int i = my_strlen(line);

    if (line[i - 1] == '\n')
        line[i - 1] = '\0';
}

int exec(char **env)
{
    char *line = NULL;
    size_t n = 0;
    char **array = NULL;

    my_putstr("$>");
    while (getline(&line, &n, stdin) != -1) {
        end_str(line);
        my_putstr("$>");
        if (quit(line, 0) == 1) {
            end_str(line);
            array = my_str_to_word_array(line, ' ');
            execve(array[0], array, env);
            free_array(array);
        }
    }
    free_array(array);
    free(line);
}

int main(int ac, char **av, char **env)
{
    if (ac != 1)
        return 84;
    exec(env);
}
