/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 09:25:27 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/28 12:29:44 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	main(int ac, char **av)
{
	// if no args provided, prints user inputs
	// scanf is forbidden
	if (ac == 1)
		ft_put_error("File names missing.\n");
	// if args are provides, it prints the content of every file
	// only if it exists
	else if (ac >= 2)
		read_files(ac, av);
	return (0);
}
