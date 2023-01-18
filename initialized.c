/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialized.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 07:19:37 by terabu            #+#    #+#             */
/*   Updated: 2023/01/18 10:27:06 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*initial_alist(int argc, char **argv, t_stack *a_list)
{
	int			*all_args;
	// t_hashmap	*hashes;
	size_t		args_size;

	args_size = cnt_all_args(argc - 1, argv);
	init_list(a_list);
	all_args = malloc(sizeof(int) * args_size);
	set_num_list(argc, argv, all_args);
	// ft_printf("size:%d\n", args_size);
	// for (int j = 0; j < (int)args_size; j++)
	// 	ft_printf("%d\n", all_args[j]);
	return (NULL);
}

void	set_num_list(int argc, char **argv, int *all_args)
{
	char		**args;
	int			i;
	size_t		i_args;
	size_t		i_all_args;

	i = 1;
	i_all_args = 0;
	while (i < argc)
	{
		args = ft_split(argv[i], ' ');
		i_args = 0;
		while (args[i_args] != NULL)
		{
			// if (check_args(args[i]) == false)
				// return (0);
			all_args[i_all_args] = ft_atoi(args[i_args]);
			i_args++;
			i_all_args++;
		}
		i++;
	}
}

size_t	cnt_all_args(int cnt_args, char **argv)
{
	int		i;
	size_t	cnt;
	size_t	i_args;
	char	**args;

	cnt = 0;
	i = 0;
	while (i < cnt_args)
	{
		args = ft_split(argv[cnt + 1], ' ');
		i_args = 0;
		while (args[i_args] != NULL)
		{
			i_args++;
			cnt++;
		}
		i++;
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
