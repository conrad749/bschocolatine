/*
** EPITECH PROJECT, 2026
** MY_sTRNCMP.C
** File description:
** my_Strncmp
*/

#include "../include/my.h"

int my_strncmp(char *s1, char *s2, int n)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0' && i < n) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    if (i < n)
        return (s1[i] - s2[i]);
    return 0;
}

/*int main()
{
    int i = strncmp("Papava au champ", "Pap", 3);
    int j = my_strncmp("Papava au champ", "Pap", 3);
    printf("i:%d\n", i);
    printf("j:%d\n", j);
    }*/
