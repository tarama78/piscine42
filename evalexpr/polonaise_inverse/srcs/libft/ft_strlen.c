/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 10:20:02 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/22 12:27:02 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/incl.h"

int		ft_strlen(char *str)
{
	int		size;

	size = -1;
	while (str[++size] != '\0')
		;
	return (size);
}