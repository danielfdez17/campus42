/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 12:00:29 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/24 12:50:09 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_get_range(int min, int max)
{
	return (max - min);
}

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;

	if (min >= max)
		return (NULL);
	result = malloc(sizeof(int) * ft_get_range(min, max));
	i = 0;
	while (min < max)
		result[i++] = min++;
	return (result);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	min = 0, max = 19;
// 	int size = ft_get_range(min, max);
// 	printf("Rango de valores entre (min, max): (%d,%d) = %d\n", min, max, size);
// 	int *result = ft_range(min, max);
// 	int i = 0;
// 	while (i < size)
// 		printf("%d ", result[i++]);
// 	return (0);
// }