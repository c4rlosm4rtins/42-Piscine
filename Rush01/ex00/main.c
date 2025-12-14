/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloma2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 13:41:31 by carloma2          #+#    #+#             */
/*   Updated: 2025/03/30 13:41:43 by carloma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_skyscraper.h"

/* Inicializa a matriz grid com zeros */
static void	initialize_grid(int grid[SIZE][SIZE])
{
	int	i;
	int	j;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
			grid[i][j++] = 0;
		i++;
	}
}

/* Processa e valida os argumentos de entrada */
static void	parse_arguments(char *arg, int *views)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (arg[i * 2] < '1' || arg[i * 2] > '4')
			ft_error();
		views[i] = arg[i * 2] - '0';
		i++;
	}
}

/* Ponto de entrada do programa */
int	main(int argc, char **argv)
{
	int	grid[SIZE][SIZE];
	int	views[16];

	if (argc != 2)
		ft_error();
	initialize_grid(grid);
	parse_arguments(argv[1], views);
	if (ft_solve(grid, views, 0))
		ft_print_grid(grid);
	else
		ft_error();
	return (0);
}
