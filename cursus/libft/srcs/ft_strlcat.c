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

int	ft_min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	total_size;

	total_size = ft_strlen(dst) + ft_min(ft_strlen(src), (int)dsize) + 1;
	while (*dst)
		dst++;
	while (*src && dsize--)
		*dst++ = *src++;
	*dst = '\0';
	return (total_size);
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