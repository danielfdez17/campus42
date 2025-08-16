#include <stdlib.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*dest_ptr;
	const unsigned char	*src_ptr;

	dest_ptr = (unsigned char *)dest;
	src_ptr = (const unsigned char *)src;

	while (n-- && *src_ptr != (unsigned char)c)
		*dest_ptr++ = *src_ptr++;
	return (dest);
}
