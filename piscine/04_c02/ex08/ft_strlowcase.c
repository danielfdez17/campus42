/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 12:39:16 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/14 12:31:05 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] = str[i] + 32;
		++i;
	}
	return (str);
}

// int	main(void)
// {
// 	char	c[] = "HOLA";
// 	printf("%s\n", ft_strlowcase(c));
// 	char	a[] = "123hOlA321";
// 	printf("%s\n", ft_strlowcase(a));
// }
