NAME = ft_advanced_do-op
LDIR = ./includes/

SRC = main.c operations.c ft.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I$(LDIR) -c $(SRC)
	gcc $(OBJ) -o $(NAME)
clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
