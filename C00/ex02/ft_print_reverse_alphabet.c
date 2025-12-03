/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloma2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 14:38:19 by carloma2          #+#    #+#             */
/*   Updated: 2025/03/22 15:54:23 by carloma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alfbetorev;

	alfbetorev = 'z';
	while (alfbetorev >= 'a')
	{
		write(1, &alfbetorev, 1);
		alfbetorev--;
	}
}
