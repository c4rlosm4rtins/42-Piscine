/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloma2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:30:08 by carloma2         #+#    #+#              */
/*   Updated: 2025/04/08 16:30:38 by carloma2        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	i;

	a = 0;
	i = 0;
	while (dest[a] != '\0')
		a++;
	while (src[i] != '\0' && i < nb)
	{
		dest[a] = src[i];
		a++;
		i++;
	}
	dest[a] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char dest[50] = "Ola ";
	char *src = "mundo maravilhoso";

	ft_strncat(dest, src, 5);
	printf("Resultado: %s\n", dest); // "Ola mundo"
	return (0);
}
*/
