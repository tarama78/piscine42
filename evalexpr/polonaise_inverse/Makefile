# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/22 08:55:52 by tnicolas          #+#    #+#              #
#    Updated: 2017/07/22 14:50:21 by tnicolas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

C_FILES = srcs/libft/ft_putchar.c \
		 srcs/libft/ft_putstr.c \
		 srcs/libft/ft_putnbr.c \
		 srcs/libft/ft_strlen.c \
		 srcs/libft/ft_strcmp.c \
		 srcs/libft/ft_strcpy.c \
		 srcs/libft/ft_atoi.c \
		 srcs/libft/ft_swap.c \
		 srcs/chained_list/add_elem.c \
		 srcs/chained_list/get_elem.c \
		 srcs/ft_split_whitespaces_v2.c \
		 srcs/calc.c \
		 srcs/main.c

INCL = includes

OBJ = ft_putchar.o \
	  ft_putstr.o \
	  ft_putnbr.o \
	  ft_strlen.o \
	  ft_strcmp.o \
	  ft_strcpy.o \
	  ft_atoi.o \
	  ft_swap.o \
	  add_elem.o \
	  get_elem.o \
	  ft_split_whitespaces_v2.o \
	  calc.o \
	  main.o


FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(C_FILES) -I $(INCL) $(FLAGS)
	gcc -o $(NAME) $(OBJ) $(FLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

re_noflags: fclean
	gcc -c $(C_FILES) -I $(INCL)
	gcc -o $(NAME) $(OBJ)

