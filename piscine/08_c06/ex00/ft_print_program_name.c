/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 08:08:32 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/22 08:37:42 by danfern3         ###   ########.fr       */
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
	str[i] = '\n';
	write(1, &str[i], 1);
}

int	main(int argc, char **argv)
{
	ft_putstr(argv[argc - argc]);
	return (0);
}
