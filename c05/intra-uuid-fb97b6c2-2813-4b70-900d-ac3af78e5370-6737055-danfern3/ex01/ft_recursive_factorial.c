/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:44:31 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/24 07:39:58 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb <= 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	nb = 4;
// 	printf("Factorial de %d: %d\n", nb, ft_recursive_factorial(nb));
// 	nb = 8;
// 	printf("Factorial de %d: %d\n", nb, ft_recursive_factorial(nb));
// 	nb = 0;
// 	printf("Factorial de %d: %d\n", nb, ft_recursive_factorial(nb));
// 	nb = -1;
// 	printf("Factorial de %d: %d\n", nb, ft_recursive_factorial(nb));
// 	nb = 7;
// 	printf("Factorial de %d: %d\n", nb, ft_recursive_factorial(nb));
// 	return (0);
// }