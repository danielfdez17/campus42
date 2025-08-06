/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 14:49:06 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/14 08:14:48 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\000')
	{
		write(1, &str[i], 1);
		++i;
	}
}

// int	main(void)
// {
// 	char *c = "Hola buenos dias";
// 	ft_putstr(c);
// }
