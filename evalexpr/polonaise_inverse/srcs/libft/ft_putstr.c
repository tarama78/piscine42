/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 10:17:11 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/22 12:47:30 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/incl.h"

void	ft_putstr(char *str, int newline)
{
	int		i;

	i = -1;
	while (str[++i] != '\0')
		ft_putchar(str[i]);
	while (--newline >= 0)
		ft_putchar('\n');
}
