/*
** EPITECH PROJECT, 2026
** PATH2.C
** File description:
** path2
*/

#include "include/my.h"

char *find_path2(char **env)
{
    int i = 0;

    while (env[i] != NULL) {
        if (my_strncmp(env[i], "PATH", 4) == 0) {
            return env[i];
        }
        i++;
    }
    return NULL;
}

char *seg_path(char **env)
{
    char *seg = find_path2(env);
    char **array = my_str_to_word_array(seg, '=');
    char *bin = array[1];

    free(array);
    return bin;
}

void previous(char **cmd)
{
    my_puterror(*cmd);
    my_puterror(": Command not found.\n");
    quit(*cmd);
}

int etablish(char **env, char **command)
{
    char *bins = seg_path(env);
    char **array = my_str_to_word_array(bins, ':');
    char *stock = NULL;
    int i = 0;

    for (; array[i] != NULL; i++) {
        array[i] = my_strcat(array[i], "/");
        array[i] = my_strcat(array[i], command[0]);
        if (access(array[i], X_OK) == 0) {
            execve(array[i], command, env);
            free_array(array);
            return 0;
        }
    }
    if (execve(array[i - 1], command, env) == -1 && my_strcmp(*command, "exit") != 0) {
        previous(command);
        exit(84);
    }
    return 0;
}

void create_child(char **env, char **command)
{
    pid_t f = fork();

    if (f == -1) {
        perror("No process");
    }
    if (f == 0) {
        exec(*command, env);
        etablish(env, command);
        quit(*command);
    } else {
        wait(NULL);
    }
}
