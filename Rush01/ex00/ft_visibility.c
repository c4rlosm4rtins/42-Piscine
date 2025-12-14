/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_visibility.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloma2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 13:38:51 by carloma2          #+#    #+#             */
/*   Updated: 2025/03/30 13:39:08 by carloma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_skyscraper.h"

/* Conta visíveis a partir da esquerda */
int	ft_count_visible_left(int row[SIZE])
{
	int	count;
	int	max;
	int	i;

	count = 1;
	max = row[0];
	i = 1;
	while (i < SIZE)
	{
		if (row[i] > max)
		{
			max = row[i];
			count++;
		}
		i++;
	}
	return (count);
}

/* Conta visíveis a partir da direita */
int	ft_count_visible_right(int row[SIZE])
{
	int	count;
	int	max;
	int	i;

	count = 1;
	max = row[SIZE - 1];
	i = SIZE - 2;
	while (i >= 0)
	{
		if (row[i] > max)
		{
			max = row[i];
			count++;
		}
		i--;
	}
	return (count);
}

/* Verifica todas as restrições de visibilidade */
int	ft_check_visibility(int grid[SIZE][SIZE], int *views)
{
	int	i;
	int	j;
	int	row[SIZE];
	int	col[SIZE];

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			row[j] = grid[i][j];
			col[j] = grid[j][i];
			j++;
		}
		if (ft_count_visible_left(row) != views[8 + i]
			|| ft_count_visible_right(row) != views[12 + i])
			return (0);
		if (ft_count_visible_left(col) != views[0 + i]
			|| ft_count_visible_right(col) != views[4 + i])
			return (0);
		i++;
	}
	return (1);
}
