/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_validator.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orhernan <orhernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 08:15:08 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/30 17:38:47 by orhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_header.h"

/**
 * It validates if the line contains the valid characters
 */
int	validate_line(t_matrix matrix, char *line)
{
	int	i;

	i = 0;
	while (line[i] != '\0')
	{
		if (line[i] != matrix.empty \
			&& line[i] != matrix.fill \
			&& line[i] != matrix.obstacle)
			return (0);
		++i;
	}
	return (i);
}

/**
 * It contains the code of the is_valid_matrix loop
 */
int	valid_matrix_loop(char **line, char *buffer, t_matrix *matrix, int i)
{
	int			length;

	*line = read_index_line(i, buffer);
	length = validate_line(*matrix, *line);
	if (matrix->cols == -1)
		matrix->cols = length;
	else if (matrix->cols != length)
	{
		free_mem(matrix);
		return (-1);
	}
	if (length == 0)
	{
		free_mem(matrix);
		return (-1);
	}
	return (1);
}

/**
 * It checks if the matrix given is either valid or not
 */
t_matrix	*is_valid_matrix(char *buffer)
{
	t_matrix	*ret;
	char		*line;
	int			i;

	i = 1;
	line = read_index_line(0, buffer);
	ret = get_matrix_info(line);
	ret->cols = -1;
	ret->matrix = malloc(sizeof(char *) * ret->rows);
	if (ret->matrix == NULL)
		return (NULL);
	while (i <= ret->rows)
	{
		if (valid_matrix_loop(&line, buffer, ret, i) < 0)
			return (NULL);
		ret->matrix[i - 1] = ft_strdup(line);
		++i;
	}
	return (ret);
}
