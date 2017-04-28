# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtan <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/17 23:24:07 by mtan              #+#    #+#              #
#    Updated: 2017/04/17 23:24:09 by mtan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
LDIR = ./includes/

SRC = main.c print.c operations.c

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
