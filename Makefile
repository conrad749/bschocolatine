##
## EPITECH PROJECT, 2026
## MAKEFILE
## File description:
## makefile
##

NAME	=	bin

SRC	=	main.c

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):
	clang $(SRC) -o $(NAME)
