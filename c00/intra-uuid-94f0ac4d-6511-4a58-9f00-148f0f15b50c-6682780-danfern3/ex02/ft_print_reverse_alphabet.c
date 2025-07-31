/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 08:10:24 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/10 09:15:26 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	inicio;
	char	final;

	inicio = 'z';
	final = 'a';
	while (inicio >= final)
	{
		ft_putchar(inicio);
		inicio--;
	}
}

// int main()
// {
//     ft_print_reverse_alphabet();
//     return (0);
// }