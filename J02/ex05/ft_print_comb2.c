/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 15:10:35 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/05 22:14:25 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_print_nb(int *n);

void	ft_print_comb2(void)
{
	int		n[4];

	n[0] = -1;
	while (++n[0] <= 9)
	{
		n[1] = -1;
		while (++n[1] <= 9)
		{
			n[2] = -1;
			while (++n[2] <= 9)
			{
				n[3] = -1;
				while (++n[3] <= 9)
				{
					ft_print_nb(n);
				}
			}
		}
	}
}

void	ft_print_nb(int *n)
{
	if ((n[0] < n[2]) || (n[0] == n[2] && n[1] < n[3]))
	{
		ft_putchar(n[0] + 48);
		ft_putchar(n[1] + 48);
		ft_putchar(' ');
		ft_putchar(n[2] + 48);
		ft_putchar(n[3] + 48);
		if (!(n[0] == 9 && n[1] == 8 && n[2] == 9 && n[3] == 9))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}
