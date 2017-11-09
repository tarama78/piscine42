/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 15:05:14 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/15 19:11:12 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# include <stdio.h>/////////////////////////////////////////////
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_cree_grille(int grille[9][9][2], char **av);
void	ft_print_grille(int grille[9][9][2]);
void	ft_sudoku(int grille[9][9][2]);
int		ft_fill_case(int grille[9][9][2], int *x, int *y);
int		ft_find_next(int grille[9][9][2], int *x, int *y);
int		ft_find_last(int grille[9][9][2], int *x, int *y);
int		ft_verif_case(int grille[9][9][2], int x, int y, int nb);

#endif
