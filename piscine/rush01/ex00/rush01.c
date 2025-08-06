/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoto-ga <dsoto-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 11:29:34 by dsoto-ga          #+#    #+#             */
/*   Updated: 2025/07/20 18:24:56 by dsoto-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_map(int **map);

int	is_solution(int **map, int row, int col, int num)
{
}

int	ft_solver(char **map, char **prs_map, int pos)
{
	int	i;
	int	j;

	j = 0;
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			if (prs_map[i][j])
			{
			}
		}
		j++;
	}
}
