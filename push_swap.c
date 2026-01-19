/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstarek <lstarek@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 15:07:37 by lstarek           #+#    #+#             */
/*   Updated: 2025/12/27 15:07:38 by lstarek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_stack a, t_stack b)
{
	if (contain_duplicates(a))
		return ;
	if (a.size <= 3)
		return (tiny_sort(&a));
	else if (a.size <= 50)
		return (selection_sort(&a, &b));
	return (radix_sort(&a, &b));
}

int	parse_input(int size, char **nums, t_stack *a, t_stack *b)
{
	int	i;

	a->content = ft_calloc((size - 1), sizeof(int));
	a->max_size = size - 1;
	a->size = size - 1;
	b->content = ft_calloc((size - 1), sizeof(int));
	b->max_size = size - 1;
	b->size = 0;
	i = 0;
	a->is_helper = 0;
	b->is_helper = 0;
	while (i < size - 1)
	{
		if (nums[size - i - 1])
		{
			if (!(is_number(nums[size - i - 1])))
				return (0);
			a->content[i] = ft_atoi(nums[size - i - 1]);
		}
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;
	int		valid;
	char	*temp;
	char	**nums;

	if (ac == 1)
		return (0);
	if (ac == 2 && ft_strchr(av[1], ' ') == NULL)
		return (0);
	else if (ac == 2 && ft_strchr(av[1], ' ') != NULL)
	{
		temp = ft_strjoin("test ", av[1]);
		nums = ft_split(temp, ' ');
		valid = parse_input(textlen(nums), nums, &a, &b);
		free(temp);
		free_str(nums);
	}
	else
		valid = parse_input(ac, av, &a, &b);
	if (valid)
		push_swap(a, b);
	else
		ft_printf("Error\n");
	return (free(a.content), free(b.content), 0);
}
