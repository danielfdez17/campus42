/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:16:38 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/22 08:26:16 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb != -2147483648)
			ft_putnbr(-nb);
		else
		{
			ft_putnbr(nb / -10);
			ft_putnbr(-(nb % 10));
		}
		return ;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
		return ;
	}
	ft_putchar('0' + nb);
}

// int main(void)
// {
// 	// -2147483648
// 	ft_putnbr(-2147483648);
// 	ft_putchar('\n');
// 	ft_putnbr(-1546564);
// 	ft_putchar('\n');
// 	ft_putnbr(42);
// 	ft_putchar('\n');
// 	ft_putnbr(2147483647);
// 	ft_putchar('\n');
// 	ft_putnbr(0);
// 	ft_putchar('\n');
// 	ft_putnbr(-1);
// 	ft_putchar('\n');
// 	ft_putnbr(1546564);
// 	ft_putchar('\n');
// 	ft_putnbr(-654);
// 	ft_putchar('\n');
// 	ft_putnbr(9541);
// 	ft_putchar('\n');
// 	ft_putnbr(753951);
// 	ft_putchar('\n');
// 	ft_putnbr(-5469);
// 	ft_putchar('\n');
// 	ft_putnbr(2147483647 + -2147483648);
// 	ft_putchar('\n');
// 	return (0);
// }
