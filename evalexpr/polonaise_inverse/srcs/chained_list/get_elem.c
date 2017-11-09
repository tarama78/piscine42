/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_elem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 09:29:47 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/22 17:14:39 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/incl.h"

t_stack		*ft_get_elem(t_stack **begin_list)
{
	t_stack		*ret;
	if (*begin_list)
	{
		ret = *begin_list;
		*begin_list = (*begin_list)->next;
		return (ret);
	}
	else
		return (0);
}
