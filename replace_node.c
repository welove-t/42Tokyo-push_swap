/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 15:54:04 by terabu            #+#    #+#             */
/*   Updated: 2023/01/11 12:08:21 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *list)
{
	int	tmp;

	if (list->head->next != NULL)
	{
		tmp = list->head->num;
		list->head->num = list->head->next->num;
		list->head->next->num = tmp;
	}
}

void	push(t_stack *fm_list, t_stack *to_list)
{
	t_node	*tmp;

	tmp = NULL;
	if (fm_list != NULL)
	{
		tmp = fm_list->head->next;
		to_list->head->prev = fm_list->head;
		fm_list->head->next = to_list->head;
		to_list->head = fm_list->head;
		fm_list->head = tmp;
		fm_list->head->prev = NULL;
	}
}

void	rotate(t_stack *list)
{
	t_node	*tmp;

	if (list != NULL)
	{
		tmp = list->head->next;
		list->head->next->prev = NULL;
		list->tail->next = list->head;
		list->head->prev = list->tail;
		list->head->next = NULL;
		list->tail = list->head;
		list->head = tmp;
	}
}

void	reverse(t_stack *list)
{
	t_node	*tmp;

	if (list != NULL)
	{
		tmp = list->head->next;
		list->tail->prev->next = NULL;
		list->head->prev = list->tail;
		list->tail->next = list->head;
		list->tail->prev = NULL;
		list->head = list->tail;
		list->tail = tmp;
	}
}
