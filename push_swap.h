/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 11:31:30 by terabu            #+#    #+#             */
/*   Updated: 2023/01/12 15:10:05 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/ft_printf.h"
# include <stdlib.h>

typedef struct s_node
{
	int				num;
	int				hash;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*head;
	t_node	*tail;
}	t_stack;

typedef struct s_hashmap
{
	int	main_num;
	int	hash_num;
	int	idx;
}	t_hashmap;

t_hashmap	*compression(int *num, int cnt);
void		set_num(t_hashmap *hashmap, int *num, int cnt);
void		set_hash_num(t_hashmap *hashmap, int i);
void		swap_hash_value(t_hashmap *hashmap, int j);
void		bubble_sort(t_hashmap *hashmap, int cnt);
t_node		*alloc_node(void);
void		set_node(t_node *n, const int num, t_node *prev, t_node *next);
void		init_list(t_stack *list);
void		list_add(t_stack *list, const int num);
void		short_sort2(t_stack *a_list);
void		short_sort3(t_stack *a_list);
void		short_sort3_head_sm(t_stack *a_list);
void		short_sort3_head_md(t_stack *a_list);
void		short_sort3_head_lg(t_stack *a_list);
void		swap(t_stack *list);
void		push(t_stack *fm_list, t_stack *to_list);
void		rotate(t_stack *list);
void		reverse(t_stack *list);
void		sa(t_stack *list);
void		pa(t_stack *a_list, t_stack *b_list);
void		ra(t_stack *a_list);
void		rra(t_stack *a_list);
void		sb(t_stack *b_list);
void		pb(t_stack *a_list, t_stack *b_list);
void		rb(t_stack *b_list);
void		rrb(t_stack *b_list);
void		ss(t_stack *a_list, t_stack *b_list);
void		rr(t_stack *a_list, t_stack *b_list);
void		rrr(t_stack *a_list, t_stack *b_list);

#endif
