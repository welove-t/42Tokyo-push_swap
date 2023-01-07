/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 15:54:04 by terabu            #+#    #+#             */
/*   Updated: 2023/01/07 16:15:06 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack *list)
{
	int	tmp;

	tmp = list->head->num;
	list->head->num = list->head->next->num;
	list->head->next->num = tmp;
}
