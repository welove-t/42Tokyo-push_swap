/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 15:54:04 by terabu            #+#    #+#             */
/*   Updated: 2023/01/10 11:48:59 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *list)
{
	int	tmp;

	tmp = list->head->num;
	list->head->num = list->head->next->num;
	list->head->next->num = tmp;
}

void	push(t_stack *pre_list, t_stack *new_list)
{
	t_node	*tmp;

	tmp = NULL;
	if (pre_list != NULL)
	{
		tmp = pre_list->head->next;
		pre_list->head->next = new_list;
		pre_list = tmp;
	}
}

void	rotate(t_stack *list)
{
	if (list != NULL)
	{
		last_list(list->head)->next = list->head;
		list->head = list->head->next;
		list->head->next = NULL;
	}
}
