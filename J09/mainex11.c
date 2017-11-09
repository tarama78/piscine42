/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex11.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 07:04:47 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/14 07:07:10 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "J09/ex11/ft_perso.h"
int main()
{
	t_perso jack;
	jack.name = strdup("Jack");
	jack.life = 100.0;
	jack.age = 42;
	jack.profession = SAVE_THE_WORLD;
	return (0);
}
