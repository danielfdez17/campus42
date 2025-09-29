#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;
	size_t				i;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;

	while (i < n && (*ptr1 != '\0' || *ptr2 != '\0'))
	{
		if (ptr1[i] != ptr2[i])
			return ((unsigned char) ptr1[i] - (unsigned char) ptr2[i]);
		++i;
	}
	return (0);
}
