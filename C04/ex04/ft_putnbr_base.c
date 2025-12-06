/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloma2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:12:59 by carloma2          #+#    #+#             */
/*   Updated: 2025/04/09 18:13:02 by carloma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		base_len;

	if (!check_base(base))
		return ;
	nb = nbr;
	base_len = ft_strlen(base);
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= base_len)
		ft_putnbr_base(nb / base_len, base);
	write(1, &base[nb % base_len], 1);
}
/*
int	main(void)
{
	ft_putnbr_base(42, "0123456789");  // Decimal
	write(1, "\n", 1);
	ft_putnbr_base(-42, "01");        // Binário
	write(1, "\n", 1);
	ft_putnbr_base(42, "0123456789ABCDEF");  // Hexadecimal
	write(1, "\n", 1);
	ft_putnbr_base(42, "poneyvif");   // Base customizada
	write(1, "\n", 1);
	ft_putnbr_base(42, "");           // Base inválida (não imprime nada)
	return (0);
}
*/