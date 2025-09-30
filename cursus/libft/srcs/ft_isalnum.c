
int ft_isalpha(int c)
{
	if (((unsigned char)c >= 'a' && (unsigned char)c <= 'z')\
		|| ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z'))
		return (2);
	return (0);
}

int	ft_isdigit(int c)
{
	if ((unsigned char)c >= '0' && (unsigned char)c <= '9')
		return (1);
	return (0);
}

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
	// if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
	// 	return (1);
	// return (0);
}

// #include <ctype.h>
// #include <stdio.h>
// int main(int ac, char **av)
// {
// 	int i = 1;
// 	while (ac-- > 1)
// 	{
// 		printf("char: %c\nisalnum: %d\nft_isalnum: %d\n---\n", av[i][0], isalnum(av[i][0]), ft_isalnum(av[i][0]));
// 		++i;
// 	}
// 	return (0);
// }