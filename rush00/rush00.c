/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 09:46:09 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/08 10:34:53 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_first_line(int x)
{
	int		i;

	i = -1;
	while (++i < x)
	{
		if (i == 0 || i == (x - 1))
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	ft_putchar('\n');
}

void	print_middle_line(int x)
{
	int		i;

	i = -1;
	while (++i < x)
	{
		if (i == 0 || i == (x - 1))
			ft_putchar('|');
		else
			ft_putchar(' ');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		i;

	if (x >= 1 || y >= 1)
	{
		i = -1;
		while (++i < y)
		{
			if (i == 0 || i == y - 1)
				print_first_line(x);
			else
				print_middle_line(x);
		}
	}
}
