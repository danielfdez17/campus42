/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:29:44 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/24 07:39:11 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb <= 1)
		return (1);
	result = 1;
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	nb = 6;
// 	printf("Factorial de %d: %d\n", nb, ft_iterative_factorial(nb));
// 	nb = 10;
// 	printf("Factorial de %d: %d\n", nb, ft_iterative_factorial(nb));
// 	nb = 0;
// 	printf("Factorial de %d: %d\n", nb, ft_iterative_factorial(nb));
// 	nb = -1;
// 	printf("Factorial de %d: %d\n", nb, ft_iterative_factorial(nb));
// 	nb = 15;
// 	printf("Factorial de %d: %d\n", nb, ft_iterative_factorial(nb));
// 	return (0);
// }