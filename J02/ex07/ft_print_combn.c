/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 08:48:47 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/06 10:42:01 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_print(int n);

void	ft_print_combn(int n)
{
	int		i[10];
	int		j;

	j = -1;
	while (++j <= 9)
	{
		i[j] = 0;
	}
	while (++i[0] <= 9)
	{
		j = -1;
		while (++j < n)
		{
			ft_putchar(i[0] + '0');
			ft_print(n - 1);
		}
	}
}

void	ft_print(int n)
{
	int		i;

	if (n == 0)
	{
		ft_putchar(' ');
	}
	else
	{
		i = -1;
		while (++i <= 9)
		{
			ft_putchar(i + '0');
			ft_print(n - 1);
		}
	}
}
