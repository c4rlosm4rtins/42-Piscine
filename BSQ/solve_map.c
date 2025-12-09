/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_map.c                                        :+:      :+:    :+:   */
/*   By: carloma2 & ahuanga <marvin@42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:02:06 by carloma2 & ahuanga      #+#    #+#             */
/*   Updated: 2025/04/09 18:50:48 by carloma2 & ahuanga      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static void	fill_square(t_map *map, int max, int max_i, int max_j)
{
	int	i;
	int	j;

	i = max_i;
	while (i > max_i - max)
	{
		j = max_j;
		while (j > max_j - max)
		{
			map->grid[i][j] = map->full;
			j--;
		}
		i--;
	}
}

static void	init_dp(t_map *map)
{
	int	i;

	i = 0;
	map->dp = malloc(sizeof(int *) * map->rows);
	if (!map->dp)
		return ;
	while (i < map->rows)
	{
		map->dp[i] = malloc(sizeof(int) * map->cols);
		if (!map->dp[i])
			return ;
		i++;
	}
}

static void	process_cell(t_map *map, int i, int j, int *max_info)
{
	if (map->grid[i][j] == map->obst)
		map->dp[i][j] = 0;
	else if (i == 0 || j == 0)
		map->dp[i][j] = 1;
	else
	{
		map->dp[i][j] = 1 + ft_min3(map->dp[i - 1][j],
				map->dp[i][j - 1],
				map->dp[i - 1][j - 1]);
	}
	if (map->dp[i][j] > max_info[0])
	{
		max_info[0] = map->dp[i][j];
		max_info[1] = i;
		max_info[2] = j;
	}
}

void	solve_map(t_map *map)
{
	int	max_info[3];
	int	i;
	int	j;

	max_info[0] = 0;
	init_dp(map);
	i = 0;
	while (i < map->rows)
	{
		j = 0;
		while (j < map->cols)
		{
			process_cell(map, i, j, max_info);
			j++;
		}
		i++;
	}
	if (max_info[0] > 0)
		fill_square(map, max_info[0], max_info[1], max_info[2]);
}
