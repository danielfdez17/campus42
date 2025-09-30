#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		ptr[n] = 0;
}

// #include <strings.h>
// #include <stdio.h>
// int main(int ac, char **av)
// {
// 	(void)ac;
// 	char *str = "Hello World!";
// 	printf("str: %s\n", str);
// 	printf("bytes: %d\n", atoi(av[2]));
// 	// printf("bzero: %s\n", bzero(str, atoi(av[4])));
// 	ft_bzero(str, atoi(av[2]));
// 	printf("ft_bzero: %s\n", str);
// 	return (0);
// }