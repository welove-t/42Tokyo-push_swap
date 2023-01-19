/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 12:40:25 by terabu            #+#    #+#             */
/*   Updated: 2023/01/19 11:55:58 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*alloc_node(void)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	if (node == NULL)
		error_exit();
	return (node);
}

void	set_node(t_node *n, t_hashmap hash_val, t_node *prev, t_node *next)
{
	n->num = hash_val.main_num;
	n->hash = hash_val.hash_num;
	n->prev = prev;
	n->next = next;
}

void	init_list(t_stack *list)
{
	list->head = NULL;
	list->tail = NULL;
	list->size = 0;
}

void	list_add(t_stack *list, t_hashmap hash_val)
{
	t_node	*new;

	new = alloc_node();
	if (list == NULL || list->head == NULL)
	{
		set_node(new, hash_val, NULL, NULL);
		list->head = new;
		list->tail = new;
		list->size += 1;
	}
	else
	{
		set_node(new, hash_val, list->tail, NULL);
		list->tail->next = new;
		list->tail = new;
		list->size += 1;
	}
}
