NAME = ft_display_file

FLAGS = -Wall -Werror -Wextra

SRC = main.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -I. -c $(SRC)
	gcc $(FLAGS) $(OBJ) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
