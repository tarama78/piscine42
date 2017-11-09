/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 15:01:11 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/15 22:06:10 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	ft_sudoku(int grille[9][9][2])
{
	int		x;
	int		y;
	int		continu;

	continu = 1;
	x = 0;
	y = -1;
	ft_find_next(grille, &x, &y);
	while (1)
	{
		if (ft_fill_case(grille, &x, &y) == 1)
		{
			if (ft_find_last(grille, &x, &y) == 0)
			{
				ft_putstr("Error\n");
				break ;
			}
			continu--;
		}
		else
		{
			continu++;
			if (ft_find_next(grille, &x, &y) == 0)
				break ;
		}
	}
}

int		ft_fill_case(int grille[9][9][2], int *x, int *y)
{
	while (grille[*x][*y][0] != 10)
	{
		grille[*x][*y][0] += 1;
		if (ft_verif_case(grille, *x, *y, grille[*x][*y][0]) == 0)
		{
			if (grille[*x][*y][0] == 9)
			{
				grille[*x][*y][0] = 0;
				return (1);
			}
		}
		else if (grille[*x][*y][0] != 10)
		{
			return (0);
		}
	}
	grille[*x][*y][0] = 0;
	return (1);
}

int		ft_find_next(int grille[9][9][2], int *x, int *y)
{
	*y += 1;
	if (*y == 9)
	{
		*y = 0;
//		if (x != 0)
			*x += 1;
		if (*x == 9)
			return (0);
	}
	while (grille[*x][*y][1] == -1)
	{
		*y += 1;
		if (*y == 9)
		{
			*y = 0;
			*x += 1;
		}
		if (*x >= 8 && *y >= 8)
			return (0);
	}
	return (1);
}

int		ft_find_last(int grille[9][9][2], int *x, int *y)
{
	*y -= 1;
	if (*y == -1)
	{
		*y = 8;
	//if (*x >= 0)
			*x -= 1;
		if (*x == -1)
			return (0);
	}
	while (grille[*x][*y][1] == -1)
	{
		*y -= 1;
		if (*y == -1)
		{
			*y = 8;
			*x -= 1;
			if (*x == -1)
				return (0);
		}
	//	if (*x < 0 && *y <= 0)
	//		return (0);
	}
	return (1);
}

int		ft_verif_case(int grille[9][9][2], int x, int y, int nb)
{
	int		i;
	int		j;

	i = -1;
	while (++i < 9)
		if (grille[x][i][0] == nb && i != y)
			return (0);
	i = -1;
	while (++i < 9)
		if (grille[i][y][0] == nb && i != x)
			return (0);
	i = x - x % 3;
	while (i < (x - x % 3 + 3))
	{
		j = y - y % 3;
		while (j < (y - y % 3 + 3))
		{
			if (grille[i][j][0] == nb && !(i == x && j == y))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
