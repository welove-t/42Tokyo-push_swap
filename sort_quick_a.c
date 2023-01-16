/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_quick_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:16:32 by terabu            #+#    #+#             */
/*   Updated: 2023/01/16 09:56:26 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_quick_a(t_stack *a_list, t_stack *b_list, int min, int max)
{
	int		cnt_bpush;
	t_node	*i_alist;

	cnt_bpush = max / 2;//7
	while (b_list->size < cnt_bpush)
	{
		i_alist = a_list->head;
		if (i_alist->hash <= cnt_bpush)
			pb(a_list, b_list);
		else
			ra(a_list);
	}
	move_btoa_head(a_list, b_list, min, cnt_bpush);
}

void	judge_operation(t_stack *a_list, t_stack *b_list, int min, int max)
{
	if (b_list->size > 3)
		move_btoa_head(a_list, b_list, min, max);
	else if (b_list->size == 3)
		short_sort3(b_list);
	else if (b_list->size == 2)
		short_sort2(b_list);
}

void	move_btoa_head(t_stack *a_list, t_stack *b_list, int min, int max)
{
	int		cnt_apush;
	int		i;
	t_node	*i_blist;

	cnt_apush = b_list->size / 2;
	i = 0;
	while (i < cnt_apush)
	{
		i_blist = b_list->head;
		if ((min + max) / 2 < i_blist->hash && i_blist->hash <= max)
		{
			pa(a_list, b_list);
			i++;
		}
		else
			rb(b_list);
	}
	judge_operation(a_list, b_list, min, (min + max) / 2);
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
