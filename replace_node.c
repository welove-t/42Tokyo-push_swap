/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 15:54:04 by terabu            #+#    #+#             */
/*   Updated: 2023/01/19 09:37:09 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	init_set_tolist(t_stack *fm_list, t_stack *to_list)
{
	fm_list->head->prev = NULL;
	fm_list->head->next = NULL;
	to_list->tail = fm_list->head;
}

void	swap(t_stack *list)
{
	int	tmp;

	if (list->head->next != NULL)
	{
		tmp = list->head->num;
		list->head->num = list->head->next->num;
		list->head->next->num = tmp;
		tmp = list->head->hash;
		list->head->hash = list->head->next->hash;
		list->head->next->hash = tmp;
	}
}

void	push(t_stack *fm_list, t_stack *to_list)
{
	t_node	*tmp;

	if (fm_list != NULL)
	{
		tmp = fm_list->head->next;
		if (to_list->size == 0)
			init_set_tolist(fm_list, to_list);
		else
		{
			to_list->head->prev = fm_list->head;
			fm_list->head->next = to_list->head;
		}
		to_list->head = fm_list->head;
		to_list->size += 1;
		if (tmp == NULL)
			init_list(fm_list);
		else
		{
			fm_list->head = tmp;
			fm_list->head->prev = NULL;
			fm_list->size -= 1;
		}
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
		tmp = list->tail->prev;
		list->tail->prev->next = NULL;
		list->head->prev = list->tail;
		list->tail->next = list->head;
		list->tail->prev = NULL;
		list->head = list->tail;
		list->tail = tmp;
	}
}
