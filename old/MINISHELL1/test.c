/*
** EPITECH PROJECT, 2026
** 
** File description:
** 
*/

#include <string.h>
#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av, char **env)
{
    int i = 0;

    execve(av[1], av, env);
}
