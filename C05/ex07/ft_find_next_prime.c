/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloma2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 20:38:16 by carloma2          #+#    #+#             */
/*   Updated: 2025/04/11 20:38:19 by carloma2         ###   ########.fr       */
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
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
int	main(void)
{
	printf("Próximo primo depois de 4: %d\n", ft_find_next_prime(4));    // 5
	printf("Próximo primo depois de 10: %d\n", ft_find_next_prime(10)); // 11
	printf("Próximo primo depois de 13: %d\n", ft_find_next_prime(13)); // 13
	printf("Próximo primo depois de -5: %d\n", ft_find_next_prime(-5)); // 2
	return (0);
}
*/