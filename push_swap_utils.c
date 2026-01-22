/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstarek <lstarek@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 15:07:37 by lstarek           #+#    #+#             */
/*   Updated: 2025/12/27 15:07:38 by lstarek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	textlen(char **text)
{
	int	i;

	i = 0;
	while (text[i])
		i++;
	return (i);
}

void	free_str(char **str)
{
	int	i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str[i]);
	free(str);
}

int	contain_duplicates(t_stack pile)
{
	int	i;
	int	n;

	i = 0;
	while (i < pile.size)
	{
		n = i - 1;
		while (n >= 0)
		{
			if (pile.content[i] == pile.content[n])
			{
				ft_printf("Error\n");
				return (1);
			}
			n--;
		}
		i++;
	}
	return (0);
}

int	is_number(const char *str)
{
	int		i;
	char	*temp;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]) && str[i] != '-')
			return (0);
		i++;
	}
	temp = ft_itoa(ft_atoi(str));
	if (ft_strncmp(str, temp, ft_strlen(str)) != 0)
		return (free(temp), 0);
	return (free(temp), 1);
}
