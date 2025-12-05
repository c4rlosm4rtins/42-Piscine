/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloma2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 09:39:22 by carloma2          #+#    #+#             */
/*   Updated: 2025/04/04 09:39:26 by carloma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	is_numeric;
	int	i;

	is_numeric = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			is_numeric = 0;
		}
		i++;
	}
	return (is_numeric);
}
/*
int	main()
{
	
	printf("%d", ft_str_is_numeric("a"));
	
}
*/
