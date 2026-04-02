##
## EPITECH PROJECT, 2026
## MAKEFILE
## File description:
## makefile
##

NAME	=	106bombyx

SRC		=	bombyx.c
UNIT	=	uniit_test/test.c

OBJ		=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):
	epiclang $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean:	clean
	rm -f $(OBJ)

re:	fclean all

unit_tests:	fclean all
	epiclang $(UNIT) -o $(NAME)

tests_run: unit_tests
	./unit_tests
