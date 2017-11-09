/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   single_line.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyfermie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 15:10:17 by cyfermie          #+#    #+#             */
/*   Updated: 2017/07/26 16:45:32 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serge_swag.h"

void	ft_single_line(t_bsq *bsq)
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
				bsq->coord_square[0] = i;
				bsq->coord_square[1] = j;
				bsq->max = 1;
				return ;
			}
		}
	}
}
