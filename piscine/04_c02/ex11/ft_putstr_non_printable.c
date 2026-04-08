/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 08:29:41 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/15 08:46:24 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_hex_value(char c)
{
	return (c % 16);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	char back_slash;

	back_slash = '\\';
	i = 0;
	while (str[i] != '\0')
	{
		if (!(32 <= str[i] && str[i] <= 126))
		{
			write(1, &back_slash, 1);
			write(1, &str[i], 1);
			str[i] = '0' + get_hex_value(str[i]);
			write(1, &str[i], 1);
		}
		else
			write(1, &str[i], 1);
		++i;
	}
}

int	main(void)
{
	char	src[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(src);
}