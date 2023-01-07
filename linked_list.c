/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 12:40:25 by terabu            #+#    #+#             */
/*   Updated: 2023/01/07 15:49:28 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

t_node	*alloc_node(void)
{
	return ((t_node *)malloc(sizeof(t_node)));
}

void	set_node(t_node *n, const int num, t_node *next)
{
	n->num = num;
	n->next = next;
}

void	init_list(t_stack *list)
{
	list->head = NULL;
}

t_node	*last_list(t_node *n)
{
	if (n == NULL)
		return (n);
	while (n->next != NULL)
		n = n->next;
	return (n);
}

void	insert_front(t_stack *list, const int num)
{
	t_node	*tmp;

	tmp = NULL;
	if (list != NULL)
		tmp = list->head;
	list->head = alloc_node();
	set_node(list->head, num, tmp);
}

void	insert_back(t_stack *list, const int num)
{
	t_node	*tmp;

	if (list == NULL || list->head == NULL)
		insert_front(list, num);
	else
	{
		tmp = last_list(list->head);
		tmp->next = alloc_node();
		set_node(tmp->next, num, NULL);
	}
}
