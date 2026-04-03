/*
** EPITECH PROJECT, 2026
** G-PSU-200-COT-2-1-minishell1-52
** File description:
** exec
*/

#include "include/my.h"

int exec(char *cmd, char **env)
{
    char **array = my_str_to_word_array(cmd, ' ');

    if (cmd[0] == '.' || cmd[0] == '/') {
        if (access(cmd, X_OK) == 0)
            execve(cmd, array, env);
    }
    return 0;
}
