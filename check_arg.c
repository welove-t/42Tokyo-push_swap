/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:17:19 by terabu            #+#    #+#             */
/*   Updated: 2023/01/18 11:42:59 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool	check_int(char *str, int sign)
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
