# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/18 09:09:13 by tnicolas          #+#    #+#              #
#    Updated: 2017/07/18 17:57:39 by tnicolas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do_op

SRC = srcs/do_op.c \
	  srcs/calcule.c

O_FILE = do_op.o \
		 calcule.o

INCL = includes

LIB = libft.a

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(SRC) -I $(INCL) $(FLAGS)
	gcc -o $(NAME) $(O_FILE) $(LIB)

clean:
	/bin/rm -f $(O_FILE)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
