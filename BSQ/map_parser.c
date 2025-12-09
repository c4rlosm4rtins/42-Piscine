/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_parser.c                                       :+:      :+:    :+:   */
/*   By: carloma2 & ahuanga <marvin@42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:04:48 by carloma2 & ahuanga      #+#    #+#       */
/*   Updated: 2025/04/09 18:39:08 by carloma2 & ahuanga      ###   ########.fr*/
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	line_length(char *data)
{
	int	len;

	len = 0;
	while (data[len] && data[len] != '\n')
		len++;
	return (len);
}

static int	check_unique_chars(t_map *map)
{
	return (!(map->empty == map->obst
			|| map->empty == map->full
			|| map->obst == map->full));
}

int	parse_header(char *line, t_map *map)
{
	int	len;

	len = ft_strlen(line);
	if (len < 4)
		return (0);
	map->full = line[len - 1];
	map->obst = line[len - 2];
	map->empty = line[len - 3];
	map->rows = ft_atoi(line, len - 3);
	if (!check_unique_chars(map))
		return (0);
	return (map->rows > 0);
}
