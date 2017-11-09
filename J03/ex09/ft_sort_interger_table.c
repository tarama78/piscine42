/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_interger_table.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 20:40:42 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/06 21:17:15 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int		swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_sort_integer_table(int *tab, int size)
{
	int		i;
	int		j;

	j = -1;
	while (++j < size * 2)
	{
		i = size;
		while (--i > 0)
		{
			if (tab[i] < tab[i - 1])
			{
				ft_swap(&tab[i], &tab[i - 1]);
			}
		}
	}
}
