/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_quick.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:16:32 by terabu            #+#    #+#             */
/*   Updated: 2023/01/18 15:21:51 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_quick(t_stack *alst, t_stack *blst)
{
	size_t		cnt_bpush;
	size_t		i_bigger;
	size_t		max;
	t_node		*i_alist;

	max = alst->size;
	cnt_bpush = max / 2;
	while (blst->size < cnt_bpush)
	{
		i_alist = alst->head;
		if (i_alist->hash <= cnt_bpush)
			pb(alst, blst);
		else
			ra(alst);
	}
	judge_blst(alst, blst, 1, cnt_bpush);
	while (blst->size < max - cnt_bpush)
		pb(alst, blst);
	if (max % 2 == 0)
		i_bigger = max - cnt_bpush + 1;
	else
		i_bigger = max - cnt_bpush;
	judge_blst(alst, blst, i_bigger, max);
}

void	judge_blst(t_stack *alst, t_stack *blst, size_t min, size_t max)
{
	if (blst->size > 3)
		btoa_head(alst, blst, min, max);
	else if (blst->size == 3)
	{
		short_sort3_b(blst);
		move_btoa_tail(alst, blst);
	}
	else if (blst->size == 2)
	{
		short_sort2_b(blst);
		move_btoa_tail(alst, blst);
	}
}

void	btoa_head(t_stack *alst, t_stack *blst, size_t min, size_t max)
{
	size_t		cnt_apush;
	size_t		i;
	size_t		min_max[2];
	t_node		*i_blist;

	cnt_apush = blst->size / 2;
	i = 0;
	while (i < cnt_apush)
	{
		i_blist = blst->head;
		if ((min + max) / 2 < i_blist->hash
			&& i_blist->hash <= max)
		{
			pa(alst, blst);
			i++;
		}
		else
			rb(blst);
	}
	judge_blst(alst, blst, min, (min + max) / 2);
	min_max[0] = min;
	min_max[1] = max;
	reverse_b(alst, blst, min_max, cnt_apush);
}

void	move_btoa_tail(t_stack *alst, t_stack *blst)
{
	while (blst->size != 0)
	{
		pa(alst, blst);
		ra(alst);
	}
}

void	reverse_b(t_stack *alst, t_stack *blst, size_t mn[], size_t cnt)
{
	size_t	i;

	i = 0;
	while (i < cnt)
	{
		pb(alst, blst);
		i++;
	}
	judge_blst(alst, blst, mn[1] - cnt + 1, mn[1]);
}

// bool	check_sort_alist(t_stack *alst)
// {
// 	t_node	*i_alist;
// 	int		i_check;

// 	i_alist = alst->head;
// 	i_check = 1;
// 	while (i_alist != NULL)
// 	{
// 		if (i_alist->hash != i_check)
// 			return (false);
// 		i_check++;
// 		i_alist = i_alist->next;
// 	}
// 	return (true);
// }

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
