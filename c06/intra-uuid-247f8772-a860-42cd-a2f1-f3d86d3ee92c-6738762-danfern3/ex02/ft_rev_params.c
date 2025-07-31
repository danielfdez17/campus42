/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 08:20:50 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/23 13:39:48 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		++i;
	}
	str[i] = '\n';
	write(1, &str[i], 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc;
	while (i > 1)
		ft_putstr(argv[--i]);
	return (0);
}
