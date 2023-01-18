/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialized.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 07:19:37 by terabu            #+#    #+#             */
/*   Updated: 2023/01/18 09:10:52 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*initial_alist(int cnt_arg, char **argv, t_stack *a_list)
{
	// char		**args;
	// int			*all_args;
	// t_hashmap	*hashes;
	size_t		args_size;
	size_t		i;

	i = 0;
	args_size = cnt_all_args(cnt_arg, argv);
	init_list(a_list);
	ft_printf("size:%d\n", args_size);
	// args = ft_split(argv[1], " ");
	// while (args[i] != NULL)
	// {
	// 	// if (check_args(args[i]) == false)
	// 		// return (0);
	// 	i++;
	// }
	// all_args = (int *)malloc(sizeof(int) * (cnt_arg + i - 1));
	return (NULL);
}

size_t	cnt_all_args(int cnt_args, char **argv)
{
	size_t	cnt;
	size_t	i;
	int		i_args;
	char	**args;

	cnt = 0;
	i_args = 0;
	while (i_args < cnt_args)
	{
		args = ft_split(argv[cnt + 1], ' ');
		i = 0;
		while (args[i] != NULL)
		{
			i++;
			cnt++;
		}
		i_args++;
	}
	return (cnt);
}
// bool	check_args(char *str)
// {
// 	size_t	start;
// 	size_t	minus;

// 	if (str == NULL)
// 		return (false);
// 	minus = 0;
// 	if (*str == '-' || *str == '+')
// 	{
// 		if (*str == '-')
// 			minus = 1;
// 		str++;
// 	}
// 	while (*str)
// 	{
// 		if (ft_isdigit(*str) == 0)
// 			return (false);
// 	}
// 	return (true);
// }
