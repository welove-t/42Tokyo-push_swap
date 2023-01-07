/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 11:31:30 by terabu            #+#    #+#             */
/*   Updated: 2023/01/07 16:15:36 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdlib.h>

typedef struct s_node
{
	int				num;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*head;
}	t_stack;

t_node	*alloc_node(void);
void	set_node(t_node *n, const int num, t_node *next);
void	init_list(t_stack *list);
t_node	*last_list(t_node *n);
void	insert_front(t_stack *list, const int num);
void	insert_back(t_stack *list, const int num);
void	swap_a(t_stack *list);

#endif
