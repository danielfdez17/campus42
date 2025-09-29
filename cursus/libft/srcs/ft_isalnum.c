#include "../includes/libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c))
		return (1);
	return (0);
}
