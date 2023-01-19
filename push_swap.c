/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:49:53 by terabu            #+#    #+#             */
/*   Updated: 2023/01/19 09:11:54 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_exit(void)
{
	ft_printf("Error\n");
	exit(EXIT_FAILURE);
}

int	main(int argc, char **argv)
{
	t_stack	a_list;
	t_stack	b_list;
	size_t	args_size;

	a_list = initial_alist(argc, argv, &args_size);
	if (check_sort_alist(&a_list) == true)
	{
		free_stack(&a_list);
		return (0);
	}
	create_blist(&b_list);
	if (args_size < 2)
		return (0);
	else if (args_size == 2)
		short_sort2_a(&a_list);
	else if (args_size == 3)
		short_sort3_a(&a_list);
	else if (args_size <= 6)
		sort_normal(&a_list, &b_list);
	else
		sort_quick(&a_list, &b_list);
	free_stack(&a_list);
	free_stack(&b_list);
	return (0);
}


/*

// test case

9
./a.out 2 8 7 3 1 4 5 6 9

10
./a.out 8 7 3 2 5 1 10 4 6 9

12
./a.out 8 7 3 11 2 5 1 10 4 12 6 9

15
./a.out 8 7 3 13 15 1 14 2 11 12 4 9 10 5 6


// checl hashmap
	for (int j = 0; j < argc - 1; j++)
	{
		printf("main_num:%d\n", hashes[j].main_num);
		printf("hash_num:%d\n", hashes[j].hash_num);
		printf("idx:%d\n", hashes[j].idx);
		puts("========");
	}

// check list

	// print
	// t_node *p;
	// printf("===========a_list===========\n");
	// p = a_list.head;
	// while (p != NULL)
	// {
	// 	puts("----");
	// 	printf("main:%p\n", p);
	// 	printf("prev:%p\n", p->prev);
	// 	printf("hash:%d\n", p->hash);
	// 	printf("%d\n", p->num);
	// 	printf("next:%p\n", p->next);
	// 	p = p->next;
	// }
	// puts("--a_list--");
	// printf("head:%p\n", a_list.head);
	// printf("tail:%p\n", a_list.tail);
	// printf("size:%d\n",a_list.size);

	// printf("===========b_list===========\n");
	// if (b_list.size != 0)
	// {
	// 	p = b_list.head;
	// 	while (p != NULL)
	// 	{
	// 		puts("----");
	// 		printf("main:%p\n", p);
	// 		printf("prev:%p\n", p->prev);
	// 		printf("hash:%d\n", p->hash);
	// 		printf("%d\n", p->num);
	// 		printf("next:%p\n", p->next);
	// 		p = p->next;
	// 	}
	// 	puts("--b_list--");
	// 	printf("head:%p\n", b_list.head);
	// 	printf("tail:%p\n", b_list.tail);
	// 	printf("size:%d\n",b_list.size);
	// }
	// else
	// {
	// 	puts("b_list is null");
	// }

*/

//
