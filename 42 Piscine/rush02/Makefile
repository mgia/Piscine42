# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olkovale <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/20 19:35:21 by olkovale          #+#    #+#              #
#    Updated: 2017/04/23 22:00:57 by olkovale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2
FILES = ft_print ft_str ft_str2 ft_rush0
SRC_DIR = srcs/
INC = includes/
SRCS = $(patsubst %, %.c, $(FILES))
BINS = $(patsubst %, %.o, $(FILES))
FLAGS = -g
#FLAGS = -Wall -Wextra -Werror

.PHONY: all compile clean fclean

all: $(NAME)

compile:
	gcc -I$(INC) $(FLAGS) -c $(patsubst %, $(SRC_DIR)%, $(SRCS))

$(NAME): compile
	gcc -o $(NAME) -I$(INC) $(FLAGS) $(BINS) $(SRC_DIR)main.c

clean:
	/bin/rm -f $(BINS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
