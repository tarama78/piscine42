/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 12:06:07 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/09 12:16:04 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unsigned int	nb2;

	if (nb > 0)
	{
		if ((nb / 10) != 0)
			ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb2 = (unsigned int)(-nb);
		if (nb2 >= 10)
			ft_putnbr(nb2 / 10);
		ft_putchar(nb2 % 10 + 48);
	}
	else
		ft_putchar('0');
}
