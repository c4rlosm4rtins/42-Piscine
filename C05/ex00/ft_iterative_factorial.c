/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloma2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:30:13 by carloma2          #+#    #+#             */
/*   Updated: 2025/04/10 18:30:15 by carloma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*
int	main(void)
{
	printf("Fatorial de 5: %d\n", ft_iterative_factorial(5));
	printf("Fatorial de 0: %d\n", ft_iterative_factorial(0));
	printf("Fatorial de -3: %d\n", ft_iterative_factorial(-3));
	return (0);
}
*/
