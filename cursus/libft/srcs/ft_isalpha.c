
int ft_isalpha(int c)
{
	if (((unsigned char)c >= 'a' && (unsigned char)c <= 'z')\
		|| ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z'))
		return (2);
	return (0);
}

// #include <ctype.h>
// #include <stdio.h>
// int main(int ac, char **av)
// {
// 	int i = 1;
// 	while (ac-- > 1)
// 	{
// 		printf("char: %c\nisalpha: %d\nft_isalpha: %d\n---\n", av[i][0], isalpha(av[i][0]), ft_isalpha(av[i][0]));
// 		++i;
// 	}
// 	return (0);
// }