/*
** EPITECH PROJECT, 2026
** G-PSU-200-COT-2-1-minishell1-52
** File description:
** setenv
*/

#include "../include/my.h"

env_t *create(char *nom, char *val)
{
    env_t *env = (env_t *)malloc(sizeof(env_t));

    if (env == NULL)
        return NULL;
    env->name = my_strdup(nom);
    env->value = my_strdup(val);
    env->next = NULL;
    return env;
}

env_t *add(env_t **head, char *nom, char *val)
{
    env_t *ta = create(nom, val);
    env_t *last = NULL;

    if (*head == NULL) {
        *head = ta;
        return ta;
    }
    last = *head;
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = ta;
    return *head;
}

env_t *fill_link(char **env)
{
    int i = 0;
    char **ev = NULL;
    env_t *node = NULL;

    while (env[i] != NULL) {
        ev = my_str_to_word_array(env[i], '=');
        add(&node, ev[0], ev[1]);
        i++;
    }
    return node;
}

void my_setenv(env_t *n, char *nam, char *val)
{
    if (n == NULL) {
        return;
    }
    while (n->next != NULL) {
        if (strcmp(nam, n->name) == 0) {
            free(n->value);
            n->value = my_strdup(val);
            printf("fait\n");
        }
        n = n->next;
    }
}

void free_list(env_t *env)
{
    env_t *tmp = NULL;

    while (env != NULL) {
        tmp = env;
        env = env->next;
        free(tmp->name);
        free(tmp->value);
        free(tmp);
    }
}
int main(int ac, char **av, char **env)
{
    env_t *evi = NULL;
    evi = fill_link(env);
    my_setenv(evi, av[1], av[2]);
    free_list(evi);
}
