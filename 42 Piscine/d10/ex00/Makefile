# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtan <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/17 14:30:49 by mtan              #+#    #+#              #
#    Updated: 2017/04/17 15:59:10 by mtan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror
OPTIONS = -c -I$(IDIR)

NAME = libft.a
IDIR = ./includes/

PATH_SRC = ./srcs/
SRC = $(PATH_SRC)ft_putchar.c $(PATH_SRC)ft_putstr.c $(PATH_SRC)ft_strcmp.c \
		$(PATH_SRC)ft_strlen.c $(PATH_SRC)ft_swap.c

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(OPTIONS) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	rm $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
