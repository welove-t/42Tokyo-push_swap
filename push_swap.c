/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:49:53 by terabu            #+#    #+#             */
/*   Updated: 2023/01/09 14:29:55 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "push_swap.h"
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	t_stack	a_list;

	i = 1;
	init_list(&a_list);
	while (i < argc)
	{
		insert_back(&a_list, ft_atoi(argv[i]));
		i++;
	}


	// print
	t_node *p;
	printf("---print---\n");
	swap_a(&a_list);
	p = a_list.head;
	while (p != NULL)
	{
		printf("%d\n", p->num);
		p = p->next;
	}
	return (0);
}


// 処理フロー
/*

1. パラメータのインプット
2. パラメーターチェック
3. リスト初期化
4. ソート処理
5. 終了処理(freeなど)

*/
//
