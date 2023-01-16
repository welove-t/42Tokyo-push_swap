/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_quick_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:16:32 by terabu            #+#    #+#             */
/*   Updated: 2023/01/16 16:33:29 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_quick_a(t_stack *a_list, t_stack *b_list, int min, int max)
{
	int		cnt_bpush;
	int		i_bigger;
	t_node	*i_alist;

	if (check_sort_alist(a_list))
		return ;
	cnt_bpush = max / 2;
	while (b_list->size < cnt_bpush)
	{
		i_alist = a_list->head;
		if (i_alist->hash <= cnt_bpush)
			pb(a_list, b_list);
		else
			ra(a_list);
	}
	judge_blist(a_list, b_list, min, max / 2);
	while (b_list->size < max - cnt_bpush)
		pb(a_list, b_list);
	if (max % 2 == 0)
		i_bigger = max - cnt_bpush + 1;
	else
		i_bigger = max - cnt_bpush;
	judge_blist(a_list, b_list, i_bigger, max);
}

void	judge_blist(t_stack *a_list, t_stack *b_list, int min, int max)
{
	if (b_list->size > 3)
		btoa_head(a_list, b_list, min, max);
	else if (b_list->size == 3)
	{
		short_sort3_b(b_list);
		move_btoa_tail(a_list, b_list);
	}
	else if (b_list->size == 2)
	{
		short_sort2_b(b_list);
		move_btoa_tail(a_list, b_list);
	}
}

void	btoa_head(t_stack *a_list, t_stack *b_list, int min, int max)
{
	int		cnt_apush;
	int		i;
	int		min_max[2];
	t_node	*i_blist;

	cnt_apush = b_list->size / 2;
	i = 0;
	while (i < cnt_apush)
	{
		i_blist = b_list->head;
		if ((min + max) / 2 < i_blist->hash
			&& i_blist->hash <= max)
		{
			pa(a_list, b_list);
			i++;
		}
		else
			rb(b_list);
	}
	judge_blist(a_list, b_list, min, (min + max) / 2);
	min_max[0] = min;
	min_max[1] = max;
	reverse_b(a_list, b_list, min_max, cnt_apush);
}

void	move_btoa_tail(t_stack *a_list, t_stack *b_list)
{
	while (b_list->size != 0)
	{
		pa(a_list, b_list);
		ra(a_list);
	}
}

void	reverse_b(t_stack *a_list, t_stack *b_list, int mn[], int cnt)
{
	int	i;

	i = 0;
	while (i < cnt)
	{
		pb(a_list, b_list);
		i++;
	}
	judge_blist(a_list, b_list, mn[1] - cnt + 1, mn[1]);
}

bool	check_sort_alist(t_stack *a_list)
{
	t_node	*i_alist;
	int		i_check;

	i_alist = a_list->head;
	i_check = 1;
	while (i_alist != NULL)
	{
		if (i_alist->hash != i_check)
			return (false);
		i_check++;
		i_alist = i_alist->next;
	}
	return (true);
}

/*
1. Aの数字をBに移動
	条件
		1.	size / 2 以下の数値
2. Bの数字をAに移動
	条件
		1.	B全体の半分より大きい数値
		2.	Aの先頭にpush
		3.	Bが分割できなくなるまで(3個以下になるまで)繰り返す
3. Bを３ソート、もしくは２ソート(Bはソート済みとなる)
4. ソートされたBをAの末尾に移動
	操作
		1.	pa
		2.	ra
5.	1.の手順を繰り返す、（何を持って終了とするかは別途検討）

*/
