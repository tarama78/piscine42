/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_elem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 09:27:48 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/22 17:01:11 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/incl.h"

void	ft_add_elem(t_stack **begin_list, int nb)
{
	t_stack		*new;

	if ((new = malloc(sizeof(*new))) == 0)
		return ;
	new->nb = nb;
	new->next = *begin_list;
	*begin_list = new;
}
