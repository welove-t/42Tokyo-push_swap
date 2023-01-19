/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:17:19 by terabu            #+#    #+#             */
/*   Updated: 2023/01/19 09:12:07 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	check_args(char *str)
{
	int		sign;

	if (str == NULL)
		return (false);
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	if (check_int(str, sign) == false)
		return (false);
	return (true);
}

bool	check_int(char *str, int sign)
{
	long	num;

	num = 0;
	while (*str)
	{
		if (ft_isdigit(*str) == 0)
			return (false);
		num = num * 10 + (*str++ - '0') * sign;
		if (sign < 0)
		{
			if (num < INT_MIN)
				return (false);
		}
		else
			if (num > INT_MAX)
				return (false);
	}
	return (true);
}

bool	check_duplication(int *all_args, size_t args_size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < args_size)
	{
		j = i + 1;
		while (j < args_size)
		{
			if (all_args[i] == all_args[j])
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}

bool	check_sort_alist(t_stack *a_list)
{
	t_node	*i_alist;
	size_t	i_check;

	i_alist = a_list->head;
	i_check = 1;
	while (i_alist != NULL)
	{
		if (i_alist->hash != i_check)
			return (false);
		i_check++;
		i_alist = i_alist->next;
	}
	return (true);
}
