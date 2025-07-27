/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_handlers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 09:36:19 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/27 11:25:58 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	handle_single_arg(char *av)
{
	long long	n;

	if (check_double(av) == 1)
	{
		ft_put_error("Error\n");
		return ;
	}
	n = ft_atoll(av);
	if (n < 0)
	{
		ft_put_error("Error\n");
		return ;
	}
	ft_split_number(n);
}

void	handle_two_args(char *av1, char *av2)
{
	*av1 = *av2;
	handle_single_arg(av2);
}
