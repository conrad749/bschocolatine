##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## Makefile
##

CC	=	epiclang

NAME	=	robot-factory

SRC	=	src/usage.c\
		src/main.c\
		src/parse.c\
		src/store_file.c\
		src/writer.c\
		basic/my_strcmp.c\
		basic/my_strncmp.c\
		basic/my_strcpy.c\
		basic/my_strdup.c\
		basic/my_strlen.c\
		basic/free_array.c\
		basic/my_str_to_word_array.c\
		basic/my_strcat.c\
		basic/my_putstr.c\
		basic/clean_str.c

tests	=	test/tests.c
SRC2	=	basic/*.c

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):
	$(CC) $(SRC) -o $(NAME) -g3

clean:
	rm -f $(OBJ)
	rm -f *~
fclean:	clean
	rm -f $(NAME)
	rm -f unit*

re: fclean all

units_tests: fclean
	$(CC) $(tests) $(SRC2) -o units_tests --coverage -lcriterion -g3
tests_run: units_tests
	./units_tests
code:
	coding-style . .
