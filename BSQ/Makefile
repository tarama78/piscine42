# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/24 09:25:45 by tnicolas          #+#    #+#              #
#    Updated: 2017/07/26 23:03:36 by tnicolas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

C_FILES = main.c \
		  libft.c \
		  read.c \
		  print.c \
		  bsq.c \
		  get_map_and_check_validity.c \
		  single_line.c

OBJ = $(C_FILES:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(C_FILES) $(FLAGS)
	gcc -o $(NAME) $(OBJ) $(FLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
