/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map_and_check_validity.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyfermie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 11:26:13 by cyfermie          #+#    #+#             */
/*   Updated: 2017/07/26 23:28:28 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "serge_swag.h"

int		get_map_infos(char *map, t_bsq *bsq)
{
	int		i;

	i = 0;
	while (map[i] != '\n' && map[i] != '\0')
		i++;
	if (map[i] == '\0' || i < 4)
		return (ERROR);
	else
	{
		if (map[i - 3] == map[i - 2])
			return (ERROR);
		(bsq->signe)[VIDE] = map[i - 3];
		(bsq->signe)[OBS] = map[i - 2];
		(bsq->signe)[SQUARE_INDEX] = map[i - 1];
		map[i - 3] = '\0';
		bsq->h = ft_atoi(map);
		map[i - 3] = (bsq->signe)[OBS];
	}
	return (SUCCESS);
}

int		check_nb_lines(const char *map, int nb_lines_indicated)
{
	int		real_nb_lines;

	real_nb_lines = 0;
	while (*map != '\n' && *map != '\0')
		map++;
	if (*map == '\0')
		return (ERROR);
	map += 1;
	while (*map != '\0')
	{
		if (*map == '\n')
			real_nb_lines++;
		++map;
	}
	if (real_nb_lines != nb_lines_indicated)
		return (ERROR);
	return (SUCCESS);
}

int		check_lines_have_same_length(const char *map, int nb_lines, t_bsq *bsq)
{
	int		i;
	int		size_first_line;
	int		size_line_tmp;

	while (*map != '\n')
		map++;
	map += 1;
	size_first_line = 0;
	while (*map++ != '\n')
		size_first_line++;
	i = 0;
	while (i < nb_lines - 1)
	{
		size_line_tmp = 0;
		while (*map++ != '\n')
			size_line_tmp++;
		if (size_line_tmp != size_first_line)
			return (ERROR);
		i++;
	}
	bsq->w = size_first_line;
	return (SUCCESS);
}

int		check_characters_used_in_map(const char *map, t_bsq *bsq)
{
	while (*map != '\n')
		map++;
	map++;
	if (*map != (bsq->signe)[OBS] && *map != (bsq->signe)[VIDE])
		return (ERROR);
	while (*map != '\0')
	{
		if (*map != (bsq->signe)[OBS] && *map != (bsq->signe)[VIDE]
				&& *map != '\n')
			return (ERROR);
		map++;
	}
	return (SUCCESS);
}

int		stock_map_dans_grille(t_bsq *bsq, const char *map, int i, int j)
{
	while (*map != '\n')
		++map;
	++map;
	if ((bsq->bsq = malloc(sizeof(int *) * (bsq->h))) == NULL)
		return (ERROR);
	while (++i < bsq->h)
	{
		if ((bsq->bsq[i] = malloc(sizeof(int) * (bsq->w))) == NULL)
			return (ERROR);
		j = -1;
		while (++j < bsq->w)
		{
			if (*map == bsq->signe[VIDE])
				bsq->bsq[i][j] = VIDE;
			else if (*map == bsq->signe[OBS])
				bsq->bsq[i][j] = OBS;
			map++;
		}
		map++;
	}
	return (SUCCESS);
}
