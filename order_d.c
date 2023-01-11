/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 15:54:04 by terabu            #+#    #+#             */
/*   Updated: 2023/01/11 14:17:08 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_stack *a_list, t_stack *b_list)
{
	if (a_list != NULL && a_list->head != NULL && a_list->head->next != NULL
		&& b_list != NULL && b_list->head != NULL && b_list->head->next != NULL)
	{
		swap(a_list);
		swap(b_list);
		ft_printf("ss\n");
	}
}

void	rr(t_stack *a_list, t_stack *b_list)
{
	if (a_list != NULL && a_list->head->next != NULL
		&& b_list != NULL && b_list->head->next != NULL)
	{
		rotate(a_list);
		rotate(b_list);
		ft_printf("rr\n");
	}
}

void	rrr(t_stack *a_list, t_stack *b_list)
{
	if (a_list != NULL && a_list->head->next != NULL
		&& b_list != NULL && b_list->head->next != NULL)
	{
		reverse(a_list);
		reverse(b_list);
		ft_printf("rrr\n");
	}
}
