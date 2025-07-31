/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orhernan <orhernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 15:02:26 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/30 18:29:02 by orhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	main(int ac, char **av)
{
	int		i;

	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			process_matrix(av[i]);
			++i;
		}
	}
	else if (ac == 1)
	{
		stdin_to_file("temp_matrix");
		process_matrix("temp_matrix");
	}
	return (0);
}
