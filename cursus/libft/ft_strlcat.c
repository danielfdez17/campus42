/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 07:46:00 by danfern3          #+#    #+#             */
/*   Updated: 2025/10/03 15:02:54 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i])
// 		++i;
// 	return (i);
// }

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	j;
	size_t	src_size;
	size_t	dst_size;

	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	i = dst_size;
	j = 0;
	if (dsize <= dst_size)
		return (dsize + src_size);
	while (*src && i < (dsize - 1))
	{
		*(dst + i) = *(src + j);
		++i;
		++j;
	}
	*(dst + i) = '\0';
	return (dst_size + src_size);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	const char *src = "Hola buenos dias";
// 	char *dest = "destinooooooooo";
// 	printf("src: %s\n", src);
// 	printf("dest: %s\n", dest);
// 	printf("ft_strlcat: %ld\n", ft_strlcat(dest, src, 3));
// 	printf("strlcat: %ld\n", strlcat(dest, src, 3));
// 	return (0);
// }