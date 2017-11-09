/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 14:17:08 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/05 18:48:25 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	int		i;
	int		j;
	int		k;

	i = -1;
	while (++i <= 7)
	{
		j = 0 + i;
		while (++j <= 8)
		{
			k = 0 + j;
			while (++k <= 9)
			{
				ft_putchar(i + 48);
				ft_putchar(j + 48);
				ft_putchar(k + 48);
				if (!(i == 7 && j == 8 && k == 9))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
