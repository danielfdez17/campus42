/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 08:06:39 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/10 09:13:31 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	inicio;
	char	final;

	inicio = 'a';
	final = 'z';
	while (inicio <= final)
	{
		ft_putchar(inicio);
		inicio++;
	}
}

// int main()
// {
//	 ft_print_alphabet();
//	 return (0);
// }