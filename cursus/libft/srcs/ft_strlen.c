#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		++i;
	return (i);
}

// #include <string.h>
// #include <stdio.h>
// int main(int ac, char **av)
// {
// 	int i = 1;
// 	while (ac-- > 1)
// 	{
// 		printf("str: %s\nstrlen: %lld\nft_strlen: %lld\n---\n", av[i], strlen(av[i]), ft_strlen(av[i]));
// 		++i;
// 	}
// 	return (0);
// }