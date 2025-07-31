/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 07:56:38 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/24 07:44:05 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 		printf("Raiz cuadrada de %d = %d\n", atoi(av[1]), ft_sqrt(atoi(av[1])));
// 	else
// 		printf("Introduce un número como parámetro\n");
// 	return (0);
// }