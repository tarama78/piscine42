/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 10:51:27 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/22 19:16:27 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/incl.h"

void	ft_add(t_stack **stack)
{
	t_stack		*s1;
	t_stack		*s2;

	s1 = ft_get_elem(stack);
	s2 = ft_get_elem(stack);
	ft_add_elem(stack, (s2->nb + s1->nb));
	free(s1);
	free(s2);
}

void	ft_sub(t_stack **stack)
{
	t_stack		*s1;
	t_stack		*s2;

	s1 = ft_get_elem(stack);
	s2 = ft_get_elem(stack);
	ft_add_elem(stack, (s2->nb - s1->nb));
	free(s1);
	free(s2);
}

void	ft_mul(t_stack **stack)
{
	t_stack		*s1;
	t_stack		*s2;

	s1 = ft_get_elem(stack);
	s2 = ft_get_elem(stack);
	ft_add_elem(stack, (s2->nb * s1->nb));
	free(s1);
	free(s2);
}

void	ft_div(t_stack **stack)
{
	t_stack		*s1;
	t_stack		*s2;

	s1 = ft_get_elem(stack);
	s2 = ft_get_elem(stack);
	ft_add_elem(stack, (s2->nb / s1->nb));
	free(s1);
	free(s2);
}

void	ft_mod(t_stack **stack)
{
	t_stack		*s1;
	t_stack		*s2;

	s1 = ft_get_elem(stack);
	s2 = ft_get_elem(stack);
	ft_add_elem(stack, (s2->nb % s1->nb));
	free(s1);
	free(s2);
}
