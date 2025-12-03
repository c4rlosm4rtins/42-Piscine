/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloma2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:11:36 by carloma2          #+#    #+#             */
/*   Updated: 2025/04/11 17:11:38 by carloma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_combination(int n, int *comb)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(comb[i] + '0');
		i++;
	}
}

void	generate_combinations(int n, int pos, int start, int *comb)
{
	int	i;

	if (pos == n)
	{
		print_combination(n, comb);
		if (comb[0] != 10 - n)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		return ;
	}
	i = start;
	while (i <= 9)
	{
		comb[pos] = i;
		generate_combinations(n, pos + 1, i + 1, comb);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	comb[10];

	if (n <= 0 || n >= 10)
		return ;
	generate_combinations(n, 0, 0, comb);
}
/*
int	main(void)
{
	ft_print_combn(2);
	write(1, "\n", 1);
	return (0);
}
*/