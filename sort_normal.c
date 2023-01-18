/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_normal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 09:56:12 by terabu            #+#    #+#             */
/*   Updated: 2023/01/18 15:17:54 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_normal(t_stack *a_list, t_stack *b_list)
{
	pushes(a_list, b_list);
	short_sort3_a(a_list);
	while (b_list->size != 0)
		pa(a_list, b_list);
}

void	pushes(t_stack *a_list, t_stack *b_list)
{
	size_t		i_hash;
	size_t		a_cnt;

	i_hash = 1;
	a_cnt = a_list->size;
	while (a_cnt > 3)
	{
		judge_order(a_list, b_list, i_hash);
		i_hash++;
		a_cnt--;
	}
}

void	judge_order(t_stack *a_list, t_stack *b_list, size_t i_hash)
{
	t_node	*i_hashmap;
	size_t	i_hashmap_idx;

	i_hashmap = a_list->head;
	i_hashmap_idx = 0;
	while (i_hashmap != NULL)
	{
		if (i_hash == i_hashmap->hash)
		{
			if (i_hashmap_idx < a_list->size / 2)
				loop_rotate(a_list, i_hash, 0);
			else
				loop_rotate(a_list, i_hash, 1);
			pb(a_list, b_list);
			break ;
		}
		i_hashmap_idx++;
		i_hashmap = i_hashmap->next;
	}
}

void	loop_rotate(t_stack *a_list, size_t i_hash, int flg)
{
	t_node	*i_node;

	if (flg == 0)
	{
		i_node = a_list->head;
		while (i_node->hash != i_hash)
		{
			ra(a_list);
			i_node = a_list->head;
		}
	}
	else
	{
		i_node = a_list->tail;
		while (i_node->hash != i_hash)
		{
			rra(a_list);
			i_node = a_list->tail;
		}
		rra(a_list);
	}
}
