/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloma2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:52:45 by carloma2          #+#    #+#             */
/*   Updated: 2025/04/10 18:52:47 by carloma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int	main(void)
{
	printf("Fatorial de 5: %d\n", ft_recursive_factorial(5));
	printf("Fatorial de 0: %d\n", ft_recursive_factorial(0));
	printf("Fatorial de -2: %d\n", ft_recursive_factorial(-2));
	return (0);
}
*/