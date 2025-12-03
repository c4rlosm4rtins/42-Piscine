/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloma2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:15:22 by carloma2          #+#    #+#             */
/*   Updated: 2025/03/26 10:42:57 by carloma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{	
	int	temporario;

	temporario = *a;
	*a = *b;
	*b = temporario;
}
/*
int	main(void)
{
	int	v1;
	int	v2;

	v1 = 7;
	v2 = 14;
	ft_swap(&v1, &v2);
	printf("O valor de A: %d, valor de B: %d", v1, v2);
}
*/
