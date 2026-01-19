/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstarek <lstarek@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 15:21:40 by lstarek           #+#    #+#             */
/*   Updated: 2025/12/27 15:24:12 by lstarek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack *a)
{
	swap(a);
	ft_printf("sa\n");
}

void	sb(t_stack *b)
{
	swap(b);
	ft_printf("sb\n");
}

void	pa(t_stack *a, t_stack *b)
{
	transfer(a, b);
	if (!a->is_helper && !b->is_helper)
		ft_printf("pa\n");
}

void	pb(t_stack *a, t_stack *b)
{
	transfer(b, a);
	if (!a->is_helper && !b->is_helper)
		ft_printf("pb\n");
}
