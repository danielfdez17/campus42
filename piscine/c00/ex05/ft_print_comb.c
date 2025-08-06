/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 09:48:41 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/11 10:34:11 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

const char	g_max_centenas = '7';

const char	g_max_decenas = '8';

const char	g_max_unidades = '9';

void	ft_print_numero(char comb[5])
{
	if (comb[0] == g_max_centenas
		&& comb[1] == g_max_decenas
		&& comb[2] == g_max_unidades)
	{
		write(1, comb, 3);
	}
	else
	{
		write(1, comb, 5);
	}
}

void	ft_print_comb(void)
{
	char	combinacion[5];

	combinacion[0] = '0';
	combinacion[3] = ',';
	combinacion[4] = ' ';
	while (combinacion[0] <= g_max_unidades)
	{
		combinacion[1] = combinacion[0] + 1;
		while (combinacion[1] <= g_max_decenas)
		{
			combinacion[2] = combinacion[1] + 1;
			while (combinacion[2] <= g_max_unidades)
			{
				ft_print_numero(combinacion);
				combinacion[2]++;
			}
			combinacion[1]++;
		}
		combinacion[0]++;
	}
}

// int main()
// {
//     ft_print_comb();
//     return 0;
// }