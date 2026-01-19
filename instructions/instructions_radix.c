/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_radix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstarek <lstarek@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 15:21:40 by lstarek           #+#    #+#             */
/*   Updated: 2026/01/18 14:26:33 by lstarek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	radix_pa(t_stack *a, t_stack *b, t_stack *a_i, t_stack *b_i)
{
	pa(a, b);
	pa(a_i, b_i);
}

void	radix_pb(t_stack *a, t_stack *b, t_stack *a_i, t_stack *b_i)
{
	pb(a, b);
	pb(a_i, b_i);
}

void	radix_ra(t_stack *a, t_stack *a_i)
{
	ra(a);
	ra(a_i);
}
