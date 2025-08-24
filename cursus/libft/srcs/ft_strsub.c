#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*result;

	result = malloc(sizeof(char) * (len - start + 1));
	if (!result)
		return (NULL);
	while (s[start])
		*result++ = s[start++];
	return (result);
}
