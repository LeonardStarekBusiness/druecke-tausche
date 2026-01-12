/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstarek <lstarek@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 15:07:50 by lstarek           #+#    #+#             */
/*   Updated: 2025/12/27 15:07:52 by lstarek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include <stdlib.h>
# ifndef VERBOSE
#  define VERBOSE 1
# endif

typedef struct	s_stack
{
	int	*content;
	int	size;
	int	max_size;
}	t_stack;

void	push(t_stack *stack, int num);
int		pop(t_stack *stack);

void	swap(t_stack *pile);
void	transfer(t_stack *pile, t_stack *pile2);
void	rotate(t_stack *pile);
void	rev_rotate(t_stack *pile);

void	sa(t_stack *a);
void	sb(t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rrr(t_stack *a, t_stack *b);

#endif
