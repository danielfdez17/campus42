#include <stdlib.h>

char	*ft_strncat(char *restrict dst, const char *src, size_t ssize)
{
	char	*result;

	result = malloc(sizeof(char) * (ft_strlen(dst) + ft_strlen(src) + 1));
	if (!result)
		return (NULL);
	while (*dst)
		*result++ = *dst++;	
	while (*src && ssize--)
		*result++ = *src++;
	while (ssize--)
		*result++ = '\0';
	*result = '\0';
	return (result);
}
