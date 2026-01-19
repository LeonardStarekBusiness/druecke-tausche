/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstarek <lstarek@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:10:06 by lstarek           #+#    #+#             */
/*   Updated: 2026/01/18 13:56:40 by lstarek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_stack *stack, int num)
{
	if (stack->size >= stack->max_size)
		return ;
	stack->size++;
	stack->content[stack->size - 1] = num;
}

int	pop(t_stack *stack)
{
	int	top;

	if (stack->size < 1)
		return (0);
	top = stack->content[stack->size - 1];
	stack->content[stack->size - 1] = 0;
	stack->size--;
	return (top);
}
