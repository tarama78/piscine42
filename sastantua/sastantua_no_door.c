/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 08:53:58 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/08 15:12:59 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_putchar(char c);

int		calc_width(int size, int floor, int width[])
{
	int		i;
	int		ret;

	width[0] = -3;
	i = -1;
	while (++i < size)
	{
		width[0] += 2 * (i + 3) + 4;
		if (i != 0)
		{
			if (i % 2 == 0)
				width[0] += i - 2;
			else
				width[0] += i - 1;
		}
		if (i == floor)
			ret = width[0];
	}
	width[1] = width[0] / 2 + 1;
	return (ret);
}

void	print_floor(int size, int floor, int width[])
{
	int		width_floor;
	int		start_print;
	int		i;
	int		j;

	width_floor = calc_width(size, floor, width);
	width_floor -= 2 * (floor + 2);
	start_print = width[1] - width_floor / 2 - 1;
	//	printf("width[0] %d\nwidth[1] %d\nwidth_floor %d\nstart_print %d\nfloor %d\n",
	//			width[0], width[1], width_floor, start_print, floor);
	i = -1;
	while (++i < (floor + 3))
	{
		j = -1;
		while (++j < start_print)
		{
			ft_putchar(' ');
		}
		j = -1;
		while (++j < width_floor)
		{
			if (j == 0)
				ft_putchar('/');
			else if (j == (width_floor - 1))
				ft_putchar('\\');
			else
				ft_putchar('*');
		}
		ft_putchar('\n');
		start_print--;
		width_floor += 2;
	}
}

void	sastantua(int size)
{
	int		width[2];
	int		i;

	if (size > 0)
	{
		calc_width(size, 0, width);
		i = -1;
		while (++i < size)
		{
			print_floor(size, i, width);
		}
	}
}
