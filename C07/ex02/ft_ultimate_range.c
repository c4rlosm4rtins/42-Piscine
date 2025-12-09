/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloma2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 02:47:58 by carloma2          #+#    #+#             */
/*   Updated: 2025/04/12 02:48:01 by carloma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(sizeof(int) * size);
	if (!*range)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}
/*
int	main(void)
{
	int	*range;
	int	size;
	int	min = 10;
	int	max = 15;

	size = ft_ultimate_range(&range, min, max);
	if (size == -1)
	{
		printf("Erro de alocação de memória\n");
		return (1);
	}
	else if (size == 0)
	{
		printf("Intervalo inválido (min >= max)\n");
		return (1);
	}
	
	printf("Tamanho: %d\n", size);
	for (int i = 0; i < size; i++)
		printf("%d ", range[i]);
	printf("\n");
	
	free(range);
	return (0);
}
*/