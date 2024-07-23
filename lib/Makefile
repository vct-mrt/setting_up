##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## desc
##

SRC = my_strlen.c	\
	openfile.c		\
	free_tab.c		\
	put_tab.c		\
	my_strdup.c		\
	len_tab.c		\
	my_putstr.c		\

OBJ = $(SRC:.c=.o)

NAME = libmy.a

all: $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all
