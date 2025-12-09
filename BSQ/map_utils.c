/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils.c                                        :+:      :+:    :+:   */
/*   By: carloma2 & ahuanga <marvin@42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:16:04 by carloma2 & ahuanga      #+#    #+#       */
/*   Updated: 2025/04/09 18:39:27 by carloma2 & ahuanga      ###   ########.fr*/
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static int	parse_line(char *data, t_map *map, char **grid, int i)
{
	int	j;

	j = 0;
	while (j < map->cols)
	{
		if (data[j] != map->empty && data[j] != map->obst)
			return (0);
		grid[i][j] = data[j];
		j++;
	}
	grid[i][j] = '\0';
	return (1);
}

int	parse_body(char *data, t_map *map)
{
	int		i;
	char	**grid;

	map->cols = line_length(data);
	grid = malloc(sizeof(char *) * map->rows);
	if (!grid)
		return (0);
	i = 0;
	while (i < map->rows)
	{
		grid[i] = malloc(map->cols + 1);
		if (!grid[i] || !parse_line(data, map, grid, i))
			return (0);
		data += map->cols + 1;
		if (!*data && i < map->rows - 1)
			return (0);
		i++;
	}
	map->grid = grid;
	return (1);
}

void	free_map(t_map *map)
{
	int	i;

	i = 0;
	while (i < map->rows)
		free(map->grid[i++]);
	free(map->grid);
	if (map->dp)
	{
		i = 0;
		while (i < map->rows)
			free(map->dp[i++]);
		free(map->dp);
	}
}
