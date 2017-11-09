/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 12:16:46 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/22 12:26:04 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/incl.h"

int		ft_atoi(char *str)
{
	int				neg;
	unsigned int	result;

	while (*str == '\n' || *str == '\t' || *str == '\v' || *str == '\f'
			|| *str == '\r' || *str == ' ' || *str == '\0')
		str++;
	if (*str == '\0')
		return (0);
	neg = 0;
	if ((*str == '+') && *(str + 1) >= '0' && *(str + 1) <= '9')
		neg = 0;
	else if (*str >= '0' && *str <= '9')
	{
		str--;
		neg = 0;
	}
	else if ((*str == '-') && *(str + 1) >= '0' && *(str + 1) <= '9')
		neg = 1;
	else
		return (0);
	result = 0;
	while (*(++str) >= '0' && *str <= '9')
		result = result * 10 + *str - '0';
	return (neg == 0) ? result : -result;
}
