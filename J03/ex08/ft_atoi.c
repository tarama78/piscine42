/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 18:34:00 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/06 20:33:57 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	negative(char *str, int *neg)
{
	if (str[0] == '-')
		*neg = 1;
	else
		*neg = 0;
}

int		ft_atoi(char *str)
{
	int		ret;
	int		ret_v2;
	int		i[2];
	int		size;
	int		neg;

	negative(str, &neg);
	size = -1;
	while (str[++size] != '\0')
		;
	ret = 0;
	i[0] = -1;
	while (++i[0] < size)
		if (str[i[0]] != '-')
		{
			ret_v2 = (int)(str[i[0]] - '0');
			i[1] = -1;
			while (++i[1] < (size - i[0] - 1))
				ret_v2 *= 10;
			if (neg)
				ret -= ret_v2;
			else
				ret += ret_v2;
		}
	return (ret);
}
