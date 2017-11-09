/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 15:00:13 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/15 21:56:54 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

int		ft_cree_grille(int grille[9][9][2], char **av)
{
	int		i;
	int		j;

	i = -1;
	while (++i < 9)
	{
		j = -1;
		while (++j < 9)
		{
			if (av[i + 1][j] == '.')
			{
				grille[i][j][0] = 0;
				grille[i][j][1] = 0;
			}
			else if (av[i + 1][j] >= '1' && av[i + 1][j] <= '9')
			{
				grille[i][j][0] = av[i + 1][j] - '0';
				grille[i][j][1] = -1;
			}
			else
				return (0);
		}
	}
	return (1);
}

void	ft_print_grille(int grille[9][9][2])
{
	int		i;
	int		j;

	i = -1;
	while (++i < 9)
	{
		j = -1;
		while (++j < 9)
		{
			ft_putchar(grille[i][j][0] + '0');
			if (j != 8)
				ft_putchar(' ');
			else
				ft_putchar('\n');
		}
	}
}

int		main(int ac, char **av)
{
	int		grille[9][9][2];

	if (ac == 10)
	{
		if (ft_cree_grille(grille, av))
		{
			ft_sudoku(grille);
			ft_print_grille(grille);
		}
		else
			ft_putstr("Error\n");
	}
	else
		ft_putstr("Error\n");
	return (0);
}
