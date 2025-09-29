#include <stdlib.h>
#include "../includes/libft.h"

char	*ft_strcat(char *restrict dst, const char *restrict src)
{
	char	*result;

	result = malloc(sizeof(char) * (ft_strlen(dst) + ft_strlen(src) + 1));
	if (!result)
		return (NULL);
	while (*dst)
		*result++ = *dst++;	
	while (*src)
		*result++ = *src++;
	*result = '\0';
	return (result);
}
