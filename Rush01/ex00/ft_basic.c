/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloma2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 13:37:15 by carloma2          #+#    #+#             */
/*   Updated: 2025/03/30 13:37:32 by carloma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_skyscraper.h"

/* Exibe mensagem de erro e termina o programa */
void	ft_error(void)
{
	write(1, "Error\n", 6);
	exit(1);
}

/* Imprime a grade solução */
void	ft_print_grid(int grid[SIZE][SIZE])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			c = grid[i][j] + '0';
			write(1, &c, 1);
			if (j != SIZE - 1)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
