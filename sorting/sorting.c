/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstarek <lstarek@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 15:07:37 by lstarek           #+#    #+#             */
/*   Updated: 2026/01/18 13:58:15 by lstarek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	tiny_sort(t_stack *a)
{
	int	top;
	int	mid;
	int	bottom;

	top = a->content[a->size - 1];
	mid = a->content[1];
	bottom = a->content[0];
	if (a->size == 2)
	{
		if (top > bottom)
			ft_printf("ra\n");
		return ;
	}
	if (mid > bottom && bottom > top)
		ft_printf("sa\nra\n");
	else if (bottom > top && top > mid)
		ft_printf("sa\n");
	else if (mid > top && top > bottom)
		ft_printf("rra\n");
	else if (top > bottom && bottom > mid)
		ft_printf("ra\n");
	else if (top > mid && mid > bottom)
		ft_printf("sa\nrra\n");
	return ;
}

void	selection_sort(t_stack *a, t_stack *b)
{
	t_element	smallest;

	while (a->size > 3 && !(is_sorted(*a)))
	{
		smallest = find_smallest(a);
		while ((a->content[a->size - 1] != smallest.value) && !(is_sorted(*a)))
		{
			if (smallest.index < a->size / 2)
				rra(a);
			else
				ra(a);
		}
		if (!is_sorted(*a))
			pb(a, b);
	}
	tiny_sort(a);
	while (b->size > 0)
		pa(a, b);
}

int	modulo(int num, int n)
{
	return (((num >> n) & 1) == 1);
}

void	make_index(t_stack *indexes, t_stack src, t_stack *b)
{
	t_element	next;
	int			i;

	indexes->content = ft_calloc(src.max_size, sizeof(int));
	if (!indexes->content)
		return ;
	indexes->max_size = src.max_size;
	indexes->size = src.max_size;
	indexes->is_helper = 1;
	b->content = ft_calloc(src.max_size, sizeof(int));
	if (!b->content)
		return ;
	b->max_size = src.max_size;
	b->size = 0;
	b->is_helper = 1;
	i = 0;
	next = find_smallest(&src);
	indexes->content[next.index] = i;
	while (i < src.max_size - 1)
	{
		i++;
		next = find_next_smallest(&src, next.value);
		indexes->content[next.index] = i;
	}
}

void	radix_sort(t_stack *a, t_stack *b)
{
	int		i;
	int		n;
	t_stack	a_i;
	t_stack	b_i;

	n = 0;
	make_index(&a_i, *a, &b_i);
	while ((!(is_sorted(*a))) && a_i.content && b_i.content)
	{
		i = 0;
		while (i < a->max_size)
		{
			if (!modulo(a_i.content[a_i.size - 1], n))
				radix_pb(a, b, &a_i, &b_i);
			else
				radix_ra(a, &a_i);
			i++;
		}
		while (b->size > 0)
			radix_pa(a, b, &a_i, &b_i);
		n++;
	}
	free(a_i.content);
	free(b_i.content);
}
