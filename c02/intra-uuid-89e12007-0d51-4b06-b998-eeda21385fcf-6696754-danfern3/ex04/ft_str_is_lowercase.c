/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 12:10:20 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/14 12:28:04 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	only_lowercase;

	i = 0;
	only_lowercase = 1;
	while (only_lowercase == 1 && str[i] != '\0')
	{
		if (!(97 <= str[i] && str[i] <= 122))
			only_lowercase = 0;
		++i;
	}
	return (only_lowercase);
}

// int	main(void)
// {
// 	char	*c = "1236554876516554987";
// 	printf("%d", ft_str_is_lowercase(c));
// 	char	*a = "sadf";
// 	printf("%d", ft_str_is_lowercase(a));
// }
