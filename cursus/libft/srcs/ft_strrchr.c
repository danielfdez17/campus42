#include <stdlib.h>
#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	size;

	size = ft_strlen(s);
	while (size--)
		if (s[size] == (unsigned char)c)
			return ((char *)(s + size));
	return (NULL);
}
