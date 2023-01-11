/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 12:40:25 by terabu            #+#    #+#             */
/*   Updated: 2023/01/11 12:12:31 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

t_node	*alloc_node(void)
{
	return ((t_node *)malloc(sizeof(t_node)));
}

void	set_node(t_node *n, const int num, t_node *prev, t_node *next)
{
	n->num = num;
	n->prev = prev;
	n->next = next;
}

void	init_list(t_stack *list)
{
	list->head = NULL;
	list->tail = NULL;
}

void	list_add(t_stack *list, const int num)
{
	t_node	*new;

	if (list == NULL || list->head == NULL)
	{
		new = alloc_node();
		set_node(new, num, NULL, NULL);
		list->head = new;
		list->tail = new;
	}
	else
	{
		new = list->tail;
		new->next = alloc_node();
		set_node(new->next, num, list->tail, NULL);
		list->tail = new->next;
	}
}
