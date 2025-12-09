/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*   By: carloma2 & ahuanga <marvin@42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:01:22 by carloma2 & ahuanga      #+#    #+#       */
/*   Updated: 2025/04/09 18:38:11 by carloma2 & ahuanga      ###   ########.fr*/
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static void	process_stdin(t_map *map)
{
	if (!read_stdin(map))
		ft_putstr("map error\n");
	else
	{
		solve_map(map);
		print_map(map);
		free_map(map);
	}
}

static void	process_files(int argc, char **argv, t_map *map)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (!read_map(argv[i], map))
			ft_putstr("map error\n");
		else
		{
			solve_map(map);
			print_map(map);
			free_map(map);
		}
		i++;
		if (i < argc)
			ft_putchar('\n');
	}
}

int	main(int argc, char **argv)
{
	t_map	map;

	if (argc == 1)
		process_stdin(&map);
	else
		process_files(argc, argv, &map);
	return (0);
}
