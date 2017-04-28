# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtan <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/22 18:46:55 by mtan              #+#    #+#              #
#    Updated: 2017/04/22 18:46:57 by mtan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC = main.c numbers.c calculate.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -I. -c $(SRC)
	gcc $(OBJ) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
