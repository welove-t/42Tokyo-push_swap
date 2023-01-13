/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compression.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:56:00 by terabu            #+#    #+#             */
/*   Updated: 2023/01/13 12:36:48 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_hashmap	*compression(int *num, int cnt)
{
	t_hashmap	*hashmap;

	hashmap = (t_hashmap *)malloc(sizeof(t_hashmap) * cnt);
	if (hashmap != NULL)
		return (NULL);
	ft_printf("lorem");
	set_num(hashmap, num, cnt);
	bubble_sort(hashmap, cnt);
	return (hashmap);
}

void	set_num(t_hashmap *hashmap, int *num, int cnt)
{
	int	i;

	i = 0;
	while (i < cnt)
	{
		hashmap->idx = i;
		hashmap->main_num = num[i];
	}
}

void	set_hash_num(t_hashmap *hashmap, int i)
{
	hashmap[i].hash_num = i;
}

void	swap_hash_value(t_hashmap *hashmap, int j)
{
	t_hashmap	*tmp_hash;

	tmp_hash = (t_hashmap *)malloc(sizeof(t_hashmap));
	tmp_hash->main_num = hashmap[j].main_num;
	hashmap[j].main_num = hashmap[j + 1].main_num;
	hashmap[j + 1].main_num = tmp_hash->main_num;
	tmp_hash->idx = hashmap[j].idx;
	hashmap[j].idx = hashmap[j + 1].idx;
	hashmap[j + 1].idx = tmp_hash->idx;
}

void	bubble_sort(t_hashmap *hashmap, int cnt)
{
	int	i;
	int	j;

	i = 0;
	while (i < cnt)
	{
		j = i;
		while (j < cnt - i - 1)
		{
			if (hashmap[j].main_num > hashmap[j + 1].main_num)
				swap_hash_value(hashmap, j);
			j++;
		}
		set_hash_num(hashmap, i);
		i++;
	}
}
