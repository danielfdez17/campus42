/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 14:46:46 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/14 08:13:49 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp_a;
	int	tmp_b;

	tmp_a = *a / *b;
	tmp_b = *a % *b;
	*a = tmp_a;
	*b = tmp_b;
}

// int	main(void)
// {
// 	int *a = malloc(sizeof(int));
// 	int *b = malloc(sizeof(int));
// 	*a = 6;
// 	*b = 3;
// 	printf("Antes: a=%d, b=%d\n", *a, *b);
// 	ft_ultimate_div_mod(a, b);
// 	printf("Despues: a=div=%d, b=mod=%d", *a, *b);
// 	free(a);
// 	free(b);
// }
