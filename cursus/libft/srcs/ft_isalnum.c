#include "libft.h"

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