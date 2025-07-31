/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 12:27:06 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/25 09:57:17 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_get_range(int min, int max)
{
	return (max - min);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	size = ft_get_range(min, max);
	(*range) = malloc(sizeof(int) * size);
	if (*range == NULL)
		return (0);
	i = 0;
	while (min < max)
		(*range)[i++] = min++;
	return (size);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	min = -100, max = -10;
// 	int size = ft_get_range(min, max);
// 	printf("Rango de valores entre min: %d y max: %d = %d\n", min, max, size);
// 	int *range;
// 	printf("Size range: %d\n", ft_ultimate_range(&range, min, max));
// 	int i = 0;
// 	while (i < size)
// 		printf("%d ", range[i++]);
// }