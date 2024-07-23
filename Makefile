##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## desc
##

SRC = 	main.c 					\
		src/put_x.c				\
		src/error.c				\
		src/display.c			\
		src/find_max.c			\
		src/setting_up.c		\
		src/reverse_demineur.c	\

OBJ = $(SRC:.c=.o)

NAME = setting_up

CPPFLAGS = -I include -I lib
LIBFLAGS = -L ./lib -lmy
WFLAGS =  -W -Wall -Wextra

all:	$(NAME)

$(NAME):	$(OBJ)
	$(MAKE) -C lib
	gcc -o $(NAME) $(OBJ) $(CPPFLAGS) $(LIBFLAGS) $(WFLAGS)

clean:
	$(MAKE) clean -C lib
	rm -f $(OBJ)

fclean: clean
	$(MAKE) fclean -C lib
	rm -f $(NAME)

debug: CPPFLAGS += -g3
debug: re clean

re:     fclean all
