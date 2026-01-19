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
#  define VERBOSE 0
# endif

typedef struct s_stack
{
	int		*content;
	int		size;
	int		max_size;
	int		is_helper;
}			t_stack;

typedef struct s_element
{
	int		value;
	int		index;
}			t_element;

void		push(t_stack *stack, int num);
int			pop(t_stack *stack);

void		swap(t_stack *pile);
void		transfer(t_stack *pile, t_stack *pile2);
void		rotate(t_stack *pile);
void		rev_rotate(t_stack *pile);

void		sa(t_stack *a);
void		sb(t_stack *b);
void		pa(t_stack *a, t_stack *b);
void		pb(t_stack *a, t_stack *b);
void		ra(t_stack *a);
void		rb(t_stack *b);
void		rra(t_stack *a);
void		rrb(t_stack *b);
void		ss(t_stack *a, t_stack *b);
void		rr(t_stack *a, t_stack *b);
void		rrr(t_stack *a, t_stack *b);

void		radix_pa(t_stack *a, t_stack *b, t_stack *a_i, t_stack *b_i);
void		radix_pb(t_stack *a, t_stack *b, t_stack *a_i, t_stack *b_i);
void		radix_ra(t_stack *a, t_stack *a_i);

int			is_sorted(t_stack a);
t_element	find_smallest(t_stack *a);
t_element	find_next_smallest(t_stack *a, int num);

void		tiny_sort(t_stack *a);
void		selection_sort(t_stack *a, t_stack *b);
void		radix_sort(t_stack *a, t_stack *b);

int			textlen(char **text);
void		free_str(char **str);
int			is_number(const char *str);
int			contain_duplicates(t_stack pile);

#endif
