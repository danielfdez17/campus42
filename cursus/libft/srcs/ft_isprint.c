
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
// 		printf("char: %c\nisprint: %d\nft_isprint: %d\n---\n", av[i][0], isprint(av[i][0]), ft_isprint(av[i][0]));
// 		++i;
// 	}
// 	return (0);
// }