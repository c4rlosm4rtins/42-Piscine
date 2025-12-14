/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skyscraper.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloma2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 13:35:32 by carloma2          #+#    #+#             */
/*   Updated: 2025/03/30 13:35:54 by carloma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SKYSCRAPER_H
# define FT_SKYSCRAPER_H

# include <unistd.h>
# include <stdlib.h>

# define SIZE 4

// Funções básicas
void	ft_error(void);
void	ft_print_grid(int grid[SIZE][SIZE]);

// Funções de verificação
int		ft_is_in_row(int grid[SIZE][SIZE], int row, int num);
int		ft_is_in_col(int grid[SIZE][SIZE], int col, int num);

// Funções de visibilidade
int		ft_count_visible_left(int row[SIZE]);
int		ft_count_visible_right(int row[SIZE]);
int		ft_check_visibility(int grid[SIZE][SIZE], int *views);

// Função de resolução
int		ft_solve(int grid[SIZE][SIZE], int *views, int pos);

#endif
