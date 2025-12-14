/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloma2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 19:22:13 by carloma2          #+#    #+#             */
/*   Updated: 2025/04/06 19:22:16 by carloma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_open_read(char *dict)
{
	int		fd;
	char	*buffer;
	int		file_read;
	int		file_size;

	buffer = (char *)malloc((sizeof(char) * 2048));
	if (!buffer)
	{
		dict_error();
		return (0);
	}
	file_size = 0;
	fd = open(dict, O_RDONLY);
	file_read = read(fd, buffer, 2048);
	if (file_read == -1)
	{
		dict_error();
		return (0);
	}
	else
	{
		file_size = file_read;
		close(fd);
	}
	return (buffer);
}
