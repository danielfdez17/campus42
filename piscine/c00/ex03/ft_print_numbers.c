/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 08:12:29 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/10 09:18:51 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	inicio;
	char	final;

	inicio = '0';
	final = '9';
	while (inicio <= final)
	{
		ft_putchar(inicio);
		inicio++;
	}
}

// int main()
// {
//	 ft_print_numbers();
//	 return (0);
// }