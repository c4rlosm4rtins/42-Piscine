/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloma2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 15:56:27 by carloma2          #+#    #+#             */
/*   Updated: 2025/03/22 16:18:03 by carloma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	numeros;

	numeros = '0';
	while (numeros <= '9')
	{
		write(1, &numeros, 1);
		numeros ++;
	}
}
