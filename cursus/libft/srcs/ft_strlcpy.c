#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;

	if (dsize == 0)
		return (0);
	i = 0;
	while (src[i] != '\0' && i < dsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

// #include <stdio.h>
// // #include <string.h>
// int main(void)
// {
// 	const char *src = "Hola buenos dias";
// 	char *dest = "destinooooooooo";
// 	printf("src: %s\n", src);
// 	printf("dest: %s\n", dest);
// 	printf("ft_strlcpy: %ld\n", ft_strlcpy(dest, src, 3));
// 	// printf("strlcpy: %d\n", strlcpy(av[1], src, atoi(av[2])));
// 	return (0);
// }
