/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 14:41:08 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/14 08:10:43 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// int	main(void)
// {
// 	int *a = malloc(sizeof(int));
// 	int *b = malloc(sizeof(int));
// 	*a = 3;
// 	*b = 9;
// 	printf("Antes: a = %d, b = %d\n", *a, *b);
// 	ft_swap(a, b);
// 	printf("Despues: a = %d, b = %d", *a, *b);
// 	free(a);
// 	free(b);
// }
