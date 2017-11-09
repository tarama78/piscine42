# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/18 09:09:13 by tnicolas          #+#    #+#              #
#    Updated: 2017/07/19 11:25:25 by tnicolas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c \
	  srcs/ft_strcmp.c \
	  srcs/ft_swap.c \
	  srcs/ft_putstr.c \
	  srcs/ft_strlen.c \
	  srcs/ft_atoi.c \
	  srcs/ft_putnbr.c \
	  srcs/ft_strcpy.c

INCL = includes

OBJ = ft_putchar.o \
	  ft_strcmp.o \
	  ft_swap.o \
	  ft_putstr.o \
	  ft_strlen.o \
	  ft_atoi.o \
	  ft_putnbr.o \
	  ft_strcpy.o

FLAGS = -Wall-Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(SRC) -I $(INCLUDES) $(FLAGS)
	ar rcs $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
