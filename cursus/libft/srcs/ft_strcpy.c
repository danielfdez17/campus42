#include <stdlib.h>
#include "../includes/libft.h"

char	*ft_strcpy(char *restrict dst, const char *restrict src)
{
	char	*ptr;

	ptr = ft_memcpy(dst, src, ft_strlen(src));
	*ptr = '\0';
	return (ptr);
}
