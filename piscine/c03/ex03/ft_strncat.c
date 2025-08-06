/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:26:57 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/16 08:34:33 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		++i;
	j = 0;
	while (src[j] != '\0' && j < nb)
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
// 	char	*src = " buenos dias";
// 	unsigned int	nb = 2;
// 	printf("%s\n", ft_strncat(dest, src, nb));
// 	char	dest2[] = "hola";
// 	const char	*src2 = " buenos dias";
// 	printf("%s\n", strncat(dest2, src2, nb));
// 	return (0);
// }