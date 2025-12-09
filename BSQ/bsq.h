/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*   By: carloma2 & ahuanga <marvin@42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:23:53 by carloma2 & ahuanga #+#    #+#            */
/*   Updated: 2025/04/09 18:37:50 by carloma2 & ahuanga###   ########.fr.     */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_map {
	int		rows;
	int		cols;
	char	empty;
	char	obst;
	char	full;
	char	**grid;
	int		**dp;
}	t_map;

/* Main functions */
int		read_map(char *filename, t_map *map);
int		read_stdin(t_map *map);
int		parse_header(char *line, t_map *map);
int		parse_body(char *data, t_map *map);
void	solve_map(t_map *map);
void	print_map(t_map *map);
void	free_map(t_map *map);

/* Utils */
int		ft_strlen(char *str);
int		ft_atoi(char *str, int len);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	*ft_memcpy(void *dst, const void *src, size_t n);
int		ft_min3(int a, int b, int c);
int		line_length(char *data);
void	*ft_memchr(const void *s, int c, size_t n);

#endif