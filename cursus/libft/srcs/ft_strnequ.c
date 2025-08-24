#include <stdlib.h>

int	ft_strenqu(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return (0);
		++i;
	}
	return (1);
}