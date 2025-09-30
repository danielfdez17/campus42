
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// #include <ctype.h>
// #include <stdio.h>
// int main(int ac, char **av)
// {
// 	int i = 1;
// 	while (ac-- > 1)
// 	{
// 		printf("char: %c\nisascii: %d\nft_isascii: %d\n---\n", av[i][0], isascii(av[i][0]), ft_isascii(av[i][0]));
// 		++i;
// 	}
// 	return (0);
// }