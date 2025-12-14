/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloma2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 13:40:53 by carloma2          #+#    #+#             */
/*   Updated: 2025/03/30 13:41:07 by carloma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_skyscraper.h"

/* Função recursiva que implementa backtracking para resolver o puzzle */
int	ft_solve(int grid[SIZE][SIZE], int *views, int pos)
{
	int	row;
	int	col;
	int	num;

	if (pos == SIZE * SIZE)
		return (ft_check_visibility(grid, views));
	row = pos / SIZE;
	col = pos % SIZE;
	if (grid[row][col] != 0)
		return (ft_solve(grid, views, pos + 1));
	num = 1;
	while (num <= SIZE)
	{
		if (!ft_is_in_row(grid, row, num) && !ft_is_in_col(grid, col, num))
		{
			grid[row][col] = num;
			if (ft_solve(grid, views, pos + 1))
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}
