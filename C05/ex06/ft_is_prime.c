/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloma2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 19:26:40 by carloma2          #+#    #+#             */
/*   Updated: 2025/04/10 19:26:43 by carloma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i * i <= nb && i <= 46340)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
/*
int	main(void)
{
	printf("0: %d\n", ft_is_prime(0));		// 0
	printf("1: %d\n", ft_is_prime(1));		// 0
	printf("2: %d\n", ft_is_prime(2));		// 1
	printf("3: %d\n", ft_is_prime(3));		// 1
	printf("4: %d\n", ft_is_prime(4));		// 0
	printf("17: %d\n", ft_is_prime(17));		// 1
	printf("2147483647: %d\n",
		ft_is_prime(2147483647)); // 1 (maior primo de 32 bits)
	return (0);
}
*/