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

char	*ft_strrchr(const char *s, int c)
{
	size_t	size;

	size = ft_strlen(s);
	while (size--)
		if (s[size] == (unsigned char)c)
			return ((char *)(s + size));
	return (NULL);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(void)
// {
// 	const char *s = "oasdfasd";
// 	int c = 'o';
// 	printf("ft_strrchr: %s\n", ft_strrchr(s, c));
// 	printf("strrchr: %s\n---\n", strrchr(s, c));
// 	return (0);
// }