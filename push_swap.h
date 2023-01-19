/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 11:31:30 by terabu            #+#    #+#             */
/*   Updated: 2023/01/19 10:59:25 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/ft_printf.h"
# include <stdlib.h>
# include <stdbool.h>
# include <sysexits.h>

typedef struct s_node
{
	int				num;
	size_t			hash;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*head;
	t_node	*tail;
	size_t	size;
}	t_stack;

typedef struct s_hashmap
{
	int		main_num;
	size_t	hash_num;
	size_t	idx;
}	t_hashmap;

// initialized
t_stack		initial_alist(int argc, char **argv, size_t *args_size);
size_t		cnt_all_args(int cnt_args, char **argv);
void		set_num_list(int cnt_arg, char **argv, int *all_args);

// check args
bool		check_int(char *str, int sign);
bool		check_args(char *str);
bool		check_duplication(int *all_args, size_t args_size);
bool		check_sort_alist(t_stack *a_list);

// make hash map
t_hashmap	*compression(int *num, size_t cnt);
void		set_num(t_hashmap *hashmap, int *num, size_t cnt);
void		set_hash(t_hashmap *hashmap, size_t cnt);
void		reverse_sort(t_hashmap *hashmap, size_t cnt);
void		swap_val(t_hashmap *hashmap, size_t i, size_t j, int flg);

// make node
t_node		*alloc_node(void);
void		set_node(t_node *n, t_hashmap hash_val, t_node *prev, t_node *next);
void		init_list(t_stack *list);
void		list_add(t_stack *list, t_hashmap hash_val);

// short sort n = 2 or 3
void		short_sort2_a(t_stack *a_list);
void		short_sort3_a(t_stack *a_list);
void		short_sort3_a_head_sm(t_stack *a_list);
void		short_sort3_a_head_md(t_stack *a_list);
void		short_sort3_a_head_lg(t_stack *a_list);
void		short_sort2_b(t_stack *b_list);
void		short_sort3_b(t_stack *b_list);
void		short_sort3_b_head_sm(t_stack *b_list);
void		short_sort3_b_head_md(t_stack *b_list);
void		short_sort3_b_head_lg(t_stack *b_list);

// normal sort 3 < n <= 6
void		sort_normal(t_stack *a_list, t_stack *b_list);
void		pushes(t_stack *a_list, t_stack *b_list);
void		judge_order(t_stack *a_list, t_stack *b_list, size_t i_hash);
void		loop_rotate(t_stack *a_list, size_t i_hash, int flg);

// quick sort n > 7
void		sort_quick(t_stack *alst, t_stack *blst);
void		judge_blst(t_stack *alst, t_stack *blst, size_t min, size_t max);
void		btoa_head(t_stack *alst, t_stack *blst, size_t min, size_t max);
void		move_btoa_tail(t_stack *alst, t_stack *blst);
void		reverse_b(t_stack *alst, t_stack *blst, size_t mn[], size_t cnt);

// node operation
void		swap(t_stack *list);
void		push(t_stack *fm_list, t_stack *to_list);
void		rotate(t_stack *list);
void		reverse(t_stack *list);

// order
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

// end
void		error_exit(void);
void		free_str_array(char **array);
void		free_stack(t_stack *list);

#endif
