#include <stdlib.h>
#include "../includes/libft.h"

int	ft_min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

size_t	ft_strlcat(char *dst, const char *restrict src, size_t dsize)
{
	size_t	total_size;

	total_size = ft_strlen(dst) + ft_min(ft_strlen(src), (int)dsize) + 1;
	while (*dst)
		dst++;
	while (*src && dsize--)
		*dst++ = *src++;
	*dst = '\0';
	return (total_size);
}
