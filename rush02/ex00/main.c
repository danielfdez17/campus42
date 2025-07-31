/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 09:08:49 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/27 17:36:12 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	main(int ac, char **av)
{
	if (ac < 2 || ac > 3)
	{
		ft_put_error("Error: either 1 or 2 args are needed\n");
		return (0);
	}
	if (ac == 2)
		handle_single_arg(av[1]);
	else
		handle_two_args(av[1], av[2]);
	return (0);
}
