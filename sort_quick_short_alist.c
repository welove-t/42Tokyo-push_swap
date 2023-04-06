/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_quick_short_alist.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 07:29:15 by terabu            #+#    #+#             */
/*   Updated: 2023/04/06 08:39:02 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	sort_quick_short_alist(t_stack *alst, t_stack *blst, size_t cnt)
{
	(void)blst;
	if (cnt == 2)
	{
		sort_quick_2_alist(alst);
		return (true);
	}
	else if (cnt == 3)
	{
		if (alst->head->num < alst->head->next->num
			&& alst->head->num < alst->head->next->next->num)
			sort_quick_3_head_sm_alist(alst);
		else if (alst->head->num > alst->head->next->num
			&& alst->head->num > alst->head->next->next->num)
			sort_quick_3_head_lg_alist(alst, blst);
		else
			sort_quick_3_head_md_alist(alst, blst);
		return (true);
	}
	else
		return (false);
}

void	sort_quick_2_alist(t_stack *alst)
{
	short_sort2_a(alst);
	ra(alst);
	ra(alst);
}

void	sort_quick_3_head_sm_alist(t_stack *alst)
{
	if (alst->head->next->num < alst->head->next->next->num)
	{
		ra(alst);
		ra(alst);
		ra(alst);
	}
	else
	{
		ra(alst);
		sa(alst);
		ra(alst);
		ra(alst);
	}

}

void	sort_quick_3_head_md_alist(t_stack *alst, t_stack *blst)
{
	if (alst->head->next->num < alst->head->next->next->num)
	{
		sa(alst);
		ra(alst);
		ra(alst);
		ra(alst);
	}
	else
	{
		pb(alst, blst);
		sa(alst);
		ra(alst);
		pa(alst, blst);
		ra(alst);
		ra(alst);
	}
	return ;
}

void	sort_quick_3_head_lg_alist(t_stack *alst, t_stack *blst)
{
	if (alst->head->next->num < alst->head->next->next->num)
	{
		sa(alst);
		ra(alst);
		sa(alst);
		ra(alst);
		ra(alst);
	}
	else
	{
		pb(alst, blst);
		pb(alst, blst);
		ra(alst);
		pa(alst, blst);
		ra(alst);
		pa(alst, blst);
		ra(alst);
	}
}
