/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 08:10:30 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/30 11:44:50 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_header.h"

/**
 * Initializes the search square
 */
void	init_search_square(struct s_square *square, int i, int j, int size)
{
	square->x = i;
	square->y = j;
	square->size = size;
}

/**
 * It updates the biggest_square with the info of the given @param square
 */
void	update_biggest_square(struct s_square square, \
		struct s_square *biggest_square)
{
	if (biggest_square == NULL)
	{
		biggest_square = malloc(sizeof(struct s_square *));
		if (biggest_square == NULL)
			return ;
		biggest_square->x = 0;
		biggest_square->y = 0;
		biggest_square->size = 1;
	}
	biggest_square->x = square.x;
	biggest_square->y = square.y;
	biggest_square->size = square.size;
}

/**
 * Aux function that searches the biggest possible square
 * inside the matrix
 */
void	search_square_aux(struct s_square initial_pos, \
		struct s_square *biggest_square, \
		struct s_matrix matrix)
{
	int	i;
	int	j;

	i = initial_pos.x;
	j = initial_pos.y;
	initial_pos.size = i - initial_pos.x;
	while (i <= matrix.rows && j <= matrix.cols)
	{
		if (search_obstacles(initial_pos, matrix, i, j) == 0)
		{
			if (initial_pos.size > biggest_square->size)
				update_biggest_square(initial_pos, biggest_square);
			else if (initial_pos.size == biggest_square->size && \
				(initial_pos.x < biggest_square->x \
					&& initial_pos.y < biggest_square->y))
				update_biggest_square(initial_pos, biggest_square);
		}
		++i;
		++j;
		initial_pos.size = j - initial_pos.y;
	}
}

/**
 * Iterates over the whole matrix looking for the biggest possible square
 */
void	search_square(t_matrix *matrix)
{
	int			i;
	int			j;
	t_square	initial_pos;
	t_square	biggest_square;

	biggest_square.x = 0;
	biggest_square.y = 0;
	biggest_square.size = 0;
	i = 0;
	while (i < matrix->rows)
	{
		j = 0;
		while (j < matrix->cols)
		{
			init_search_square(&initial_pos, i, j, biggest_square.size);
			search_square_aux(initial_pos, &biggest_square, *matrix);
			++j;
		}
		++i;
	}
	update_matrix(matrix, biggest_square);
}
