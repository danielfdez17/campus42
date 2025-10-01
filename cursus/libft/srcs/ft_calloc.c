#include <stdlib.h>
#include "libft.h"

// void	*ft_memset(void *s, int c, size_t n)
// {
// 	unsigned char	*ptr;

// 	ptr = (unsigned char *)s;
// 	while (n--)
// 		ptr[n] = (unsigned char)c;
// 	return (s);
// }

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}
