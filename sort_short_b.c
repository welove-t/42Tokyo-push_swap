/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_short_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:51:22 by terabu            #+#    #+#             */
/*   Updated: 2023/01/19 09:38:50 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	short_sort2_b(t_stack *b_list)
{
	if (b_list->head->num > b_list->head->next->num)
		sb(b_list);
	return ;
}

void	short_sort3_b(t_stack *b_list)
{
	if (b_list->head->num < b_list->head->next->num
		&& b_list->head->num < b_list->tail->num)
		short_sort3_b_head_sm(b_list);
	else if (b_list->head->num > b_list->head->next->num
		&& b_list->head->num > b_list->tail->num)
		short_sort3_b_head_lg(b_list);
	else
		short_sort3_b_head_md(b_list);
	return ;
}

void	short_sort3_b_head_sm(t_stack *b_list)
{
	if (b_list->head->next->num < b_list->tail->num)
		return ;
	else
	{
		rrb(b_list);
		sb(b_list);
	}
	return ;
}

void	short_sort3_b_head_md(t_stack *b_list)
{
	if (b_list->head->next->num < b_list->tail->num)
		sb(b_list);
	else
		rrb(b_list);
	return ;
}

void	short_sort3_b_head_lg(t_stack *b_list)
{
	if (b_list->head->next->num < b_list->tail->num)
		rb(b_list);
	else
	{
		rb(b_list);
		sb(b_list);
	}
	return ;
}
