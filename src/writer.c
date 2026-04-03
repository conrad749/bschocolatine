/*
** EPITECH PROJECT, 2026
** WRITER.C
** File description:
** writer.c
*/

#include "../include/robot.h"

void padding(FILE *file, int len, int taille)
{
    int c = 0;

    for (int i = taille; i < len; i++) {
        fwrite(&c, sizeof(int), 1, file);
    }
}

char *filename(char *main)
{
    char **array = my_str_to_word_array(main, '.');
    char *copy = NULL;

    if (array == NULL)
        return NULL;
    copy = my_strcat(array[0], ".cor");
    free_array((void **)array);
    return copy;
}

void writer(header_t *head, char *o_filename)
{
    char *name = filename(o_filename);
    FILE *file = fopen(name, "w");
    int i = 0;

    if (file == NULL)
        return;
    fwrite(&head->magic, sizeof(int), 1, file);
    fwrite(head->prog_name, my_strlen(head->prog_name), 1, file);
    padding(file, PROG_NAME_LENGTH, my_strlen(head->prog_name));
    fwrite(head->comment, my_strlen(head->comment), 1, file);
    padding(file, COMMENT_LENGTH, my_strlen(head->comment));
    free(head);
    free(name);
}

/* int main(int ac, char **av) */
/* { */
/*     header_t *head = fill_header(av[1]); */

/*     writer(head, av[1]); */
/* } */
