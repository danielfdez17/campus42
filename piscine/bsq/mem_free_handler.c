/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_free_handler.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 08:09:32 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/30 08:49:21 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_header.h"

/**
 * It frees the memory allocated by the @param matrix
 */
void	free_mem(t_matrix *matrix)
{
	int	i;

	if (matrix->matrix == NULL)
		return ;
	i = 0;
	while (i < matrix->rows)
	{
		free(matrix->matrix[i]);
		++i;
	}
	free(matrix->matrix);
}
