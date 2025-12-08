/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloma2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 19:05:07 by carloma2          #+#    #+#             */
/*   Updated: 2025/04/10 19:05:09 by carloma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main(void)
{
	printf("2^3: %d\n", ft_recursive_power(2, 3));
	printf("5^0: %d\n", ft_recursive_power(5, 0));
	printf("0^0: %d\n", ft_recursive_power(0, 0));
	printf("3^-2: %d\n", ft_recursive_power(3, -2));
	return (0);
}
*/
