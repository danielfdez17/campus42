/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 10:16:54 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/25 13:42:09 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}

// #include <unistd.h>
// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putnbr(int nb)
// {
// 	if (nb < 0)
// 	{
// 		ft_putchar('-');
// 		if (nb != -2147483648)
// 			ft_putnbr(-nb);
// 		else
// 		{
// 			ft_putnbr(nb / -10);
// 			ft_putnbr(-(nb % 10));
// 		}
// 		return ;
// 	}
// 	if (nb > 9)
// 	{
// 		ft_putnbr(nb / 10);
// 		ft_putnbr(nb % 10);
// 		return ;
// 	}
// 	ft_putchar('0' + nb);
// }
// int	main(void)
// {
// 	int tab[3] = {123, 567, 901};
// 	ft_foreach(tab, 3, &ft_putnbr);
// 	return (0);
// }