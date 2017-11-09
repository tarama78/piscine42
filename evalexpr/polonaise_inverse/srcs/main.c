/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 09:13:31 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/22 19:16:26 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/incl.h"

void	ft_forest(t_stack **stack, char *calc)
{
	if (calc[0] == '+')
		ft_add(stack);
	else if (calc[0] == '-')
		ft_sub(stack);
	else if (calc[0] == '*')
		ft_mul(stack);
	else if (calc[0] == '/')
		ft_div(stack);
	else if (calc[0] == '%')
		ft_mod(stack);
	else if (calc[0] >= '0' && calc[0] <= '9')
		ft_add_elem(stack, ft_atoi(calc));
}

int		eval_expr(char *str)
{
	return (ft_nrp(str));
}

int		ft_nrp(char *str)
{
	t_stack		*stack;
	char		**tab;
	int			i;
	int			nb_word;

	stack = 0;
	tab = ft_split_whitespaces_v2(str, &nb_word);
	i = -1;
	while (++i < nb_word)
	{
		ft_forest(&stack, tab[i]);
	}
	return (ft_get_elem(&stack)->nb);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]), 0);
		ft_putchar('\n');
	}
	return (0);
}
