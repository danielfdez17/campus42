#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr)
		if (*ptr++ == (unsigned char)c)
			return (--ptr);
	return (NULL);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(void)
// {
// 	const char *s = "asdfasdfa";
// 	int c = 'o';
// 	printf("ft_strchr: %s\n", ft_strchr(s, c));
// 	printf("strchr: %s\n---\n", strchr(s, c));
// 	return (0);
// }