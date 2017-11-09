/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex04.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 16:20:54 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/13 16:26:21 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "J08/ex04/ft_point.h"

void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int main(void)
{
	t_point point;

	set_point(&point);
	return (0);
}
