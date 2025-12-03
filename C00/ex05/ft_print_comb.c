/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloma2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:01:15 by carloma2          #+#    #+#             */
/*   Updated: 2025/04/10 15:01:18 by carloma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb_digit(char a, char b, char c, int is_last)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
	if (!is_last)
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_print_comb_digit(a, b, c,
					(a == '7' && b == '8' && c == '9'));
				c++;
			}
			b++;
		}
		a++;
	}
}
/*
int     main(void)
{
    ft_print_comb();
    write(1, "\n", 1);
    return (0);
}
*/
