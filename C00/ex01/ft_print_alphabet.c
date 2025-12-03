/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloma2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 14:38:19 by carloma2          #+#    #+#             */
/*   Updated: 2025/03/22 15:38:59 by carloma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alfbeto;

	alfbeto = 'a';
	while (alfbeto <= 'z')
	{
		write(1, &alfbeto, 1);
		alfbeto++;
	}
}
