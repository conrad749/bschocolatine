/*
** EPITECH PROJECT, 2026
** STORE_FILE.C
** File description:
** store_file
*/

#include "../include/robot.h"

void intermediate(char *line, char *clean, FILE *file)
{
    free(clean);
    free(line);
    fclose(file);
}

char *fill_name(char *o_filename, char *comparer)
{
    FILE *file = fopen(o_filename, "r");
    f_g_t g = {0};
    char **arr = NULL;
    char *stocke = NULL;
    char *clean = NULL;

    if (file == NULL)
        return NULL;
    while (getline(&(g.line), &(g.n), file) != -1) {
        clean = clean_str(g.line);
        arr = my_str_to_word_array(clean, '"');
        if (my_strncmp(arr[0], comparer, my_strlen(comparer)) == 0) {
            stocke = my_strdup(arr[1]);
            free_array((void **)arr);
            break;
        }
        free_array((void **)arr);
    }
    intermediate(g.line, clean, file);
    return stocke;
}

header_t *fill_header(char *o_filename)
{
    FILE *file = fopen(o_filename, "r");
    header_t *head = malloc(sizeof(header_t));
    struct stat st;
    char *name = fill_name(o_filename, NAME_CMD_STRING);
    char *cmt = fill_name(o_filename, COMMENT_CMD_STRING);

    if (head == NULL || file == NULL)
        return NULL;
    if (stat(o_filename, &st) == -1 || st.st_size == 0)
        return NULL;
    head->magic = COREWAR_EXEC_MAGIC;
    my_strcpy(name, head->prog_name);
    free(name);
    head->prog_size = st.st_size;
    my_strcpy(cmt, head->comment);
    free(cmt);
    fclose(file);
    return head;
}
