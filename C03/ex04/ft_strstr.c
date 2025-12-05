/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloma2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:50:10 by carloma2         #+#    #+#              */
/*   Updated: 2025/04/08 16:50:20 by carloma2        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char *text = "Esta é uma string de teste";
	char *find = "string";

	char *result = ft_strstr(text, find);
	if (result)
		printf("Encontrado: %s\n", result); // Esperado: "string de teste"
	else
		printf("Não encontrado.\n");

	return (0);
}
*/
