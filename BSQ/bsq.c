/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 11:11:24 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/26 23:16:22 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serge_swag.h"
#include <stdlib.h>

int		ft_give_value(t_bsq *bsq, int i, int j)
{
	int		min;

	if (bsq->bsq[i][j] == 0)
		return (0);
	min = bsq->bsq[i][j - 1];
	if (bsq->bsq[i - 1][j - 1] < min)
		min = bsq->bsq[i - 1][j - 1];
	if (bsq->bsq[i - 1][j] < min)
		min = bsq->bsq[i - 1][j];
	return (min + 1);
}

void	ft_apply(t_bsq *bsq)
{
	int		i;
	int		j;

	i = bsq->coord_square[0] + 1;
	while (--i > bsq->coord_square[0] - bsq->max)
	{
		j = bsq->coord_square[1] + 1;
		while (--j > bsq->coord_square[1] - bsq->max)
			bsq->bsq[i][j] = SQUARE_VALUE;
	}
}

void	ft_only_one_square(t_bsq *bsq)
{
	int		i;
	int		j;

	i = -1;
	while (++i < bsq->h)
	{
		j = -1;
		while (++j < bsq->w)
		{
			if (bsq->bsq[i][j] == VIDE)
			{
				bsq->bsq[i][j] = SQUARE_VALUE;
				return ;
			}
		}
	}
}

void	ft_bsq(t_bsq *bsq)
{
	int		i;
	int		j;

	bsq->max = 0;
	i = 0;
	while (!(j = 0) && ++i < bsq->h)
	{
		while (++j < bsq->w)
		{
			bsq->bsq[i][j] = ft_give_value(bsq, i, j);
			if (bsq->bsq[i][j] > bsq->max)
			{
				bsq->coord_square[0] = i;
				bsq->coord_square[1] = j;
				bsq->max = bsq->bsq[i][j];
			}
		}
	}
	if (bsq->max == 0 || bsq->max == 1)
		ft_only_one_square(bsq);
	else
		ft_apply(bsq);
}
