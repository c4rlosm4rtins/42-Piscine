/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloma2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 19:18:46 by carloma2          #+#    #+#             */
/*   Updated: 2025/04/10 19:18:49 by carloma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sqrt;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	sqrt = 1;
	while (sqrt * sqrt <= nb)
	{
		if (sqrt * sqrt == nb)
			return (sqrt);
		if (sqrt > 46340)
			return (0);
		sqrt++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("Raiz de 9: %d\n", ft_sqrt(9));		// 3
	printf("Raiz de 16: %d\n", ft_sqrt(16));		// 4
	printf("Raiz de 5: %d\n", ft_sqrt(5));		// 0 (não é perfeita)
	printf("Raiz de -4: %d\n", ft_sqrt(-4));		// 0
	printf("Raiz de 2147395600: %d\n",
		ft_sqrt(2147395600)); // 46340 (máximo seguro)
	return (0);
}
*/