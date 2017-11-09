/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 17:57:08 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/26 22:23:57 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "serge_swag.h"

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, sizeof(c));
}

void	ft_putstr(char *str)
{
	write(STDOUT_FILENO, str, ft_strlen(str));
}

int		ft_strlen(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

char	*ft_strncat(char *dest, char *src, int nb)
{
	char *ret;

	ret = dest;
	while (*dest)
		++dest;
	while (*src && nb)
	{
		*dest = *src;
		++src;
		++dest;
		--nb;
	}
	*dest = 0;
	return (ret);
}

int		ft_atoi(char *str)
{
	int		ret;
	int		neg;

	ret = 0;
	neg = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\f' || *str == '\r')
		++str;
	if (*str == '-')
		neg = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str >= '0' && *str <= '9')
	{
		ret = ret * 10;
		ret = ret + *str - 48;
		++str;
	}
	return (ret * (neg));
}
