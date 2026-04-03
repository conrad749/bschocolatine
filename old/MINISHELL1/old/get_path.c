/*
** EPITECH PROJECT, 2026
** GET_PATH.C
** File description:
** get_path
*/

#include "include/my.h"

char *get_path(char **env)
{
    int i = 0;

    while (env[i]) {
        if (find_path(env[i]) == 1) {
            return env[i];
        }
        i++;
    }
    return NULL;
}

char *cut_path(char **env)
{
    char *path = get_path(env);
    char **array = my_str_to_word_array(path, '=');
    return array[1];
}

int cat_command(char **env, char *command)
{
    char *path = cut_path(env);
    char **d_path = my_str_to_word_array(path, ':');
    char *paste = NULL;
    char *concat = NULL;
    char **array = NULL;
    uid_t p = 0;
    int status = 0;

    for (int i = 0; d_path[i] != NULL; i++) {
        //quit(command);
        d_path[i] = my_strcat(d_path[i], "/");
        d_path[i] = my_strcat(d_path[i], command);
        array = my_str_to_word_array(d_path[i], ' ');
        p = fork();
        if (p == 0) {
            if (execve(*array, array, env) != -1) {
                exit(0);
            }
        } else {        
            waitpid(p, &status, 0);
        }
        quit(command);
    }
    free_array(array);
}
