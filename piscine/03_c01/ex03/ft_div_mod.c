/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 14:42:16 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/14 08:12:01 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main(void)
// {
// 	int *div = malloc(sizeof(int));
// 	int *mod = malloc(sizeof(int));
// 	int a = 6;
// 	int b = 3;
// 	ft_div_mod(a, b, div, mod);
// 	printf("a=%d, b=%d, div=%d, mod=%d", a, b, *div, *mod);
// 	free(div);
// 	free(mod);
// }
