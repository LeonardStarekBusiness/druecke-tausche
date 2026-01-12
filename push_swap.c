/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstarek <lstarek@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 15:07:37 by lstarek           #+#    #+#             */
/*   Updated: 2025/12/27 15:07:38 by lstarek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_final_product(t_stack a, t_stack b)
{
	int	i;

	i = 0;
	ft_printf("\na: ");
	while (i < a.max_size)
	{
		ft_putnbr_fd(a.content[i], 1);
		ft_putstr_fd(", ", 1);
		i++;
	}
	ft_printf("  size: %d\nb: ", a.size);
	i = 0;
	while (i < b.max_size)
	{
		ft_putnbr_fd(b.content[i], 1);
		ft_putstr_fd(", ", 1);
		i++;
	}
	ft_printf("  size: %d", b.size);
}

void	push_swap(t_stack a, t_stack b)
{
	if (VERBOSE)
		print_final_product(a, b);
	return ;
}

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack b;
	int	i;

	if (ac == 1)
		return (ft_printf("Error\n"), 0);
	if (ac == 2)
		return (0);
	a.content = ft_calloc((ac - 1), sizeof(int));
	a.max_size = ac - 1;
	a.size = ac - 1;
	b.content = ft_calloc((ac - 1), sizeof(int));
	b.max_size = ac - 1;
	b.size = 0;
	i = 0;
	while (i < a.max_size)
	{
		a.content[i] = ft_atoi(av[i + 1]);
		i++;
	}
	pb(&a,&b);
	pb(&a,&b);
	ss(&a,&b);
	push_swap(a, b);
	free(a.content);
	free(b.content);
}
