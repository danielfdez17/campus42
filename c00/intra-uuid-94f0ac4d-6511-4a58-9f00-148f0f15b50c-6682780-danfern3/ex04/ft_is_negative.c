/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 08:17:35 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/11 09:49:12 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

const char	g_positivo = 'P';

const char	g_negativo = 'N';

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar(g_negativo);
	}
	else
	{
		ft_putchar(g_positivo);
	}
}

// int	main(void)
// {
// 	ft_is_negative(-2147483647);
// 	ft_is_negative(-542);
// 	ft_is_negative(-1);
// 	ft_is_negative(0);
// 	ft_is_negative(1);
// 	ft_is_negative(259);
// 	ft_is_negative(2147483647);
// 	return (0);
// }
