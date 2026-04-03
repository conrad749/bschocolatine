/*
** EPITECH PROJECT, 2026
** TESTS.C
** File description:
** tests
*/

#include "../include/robot.h"

Test(my_strcmp, verification)
{
    cr_assert_eq(my_strcmp("papa", "papa"), 0, "papa = papa");
    cr_assert_eq(my_strcmp("pa", "papa"), -112);
    cr_assert_eq(my_strcmp("papa", "pa"), 112);
}

Test(my_strdup, verification)
{
    cr_assert_str_eq(my_strdup("papa"), "papa");
}
