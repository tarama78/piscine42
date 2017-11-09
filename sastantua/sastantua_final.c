/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 08:53:58 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/08 21:16:46 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

/*
**	cette fonction permet de calculer la
*/

int		calc_width(int size, int floor, int width[])
{
	int		i;
	int		ret;

	width[0] = -3;
	i = -1;
	while (++i < size)
	{
		width[0] += 2 * (i + 3) + 4;
		if (i != 0)
		{
			if (i % 2 == 0)
				width[0] += i - 2;
			else
				width[0] += i - 1;
		}
		if (i == floor)
			ret = width[0];
	}
	width[1] = width[0] / 2 + 1;
	return (ret);
}

/*
**	catte fonction permet d'ecrire le bon charactere de la pyramide sans
**	compter les ' ' au debut
**
**	a[3]
**		a[0] = width_floor = largeur du sol
**		a[1] = coord y
**		a[2] = coord x
**	floor = etage courant (commence a 0)
**	size = taille (parametre donne a sastantua
*/

void	print(int a[], int floor, int size)
{
	if (a[2] == 0)
		ft_putchar('/');
	else if (a[2] == (a[0] - 1))
		ft_putchar('\\');
	else if (floor == size - 1)
		if (floor >= 4 && a[1] == (size + 2) / 2 + 1
				&& a[2] == a[0] / 2 + size / 2 - floor % 2 - 1)
			ft_putchar('$');
		else if (floor % 2 == 0 && a[1] >= 2)
			if (a[2] >= a[0] / 2 - size / 2
					&& a[2] <= a[0] / 2 + size / 2)
				ft_putchar('|');
			else
				ft_putchar('*');
		else if (floor % 2 == 1 && a[1] >= 3)
			if (a[2] >= a[0] / 2 - size / 2 + 1
					&& a[2] <= a[0] / 2 + size / 2 - 1)
				ft_putchar('|');
			else
				ft_putchar('*');
		else
			ft_putchar('*');
	else
		ft_putchar('*');
}

/*
**	cette fonction permet d'ecrire la pyramide a l'aide de print
**
**	width_floor = largeur du sol
**	start_print = endroit ou commence la pyramide (nombre d'espace sur la ligne)
*/

void	print_floor(int size, int floor, int width[], int i)
{
	int		width_floor;
	int		start_print;
	int		j;
	int		arg_print[3];

	width_floor = calc_width(size, floor, width);
	width_floor -= 2 * (floor + 2);
	start_print = width[1] - width_floor / 2 - 1;
	while (++i < (floor + 3))
	{
		j = -1;
		while (++j < start_print)
			ft_putchar(' ');
		j = -1;
		while (++j < width_floor)
		{
			arg_print[0] = width_floor;
			arg_print[1] = i;
			arg_print[2] = j;
			print(arg_print, floor, size);
		}
		ft_putchar('\n');
		start_print--;
		width_floor += 2;
	}
}

void	sastantua(int size)
{
	int		width[2];
	int		i;

	if (size > 0)
	{
		calc_width(size, 0, width);
		i = -1;
		while (++i < size)
		{
//			print_floor(size, i, width, -1);
		}
	}
}
