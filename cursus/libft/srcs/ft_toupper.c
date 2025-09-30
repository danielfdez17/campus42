
int	ft_toupper(int c)
{
	if ((unsigned char)c >= 'a' && (unsigned char)c <= 'z')
		return (c - 32);
	return (c);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>
// int main(int ac, char **av)
// {
// 	int i = 0;
// 	while (ac-- > 1)
// 	{
// 		printf("char: %c\n", av[i][0]);
// 		printf("ft_toupper: %c\n", ft_toupper(av[i][0]));
// 		printf("toupper: %c\n---\n", toupper(av[i][0]));
// 		++i;
// 	}
// 	return (0);
// }