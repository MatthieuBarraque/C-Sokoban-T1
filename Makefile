##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC	=	src/main.c \
		src/error.c \
		src/my_putchar.c \
		src/my_putstr.c \
		src/my_strlen.c \
		src/open_map.c \
		src/collision.c \
		src/game.c \
		src/place.c \
		src/move.c \
		src/col_wall.c \
		src/check.c \

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -lncurses

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all
