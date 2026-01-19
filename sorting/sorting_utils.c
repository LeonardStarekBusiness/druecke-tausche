/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstarek <lstarek@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 15:07:37 by lstarek           #+#    #+#             */
/*   Updated: 2026/01/18 13:57:52 by lstarek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_sorted(t_stack a)
{
	int	i;
	int	prev;

	prev = a.content[0];
	i = 1;
	while (i < a.size)
	{
		if (a.content[i] > prev)
			return (0);
		prev = a.content[i];
		i++;
	}
	return (1);
}

t_element	find_smallest(t_stack *a)
{
	int			i;
	t_element	smallest;

	i = 0;
	smallest.index = 0;
	smallest.value = a->content[0];
	while (i < a->size)
	{
		if (a->content[i] < a->content[smallest.index])
		{
			smallest.index = i;
			smallest.value = a->content[i];
		}
		i++;
	}
	return (smallest);
}

t_element	find_next_smallest(t_stack *a, int num)
{
	int			i;
	t_element	smallest;

	i = 0;
	smallest.index = -1;
	smallest.value = 2147483647;
	while (i < a->size)
	{
		if ((a->content[i] > num) && (a->content[i] < smallest.value))
		{
			smallest.index = i;
			smallest.value = a->content[i];
		}
		i++;
	}
	return (smallest);
}
