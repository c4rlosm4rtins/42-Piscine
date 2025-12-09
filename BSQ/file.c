/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*   By: carloma2 & ahuanga <marvin@42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:00:03 by carloma2 & ahuanga #+#    #+#            */
/*   Updated: 2025/04/09 18:38:30 by carloma2 & ahuanga ###   ########.fr.    */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

#define BUF_SIZE 4096

static int	read_loop(int fd, char **data, int *total)
{
	int		ret;
	char	buf[BUF_SIZE + 1];
	char	*tmp;

	ret = read(fd, buf, BUF_SIZE);
	while (ret > 0)
	{
		tmp = malloc(*total + ret + 1);
		if (!tmp)
			return (0);
		ft_memcpy(tmp, *data, *total);
		ft_memcpy(tmp + *total, buf, ret);
		tmp[*total + ret] = '\0';
		free(*data);
		*data = tmp;
		*total += ret;
		ret = read(fd, buf, BUF_SIZE);
	}
	return (ret >= 0);
}

int	read_file(char *filename, char **out)
{
	int		fd;
	int		total;
	char	*data;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	data = malloc(1);
	if (!data)
		return (close(fd), 0);
	data[0] = '\0';
	total = 0;
	if (!read_loop(fd, &data, &total))
		return (free(data), close(fd), 0);
	*out = data;
	close(fd);
	return (1);
}

int	read_stdin(t_map *map)
{
	char	buf[4096];
	ssize_t	bytes;
	char	*newline;

	bytes = read(0, buf, 4096);
	if (bytes <= 0)
		return (0);
	newline = ft_memchr(buf, '\n', bytes);
	if (!newline)
		return (0);
	*newline = '\0';
	if (!parse_header(buf, map))
		return (0);
	if (!parse_body(newline + 1, map))
		return (0);
	return (1);
}

int	read_map(char *filename, t_map *map)
{
	char	*data;
	char	*newline;

	if (!read_file(filename, &data))
		return (0);
	newline = data;
	while (*newline && *newline != '\n')
		newline++;
	if (*newline != '\n')
		return (free(data), 0);
	*newline = '\0';
	if (!parse_header(data, map))
		return (free(data), 0);
	if (!parse_body(newline + 1, map))
		return (free(data), 0);
	free(data);
	return (1);
}
