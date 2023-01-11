/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 15:54:04 by terabu            #+#    #+#             */
/*   Updated: 2023/01/11 14:19:25 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_stack *b_list)
{
	if (b_list != NULL && b_list->head != NULL && b_list->head->next != NULL)
	{
		swap(b_list);
		ft_printf("sb\n");
	}
}

void	pb(t_stack *a_list, t_stack *b_list)
{
	if (a_list != NULL && a_list->head)
	{
		push(a_list, b_list);
		ft_printf("pb\n");
	}
}

void	rb(t_stack *b_list)
{
	if (b_list != NULL && b_list->head->next != NULL)
	{
		rotate(b_list);
		ft_printf("rb\n");
	}
}

void	rrb(t_stack *b_list)
{
	if (b_list != NULL && b_list->head->next != NULL)
	{
		reverse(b_list);
		ft_printf("rrb\n");
	}
}
