/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 18:04:12 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/26 23:02:53 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "serge_swag.h"

void	ft_fruit(t_bsq *bsq)
{
	int		i;

	i = -1;
	while (++i < bsq->h)
	{
		free(bsq->bsq[i]);
	}
	free(bsq->bsq);
}

int		get_map_and_check_validity(const char *pathname, char **map, t_bsq *bsq)
{
	int		fd;

	if ((fd = open(pathname, O_RDONLY)) == -1 && pathname != 0)
		return (ERROR);
	if (pathname == 0)
	{
		if (get_fd_content(STDIN_FILENO, map) == 0)
			return (ERROR);
	}
	else if (get_fd_content(fd, map) == 0)
		return (ERROR);
	if (close(fd) == -1 && pathname != 0)
		return (ERROR);
	if (get_map_infos(*map, bsq) == ERROR || bsq->h == 0)
		return (ERROR);
	if (check_nb_lines(*map, bsq->h) == ERROR)
		return (ERROR);
	if (check_lines_have_same_length(*map, bsq->h, bsq) == ERROR)
		return (ERROR);
	if (check_characters_used_in_map(*map, bsq) == ERROR)
		return (ERROR);
	if (stock_map_dans_grille(bsq, *map, -1, -1) == ERROR)
		return (ERROR);
	return (SUCCESS);
}

void	ft_cleanstars(char *pathname)
{
	t_bsq	bsq;
	char	*map;

	map = NULL;
	if (get_map_and_check_validity(pathname, &map, &bsq) == ERROR)
	{
		ft_putstr(MSG_ERROR);
		free(map);
		return ;
	}
	free(map);
	if (bsq.w == 1 || bsq.h == 1)
		ft_single_line(&bsq);
	else
		ft_bsq(&bsq);
	ft_print_bsq(&bsq);
	ft_fruit(&bsq);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc == 1)
		ft_cleanstars(0);
	else
	{
		while (i < argc)
		{
			if (i != 1)
				ft_putchar('\n');
			ft_cleanstars(argv[i]);
			++i;
		}
	}
	return (EXIT_SUCCESS);
}
