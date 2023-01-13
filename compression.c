/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compression.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:56:00 by terabu            #+#    #+#             */
/*   Updated: 2023/01/14 08:47:57 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_hashmap	*compression(int *num, int cnt)
{
	t_hashmap	*hashmap;

	hashmap = (t_hashmap *)malloc(sizeof(t_hashmap) * cnt);
	if (hashmap == NULL)
		return (NULL);
	set_num(hashmap, num, cnt);
	set_hash(hashmap, cnt);
	reverse_sort(hashmap, cnt);
	return (hashmap);
}

void	set_num(t_hashmap *hashmap, int *num, int cnt)
{
	int	i;

	i = 0;
	while (i < cnt)
	{
		hashmap[i].idx = i;
		hashmap[i].main_num = num[i];
		i++;
	}
}

void	set_hash(t_hashmap *hashmap, int cnt)
{
	int	i;
	int	j;

	i = 0;
	while (i < cnt)
	{
		j = 1;
		while (j < cnt - i)
		{
			if (hashmap[i].main_num > hashmap[i + j].main_num)
				swap_val(hashmap, i, i + j, 0);
			j++;
		}
		hashmap[i].hash_num = i;
		i++;
	}
}

void	reverse_sort(t_hashmap *hashmap, int cnt)
{
	int	i;
	int	j;

	i = 0;
	while (i < cnt)
	{
		j = 1;
		while (j < cnt - i)
		{
			if (hashmap[i].idx > hashmap[i + j].idx)
				swap_val(hashmap, i, i + j, 1);
			j++;
		}
		i++;
	}
}

void	swap_val(t_hashmap *hashmap, int i, int j, int flg)
{
	t_hashmap	*tmp_hash;

	tmp_hash = (t_hashmap *)malloc(sizeof(t_hashmap));
	tmp_hash->main_num = hashmap[i].main_num;
	hashmap[i].main_num = hashmap[j].main_num;
	hashmap[j].main_num = tmp_hash->main_num;
	tmp_hash->idx = hashmap[i].idx;
	hashmap[i].idx = hashmap[j].idx;
	hashmap[j].idx = tmp_hash->idx;
	if (flg == 1)
	{
		tmp_hash->hash_num = hashmap[i].hash_num;
		hashmap[i].hash_num = hashmap[j].hash_num;
		hashmap[j].hash_num = tmp_hash->hash_num;
	}
}
