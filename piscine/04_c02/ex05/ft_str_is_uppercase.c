/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 12:15:36 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/14 12:29:23 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	only_uppercase;

	i = 0;
	only_uppercase = 1;
	while (only_uppercase == 1 && str[i] != '\0')
	{
		if (!(65 <= str[i] && str[i] <= 90))
			only_uppercase = 0;
		++i;
	}
	return (only_uppercase);
}

// int	main(void)
// {
// 	char	*c = "1236554876516554987";
// 	printf("%d", ft_str_is_uppercase(c));
// 	char	*a = "HOLA";
// 	printf("%d", ft_str_is_uppercase(a));
// }
