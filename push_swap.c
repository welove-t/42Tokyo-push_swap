/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:49:53 by terabu            #+#    #+#             */
/*   Updated: 2023/01/07 16:19:44 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "push_swap.h"
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	t_stack	a_list;

	i = 1;
	init_list(&a_list);
	while (i < argc)
	{
		insert_back(&a_list, ft_atoi(argv[i]));
		i++;
	}


	// print
	t_node *p;
	printf("---print---\n");
	swap_a(&a_list);
	p = a_list.head;
	while (p != NULL)
	{
		printf("%d\n", p->num);
		p = p->next;
	}
	return (0);
}
