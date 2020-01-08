##
## EPITECH PROJECT, 2019
## makefile
## File description:
## 105
##

NAME	=	105torus

SRC	=	src/main.c \
		src/torus.c \
		src/error_handling.c \
		src/display_help.c

CC	=	gcc

DEFLAGS	=	-W -Wextra -Wall -g3 -lm

CPPFLAGS	=	-I./include/

OBJ	=	$(SRC:.c=.o)

all	:	$(OBJ)
		$(CC) $(DEFLAGS) -o $(NAME) $(OBJ) $(CPPFLAGS)

clean	:
		clear
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)
		rm -f *#
		rm -f *~
		rm -f src/*~
		rm -f include/*~
		rm -f *.gcda
		rm -f *.gcno

re	:	fclean all

.PHONY	:	all clean fclean re
