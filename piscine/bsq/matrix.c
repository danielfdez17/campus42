/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orhernan <orhernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 07:38:11 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/30 17:15:49 by orhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_header.h"

/**
 * Given a square and the matrix, it returns 1 if the square contains an obstacle
 * or 0 if the obstacle doesn't exist in the square
 */
int	search_obstacles(struct s_square square, \
		struct s_matrix matrix, int x, int y)
{
	int	i;
	int	j;

	i = square.x;
	while (i < matrix.rows && i < x)
	{
		j = square.y;
		while (j < matrix.cols && j < y)
		{
			if (matrix.matrix[i][j] == matrix.obstacle)
				return (1);
			++j;
		}
		++i;
	}
	return (0);
}

/**
 * It updates the content of the result matrix
 */
void	update_matrix(t_matrix *matrix, t_square biggest_square)
{
	int	i;
	int	j;

	i = biggest_square.x;
	while (i < biggest_square.x + biggest_square.size)
	{
		j = biggest_square.y;
		while (j < biggest_square.y + biggest_square.size)
		{
			matrix->matrix[i][j] = matrix->fill;
			++j;
		}
		++i;
	}
}

/**
 * It returns a pointer to a matrix containing the information
 * of a matrix
 */
t_matrix	*get_matrix_info(char *first_line)
{
	int			i;
	int			len;
	t_matrix	*ret;
	char		*aux;

	ret = malloc(sizeof(t_matrix));
	if (ret == NULL)
		return (ret);
	i = 0;
	len = ft_strlen(first_line);
	aux = malloc(sizeof(char) * (len - 3));
	ret->fill = first_line[len - 1];
	ret->obstacle = first_line[len - 2];
	ret->empty = first_line[len - 3];
	while (i < len - 3)
	{
		aux[i] = first_line[i];
		++i;
	}
	ret->rows = ft_atoi(aux);
	return (ret);
}

/**
 * It processes the matrix contained in the given @param file_name
 */
void	process_matrix(char *file_name)
{
	t_matrix	*matrix;

	matrix = read_file(file_name);
	if (matrix == NULL)
	{
		ft_put_error("map error\n");
		return ;
	}
	search_square(matrix);
	ft_putmatrix(matrix);
	free_mem(matrix);
}
