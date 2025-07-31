/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 11:40:43 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/16 08:05:46 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		++i;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	src[] = "123";
// 	char	dest[100] = "asddfadsffasdsf";
// 	unsigned int	n = 3;
// 	printf("src: %s\ndest: %s\n", dest, src);
// 	printf("ft_strncpy: %s\n", ft_strncpy(dest, src, n));
// 	const char	source[] = "123";
// 	char	destination[100] = "asddfadsffasdsf";
// 	printf("strncpy: %s", strncpy(destination, source, (size_t) n));
// }
