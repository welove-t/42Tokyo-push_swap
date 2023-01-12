/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_short.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:51:22 by terabu            #+#    #+#             */
/*   Updated: 2023/01/11 16:31:42 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	short_sort2(t_stack *a_list)
{
	if (a_list->head->num > a_list->head->next->num)
		sa(a_list);
	return ;
}

void	short_sort3(t_stack *a_list)
{
	if (a_list->head->num < a_list->head->next->num
		&& a_list->head->num < a_list->tail->num)
		short_sort3_head_sm(a_list);
	else if (a_list->head->num > a_list->head->next->num
		&& a_list->head->num > a_list->tail->num)
		short_sort3_head_lg(a_list);
	else
		short_sort3_head_md(a_list);
	return ;
}

void	short_sort3_head_sm(t_stack *a_list)
{
	if (a_list->head->next->num < a_list->tail->num)
		return ;
	else
	{
		rra(a_list);
		sa(a_list);
	}
	return ;
}

void	short_sort3_head_md(t_stack *a_list)
{
	if (a_list->head->next->num < a_list->tail->num)
		sa(a_list);
	else
		rra(a_list);
	return ;
}

void	short_sort3_head_lg(t_stack *a_list)
{
	if (a_list->head->next->num < a_list->tail->num)
		ra(a_list);
	else
	{
		ra(a_list);
		sa(a_list);
	}
	return ;
}

