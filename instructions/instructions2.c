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

void	rra(t_stack *a)
{
	rotate(a);
	if (!a->is_helper)
		ft_printf("rra\n");
}

void	rrb(t_stack *b)
{
	rotate(b);
	if (!b->is_helper)
		ft_printf("rrb\n");
}

void	ra(t_stack *a)
{
	rev_rotate(a);
	if (!a->is_helper)
		ft_printf("ra\n");
}

void	rb(t_stack *b)
{
	rotate(b);
	if (!b->is_helper)
		ft_printf("rb\n");
}
