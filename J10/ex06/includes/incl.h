/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   incl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 12:10:24 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/20 08:45:15 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCL_H
# define INCL_H

# include "libft_incl.h"
# define NB_OP 5

int		ft_add(int nb1, int nb2);
int		ft_sub(int nb1, int nb2);
int		ft_mul(int nb1, int nb2);
int		ft_div(int nb1, int nb2);
int		ft_mod(int nb1, int nb2);
void	ft_create_table(int (*tab[NB_OP])(int, int), char eq_fonct[5]);
void	ft_calc(int (*tab[NB_OP])(int, int), char eq_fonct[4], int nb[2],
		char op);

#endif
