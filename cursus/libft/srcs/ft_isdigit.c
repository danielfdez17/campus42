
int	ft_isdigit(int c)
{
	if ((unsigned char)c >= '0' && (unsigned char)c <= '9')
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
// 		printf("char: %c\nisdigit: %d\nft_isdigit: %d\n---\n", av[i][0], isdigit(av[i][0]), ft_isdigit(av[i][0]));
// 		++i;
// 	}
// 	return (0);
// }