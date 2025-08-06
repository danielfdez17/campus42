/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoto-ga <dsoto-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 12:54:18 by dsoto-ga          #+#    #+#             */
/*   Updated: 2025/07/20 18:17:04 by dsoto-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	**create_map(void)
{
	int	**map;
	int	i;
	int	j;

	map = malloc(4 * 8);
	if (!map)
		return (0);
	i = 0;
	while (i < 4)
	{
		map[i] = malloc(4 * 4);
		if (!map[i])
			return (0);
		j = 0;
		while (j < 4)
		{
			map[i][j] = 0;
			j++;
		}
		i++;
	}
	return (map);
}

void	free_map(int **map)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(map[i]);
		i++;
	}
	free(map);
}

void	print_map(int **map)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = map[i][j] + '0';
			write(1, &c, 1);
			if (j < 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
