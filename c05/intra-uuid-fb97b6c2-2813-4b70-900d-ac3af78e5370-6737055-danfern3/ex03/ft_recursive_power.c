/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 14:06:14 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/24 07:40:27 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	nb = 0;
// 	int power = -1;
// 	printf("%d elevado a %d = %d\n", nb, power, ft_recursive_power(nb, power));
// 	nb = 5; power = 6;
// 	printf("%d elevado a %d = %d\n", nb, power, ft_recursive_power(nb, power));
// 	nb = 2; power = 5;
// 	printf("%d elevado a %d = %d\n", nb, power, ft_recursive_power(nb, power));
// 	nb = 4; power = 10;
// 	printf("%d elevado a %d = %d\n", nb, power, ft_recursive_power(nb, power));
// 	nb = 0; power = 0;
// 	printf("%d elevado a %d = %d\n", nb, power, ft_recursive_power(nb, power));
// 	return (0);
// }