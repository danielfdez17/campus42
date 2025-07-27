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

#include <stdlib.h>
#include "ft_header.h"

/**
 * Given a single argument, the function will check if the argument is
 * a number and if it is not negative. If the number is negative, it will print
 * an error message. If the number is 0, it will print the string "0" and exit.
 * If the number is positive, it will convert the number to a string and print it
 * to the standard output.
 */
void	handle_single_arg(char *av)
{
	long long	n;

	if (is_double(av) == 1)
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
    if (n == 0)
    {
        ft_put_success(read_file("0"));
        return ;
    }
    ft_lltoa(n, av);
    char *result = convert_number_from_str_rev(av);
    if (result)
    {
        ft_put_success(result);
        ft_put_success("\n");
        free(result);
    }
}

void	handle_two_args(char *av1, char *av2)
{
	*av1 = *av2;
    ft_put_success("Handling two args is being worked on!\n");
}
