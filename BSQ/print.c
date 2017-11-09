/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 09:39:29 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/26 16:45:18 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serge_swag.h"

void	ft_print_bsq(t_bsq *bsq)
{
	int		i;
	int		j;

	i = -1;
	while (++i < bsq->h)
	{
		j = -1;
		while (++j < bsq->w)
		{
			if (bsq->bsq[i][j] == SQUARE_VALUE)
				ft_putchar(bsq->signe[SQUARE_INDEX]);
			else if (bsq->bsq[i][j] == OBS)
				ft_putchar(bsq->signe[OBS]);
			else
				ft_putchar(bsq->signe[VIDE]);
		}
		ft_putchar('\n');
	}
}
