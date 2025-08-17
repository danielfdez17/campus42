#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = s;
	while (*ptr)
		if (*ptr++ == (unsigned char)c)
			return (ptr);
	return (NULL);
}
