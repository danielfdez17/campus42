/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 08:05:35 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/24 08:11:21 by danfern3         ###   ########.fr       */
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
	return (i - 1);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	sqrt;

	if (nb == 2)
		return (1);
	if (nb <= 1 || nb % 2 == 0)
		return (0);
	i = 2;
	sqrt = ft_sqrt(nb) + 1;
	while (i <= sqrt)
	{
		if (nb % i == 0)
			return (0);
		++i;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	while (ft_is_prime(++nb) != 1)
		;
	return (nb);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 		printf("Siguiente primo de %d es %d\n", 
// atoi(av[1]), ft_find_next_prime(atoi(av[1])));
// 	else
// 		printf("Introduce un número como parámetro\n");
// 	return (0);
// }