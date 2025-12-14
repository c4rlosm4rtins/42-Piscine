/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloma2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 19:22:54 by carloma2          #+#    #+#             */
/*   Updated: 2025/04/06 19:22:56 by carloma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	rush(char *dict, char *num)
{
	char	*buffer;

	buffer = ft_open_read(dict);
	if (!buffer)
	{
		free(buffer);
		return ;
	}
	print_all(buffer, num);
	free(buffer);
}
