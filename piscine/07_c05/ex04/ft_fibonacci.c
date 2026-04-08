/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 14:12:14 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/24 07:40:45 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	index = 12;
// 	printf("Fibonacci de %d: %d\n", index, ft_fibonacci(index));
// 	index = 10;
// 	printf("Fibonacci de %d: %d\n", index, ft_fibonacci(index));
// 	index = 6;
// 	printf("Fibonacci de %d: %d\n", index, ft_fibonacci(index));
// 	index = 12;
// 	printf("Fibonacci de %d: %d\n", index, ft_fibonacci(index));
// 	index = 19;
// 	printf("Fibonacci de %d: %d\n", index, ft_fibonacci(index));
// 	return (0);
// }