#include <stdlib.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	size_t	size;

	size = ft_strlen(s);
	while (size--)
		if (s[size] == (unsigned char)c)
			return (ptr);
	return (NULL);
}
