/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 08:14:59 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/16 08:14:33 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size && src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (i);
}

// int	main(void)
// {
// 	char	src[] = "123456465asd4f6asdf";
// 	char	dest[] = "";
// 	unsigned int	n = 300;
// 	printf("src: %s\ndest: %s\n", dest, src);
// 	printf("Size de resultado: %d\n", ft_strlcpy(dest, src, n));
// }