/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   incl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 09:14:08 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/22 18:20:27 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCL_H
# define INCL_H

# include <unistd.h>
# include <stdlib.h>
#include <stdio.h>//////////////////////////////////////////

typedef struct		s_stack
{
	int				nb;
	struct s_stack	*next;
}					t_stack;

void				ft_putchar(char c);
void				ft_putnbr(int nb int newline);
void				ft_putstr(char *str, int newline);
void				ft_swap(int *a, int *b);
int					ft_strcmp(char *s1, char *s2);
int					ft_strlen(char *str);
int					ft_atoi(char *str);
char				*ft_strcpy(char *dest, char *src);

void				ft_malloc_string(char **tab, char *str, int i, int string);
void				ft_fill_string(int i, int string, char *str, char **tab);
char				**ft_split_whitespaces_v2(char *str, int *nb_word);

void				ft_add(t_stack **stack);
void				ft_sub(t_stack **stack);
void				ft_mul(t_stack **stack);
void				ft_div(t_stack **stack);
void				ft_mod(t_stack **stack);

t_stack				*ft_get_elem(t_stack **begin_list);
void				ft_add_elem(t_stack **begin_list, int nb);

void				ft_forest(t_stack **stack, char *calc);
int					eval_expr(char *str);
int					ft_nrp(char *str);

#endif
