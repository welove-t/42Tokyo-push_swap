/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:49:53 by terabu            #+#    #+#             */
/*   Updated: 2023/01/13 14:11:05 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "push_swap.h"
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		*i_arg;
	t_stack	a_list;
	t_hashmap	*hashes;

	i = 1;
	init_list(&a_list);
	i_arg = (int *)malloc(sizeof(int) * (argc - 1));
	for (int j = 1; j < argc; j++)
		i_arg[j - 1] = ft_atoi(argv[j]);
	hashes = compression(i_arg, argc - 1);
	for (int j = 0; j < argc - 1; j++)
	{
		printf("main_num:%d\n", hashes[j].main_num);
		printf("hash_num:%d\n", hashes[j].hash_num);
		printf("idx:%d\n", hashes[j].idx);
		puts("========");
	}
	while (i < argc)
	{
		list_add(&a_list, ft_atoi(argv[i]));
		i++;
	}

	if (argc <= 2)
		return 0;
	else if (argc == 3)
		short_sort2(&a_list);
	else if (argc == 4)
		short_sort3(&a_list);
	else
		return 0;

	// print
	t_node *p;
	printf("---print---\n");
	p = a_list.head;
	while (p != NULL)
	{
		puts("----");
		printf("main:%p\n", p);
		printf("prev:%p\n", p->prev);
		printf("%d\n", p->num);
		printf("next:%p\n", p->next);
		p = p->next;
	}
	printf("head:%p\n", a_list.head);
	printf("tail:%p\n", a_list.tail);
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
