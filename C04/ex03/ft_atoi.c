/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloma2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:59:37 by carloma2          #+#    #+#             */
/*   Updated: 2025/04/09 17:59:44 by carloma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sinal;
	int	resultado;

	sinal = 1;
	resultado = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sinal *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		resultado = (resultado * 10) + (*str - '0');
		str++;
	}
	return (resultado * sinal);
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi(" ---+--+1234ab567"));  // Deve retornar -1234
	printf("%d\n", ft_atoi("   +42"));           // 42
	printf("%d\n", ft_atoi(" --+-42"));          // -42
	printf("%d\n", ft_atoi(" a42"));             // 0
	return (0);
}
*/
