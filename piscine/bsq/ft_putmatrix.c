/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmatrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 15:50:14 by orhernan          #+#    #+#             */
/*   Updated: 2025/07/30 08:41:33 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_header.h"

/**
 * It prints the character @param c to the console
 */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/**
 * It prints the full row of a matrix
 */
void	ft_putline(char *row, int col)
{
	int	i;

	i = 0;
	while (i < col)
	{
		ft_putchar(row[i]);
		i++;
	}
	ft_putchar('\n');
}

/**
 * It prints the full matrix
 */
void	ft_putmatrix(t_matrix *s_matrix)
{
	int	j;

	j = 0;
	while (j < s_matrix->rows)
	{
		ft_putline(s_matrix->matrix[j], s_matrix->cols);
		j++;
	}
}
