/*
** EPITECH PROJECT, 2026
** BOMBYX.C
** File description:
** bombyx
*/

#include "my.h"

void usage(void)
{
    printf("USAGE\n");
    printf("    ./106bombyx n [k | i0 i1]\n");
    printf("\n");
    printf("DESCRIPTION\n");
    printf("    n       number of first generation individuals\n");
    printf("    k       growth rate from 1 to 4\n");
    printf("    i0      initial generation (included)\n");
    printf("    i1      final generation (included)\n");
}

int calcul_1(char *n0, char *k0)
{
    double n = atof(n0);
    double k = atof(k0);
    double p = 0.0;

    if (n <= 0 || k < 1 || k > 4)
        return 84;
    printf("1 %.2f\n", n);
    for (int i = 2; i <= 100; i++) {
        p = (k * n) * ((1000.0 - n) / 1000.0);
        printf("%d %.2f\n", i, p);
        n = p;
    }
    return 0;
}

int calcul_2(char *n0, char *c0, char *c1)
{
    double ni = atof(n0);
    int i0 = atoi(c0);
    int i1 = atoi(c1);
    double k = 0.0;
    double n = 0.0;

    if (ni <= 0 || i0 <= 0 || i1 <= i0)
        return 84;
    for (int step = 100; step <= 400; step++) {
        k = step / 100.0;
        n = ni;
        for (int i = 1; i <= i1; i++) {
            if (i >= i0)
                printf("%.2f %.2f\n", k, n);
            n = k * n * (1000.0 - n) / 1000.0;
        }
    }
    return 0;
}

int main(int ac, char **av)
{
    if (ac == 2 && strcmp(av[1], "-h") == 0) {
        usage();
        return 0;
    }
    if (ac != 3 && ac != 4)
        return 84;
    if (ac == 3)
        return calcul_1(av[1], av[2]);
    if (ac == 4)
        return calcul_2(av[1], av[2], av[3]);
    return 0;
}
