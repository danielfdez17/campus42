/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 09:25:27 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/28 11:29:29 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	main(int ac, char **av)
{
	if (ac == 1)
		ft_put_error("File name missing.\n");
	else if (ac > 2)
		ft_put_error("Too many arguments.\n");
	else if (ac == 2)
		read_file(av[1]);
	return (0);
}
