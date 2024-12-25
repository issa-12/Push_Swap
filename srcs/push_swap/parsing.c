/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalayan <isalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 17:10:21 by isalayan          #+#    #+#             */
/*   Updated: 2024/08/03 17:03:44 by isalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

bool	validate_int(char *elem)
{
	bool			is_int;
	unsigned int	i;
	unsigned int	cm;

	i = 0;
	cm = 0;
	is_int = true;
	while (elem[i] && is_int)
	{
		if (elem[i] == '-' && cm < 1)
			cm++;
		else if (!ft_isdigit(elem[i]))
			is_int = false;
		i++;
	}
	return (!is_int);
}

bool	atoiv(const char *str, long *n)
{
	int		signal;
	bool	overflow;

	*n = 0;
	signal = -1;
	overflow = false;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			signal = 1;
	while (*str >= '0' && *str <= '9')
	{
		*n = *n * 10 - (*str++ - '0');
		if (*n > 0 || (*n == INT_MIN && signal < 0))
			overflow = true;
	}
	*n *= signal;
	return (overflow);
}

void	free_stack(t_stack_node **stack)
{
	t_stack_node	*tmp;
	t_stack_node	*current;

	if (!stack)
		return ;
	current = *stack;
	while (current)
	{
		tmp = current->next;
		current->nbr = 0;
		free(current);
		current = tmp;
	}
	*stack = NULL;
}

bool	already_exists(long n, t_stack_node *a)
{
	if (!a)
		return (false);
	while (a)
	{
		if (a->nbr == n)
			return (true);
		a = a->next;
	}
	return (false);
}

void	free_array(char **array)
{
	int	i;

	i = 0;
	if (array)
	{
		while (array[i])
		{
			free(array[i]);
			i++;
		}
	}
	free(array);
}
