# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/18 09:09:13 by tnicolas          #+#    #+#              #
#    Updated: 2017/07/23 21:26:33 by tnicolas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRC = mainJ11.c \
	  J11/ex*/*.c

O_FILE = *.o

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(SRC) $(FLAGS)
	gcc -o $(NAME) $(O_FILE)

clean:
	/bin/rm -f $(O_FILE)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

noflags: fclean
	gcc -c $(SRC)
	gcc -o $(NAME) $(O_FILE)
