/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_handlers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 09:36:19 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/27 17:35:07 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_header.h"

/**
 * Given the number, the function will check if the argument is
 * zero or negative to print either '0' or an error message.
 */
void	zero_negative_handler(long long n)
{
	if (n < 0)
	{
		ft_put_error("Error\n");
		return ;
	}
	ft_put_success(read_file("0"));
	ft_put_success("\n");
}

/**
 * Given a single argument, the function will check if the argument is
 * a number and if it is not negative. If the number is less than or equal zero,
 * it will print zero_negative_handler function.
 * If the number is positive, it will convert the number to a string and print it
 * to the standard output.
 */
void	handle_single_arg(char *av)
{
	long long	n;
	char		*result;

	if (is_double(av) == 1)
	{
		ft_put_error("Error\n");
		return ;
	}
	n = ft_atoll(av);
	if (n <= 0)
	{
		zero_negative_handler(n);
		return ;
	}
	ft_lltoa(n, av);
	result = convert_number_from_str_rev(av);
	if (result)
	{
		ft_put_success(result);
		ft_put_success("\n");
		free(result);
	}
}

/**
 * Given two arguments, both the new dictionary and the number to convert,
 * the function should have the same behaviour as handle_single_arg, but
 * it would pass the name of the new dictionary thorug every function to
 * read the dictionary that the user wants.
 */
void	handle_two_args(char *av1, char *av2)
{
	*av1 = *av2;
	ft_put_success("Handling two args is being worked on!\n");
}
