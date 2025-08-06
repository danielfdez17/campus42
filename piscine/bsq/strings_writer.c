/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings_writer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orhernan <orhernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 09:20:16 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/30 17:39:04 by orhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_header.h"

/**
 * It prints 'str' to the corresponding console (success or error)
 */
void	ft_putstr(char *str, int console)
{
	int	i;

	i = 0;
	while (str[i] != '\000')
		write(console, &str[i++], 1);
}

/**
 * It calls ft_putstr to print 'str' in the error console
 */
void	ft_put_error(char *str)
{
	ft_putstr(str, ERROR);
}
