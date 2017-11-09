/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 12:09:41 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/19 18:28:36 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/incl.h"

void	ft_create_table(int (*tab[NB_OP])(int, int), char eq_fonct[NB_OP])
{
	eq_fonct[0] = '+';
	tab[0] = &ft_add;
	eq_fonct[1] = '-';
	tab[1] = &ft_sub;
	eq_fonct[2] = '*';
	tab[2] = &ft_mul;
	eq_fonct[3] = '/';
	tab[3] = &ft_div;
	eq_fonct[4] = '%';
	tab[4] = &ft_mod;
}

void	ft_calc(int (*tab[NB_OP])(int, int), char eq_fonct[4], int nb[2],
		char op)
{
	int		i;

	i = -1;
	while (eq_fonct[++i] != op && i < NB_OP)
		;
	if (eq_fonct[i] == op)
	{
		if (eq_fonct[i] == '/' && nb[1] == 0)
			ft_putstr("Stop : division by zero");
		else if (eq_fonct[i] == '%' && nb[1] == 0)
			ft_putstr("Stop : modulo by zero");
		else
			ft_putnbr(tab[i](nb[0], nb[1]));
		ft_putchar('\n');
	}
	else
		ft_putstr("0\n");
}

int		main(int ac, char **av)
{
	int		nb[2];
	int		(*tab[NB_OP])(int, int);
	char	eq_fonct[NB_OP];

	if (ac == 4)
	{
		nb[0] = ft_atoi(av[1]);
		nb[1] = ft_atoi(av[3]);
		ft_create_table(tab, eq_fonct);
		ft_calc(tab, eq_fonct, nb, av[2][0]);
	}
	return (0);
}
