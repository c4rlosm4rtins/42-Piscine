/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloma2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:57:38 by carloma2          #+#    #+#             */
/*   Updated: 2025/04/10 18:57:42 by carloma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
int	main(void)
{
	printf("2^3: %d\n", ft_iterative_power(2, 3));
	printf("5^0: %d\n", ft_iterative_power(5, 0));
	printf("0^0: %d\n", ft_iterative_power(0, 0));
	printf("3^-2: %d\n", ft_iterative_power(3, -2));
	return (0);
}
*/
