/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 08:16:51 by terabu            #+#    #+#             */
/*   Updated: 2023/01/19 08:42:40 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_str_array(char **array)
{
	size_t	i;

	i = 0;
	while (array[i] != NULL)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

void	free_stack(t_stack *list)
{
	t_node	*node;
	t_node	*tmp;

	node = list->head;
	while (node != NULL)
	{
		tmp = node->next;
		free(node);
		node = tmp;
	}
}
