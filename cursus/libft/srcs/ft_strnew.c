#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*ptr;

	ptr = malloc(sizeof(char) * size);
	if (!ptr)
		return (NULL);
	while (size--)
		ptr[size] = '\0';
	return (ptr);
}
