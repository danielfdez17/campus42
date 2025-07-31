/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 12:04:08 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/14 12:26:36 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	only_numeric;

	i = 0;
	only_numeric = 1;
	while (only_numeric == 1 && str[i] != '\0')
	{
		if (!(48 <= str[i] && str[i] <= 57))
			only_numeric = 0;
		++i;
	}
	return (only_numeric);
}

// int	main(void)
// {
// 	char	*c = "1236554876516554987";
// 	printf("%d", ft_str_is_numeric(c));
// 	char	*a = "hola";
// 	printf("%d", ft_str_is_numeric(a));
// }
