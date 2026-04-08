/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:55:40 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/16 08:33:08 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		++i;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		++j;
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	dest[] = "hola";
// 	char	*src = " \n";
// 	printf("%s\n", ft_strcat(dest, src));
// 	char	dest2[] = "hola";
// 	const char	*src2 = " \n";
// 	printf("%s\n", strcat(dest2, src2));
// 	return (0);
// }