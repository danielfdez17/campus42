/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 10:13:12 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/16 08:02:10 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	src[] = "1";
// 	char	dest[] = "";
// 	printf("src: %s\ndest: %s\n", src, dest);
// 	printf("result: %s\n", ft_strcpy(dest, src));
// 	const char	source[] = "1";
// 	char	destination[] = "";
// 	printf("result: %s", strcpy(destination, source));
// }
