/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functionality.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstarek <lstarek@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:10:06 by lstarek           #+#    #+#             */
/*   Updated: 2026/01/08 14:10:07 by lstarek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *pile)
{
	int	temp;
	int	temp2;

	if (pile->size < 2)
		return ;
	temp = pop(pile);
	temp2 = pop(pile);
	push(pile, temp);
	push(pile, temp2);
}
void	transfer(t_stack *pile, t_stack *pile2)
{
	int	temp;

	temp = pop(pile2);
	push(pile, temp);
}
void	rotate(t_stack *pile)
{
	(void)pile;
}
void	rev_rotate(t_stack *pile)
{
	(void)pile;
}