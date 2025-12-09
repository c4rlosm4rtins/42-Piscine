/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*   By: carloma2 & ahuanga <marvin@42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:23:02 by carloma2 & ahuanga      #+#    #+#       */
/*   Updated: 2025/04/09 18:43:54 by carloma2 & ahuanga      ###   ########.fr*/
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	print_map(t_map *map)
{
	int	i;

	i = 0;
	while (i < map->rows)
	{
		write(1, map->grid[i], map->cols);
		write(1, "\n", 1);
		i++;
	}
}
