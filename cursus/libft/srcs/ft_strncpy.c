#include <stdlib.h>

char	*ft_strncpy(char *dst, const char *restrict src, size_t dsize)
{
	size_t	i;

	i = 0;
	while (i < dsize && src[i] && dst[i])
	{
		dst[i] = src[i];
		++i;
	}
	while (i < dsize)
	{
		dst[i] = '\0';
		++i;
	}
	dst[i] = '\0';
	return (dst);
}
