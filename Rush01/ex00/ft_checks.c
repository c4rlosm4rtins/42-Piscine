/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloma2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 13:37:53 by carloma2          #+#    #+#             */
/*   Updated: 2025/03/30 13:38:10 by carloma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_skyscraper.h"

/* Verifica se número já existe na linha */
int	ft_is_in_row(int grid[SIZE][SIZE], int row, int num)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		if (grid[row][i] == num)
			return (1);
		i++;
	}
	return (0);
}

/* Verifica se número já existe na coluna */
int	ft_is_in_col(int grid[SIZE][SIZE], int col, int num)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		if (grid[i][col] == num)
			return (1);
		i++;
	}
	return (0);
}
