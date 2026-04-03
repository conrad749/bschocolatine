##
## EPITECH PROJECT, 2026
## MAKEFILE
## File description:
## makefile
##

NAME	=	mysh

SRC	=	basic/my_putchar.c\
		basic/my_putstr.c\
		basic/my_putnbr.c\
		basic/print_args.c\
		basic/my_strcmp.c\
		basic/my_strncmp.c\
		basic/my_strlen.c\
		basic/end_str.c\
		basic/my_str_to_word_array.c\
		basic/free_array.c\
		basic/my_strcat.c\
		basic/my_strstr.c\
		get_path.c\
		find_path.c\
		shell.c

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):
	clang $(SRC) -o $(NAME) -g3

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: fclean all
