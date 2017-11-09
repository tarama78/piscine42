/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serge_swag.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 16:44:07 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/26 22:55:34 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERGE_SWAG_H
# define SERGE_SWAG_H

# include <stdlib.h>

# define MSG_ERROR "map error\n"
# define ERROR 0
# define SUCCESS 1
# define OBS 0
# define VIDE 1
# define SQUARE_INDEX 2
# define SQUARE_VALUE -1

typedef struct		s_bsq
{
	char			signe[3];
	int				**bsq;
	int				w;
	int				h;
	int				max;
	int				coord_square[2];
}					t_bsq;

void				ft_putchar(char c);
void				ft_putstr(char *str);
int					ft_strlen(char *str);
char				*ft_strncat(char *dest, char *src, int nb);
int					ft_atoi(char *str);

size_t				get_fd_content(int fd, char **buf);

int					get_map_infos(char *map, t_bsq *bsq);
int					check_nb_lines(const char *map, int nb_lines_indicated);
int					check_lines_have_same_length(const char *map,
												int nb_lines, t_bsq *bsq);
int					check_characters_used_in_map(const char *map, t_bsq *bsq);
int					stock_map_dans_grille(t_bsq *bsq, const char *map,
												int i, int j);

void				ft_single_line(t_bsq *bsq);

int					ft_give_value(t_bsq *bsq, int i, int j);
void				ft_only_one_square(t_bsq *bsq);
void				ft_bsq(t_bsq *bsq);

void				ft_print_bsq(t_bsq *bsq);

void				ft_fruit(t_bsq *bsq);
int					get_map_and_check_validity(const char *pathname, char **map,
												t_bsq *bsq);
void				ft_cleanstars(char *pathname);

#endif
