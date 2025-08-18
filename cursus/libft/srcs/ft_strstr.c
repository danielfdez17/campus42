#include <stdlib.h>

char	*ft_strstr(char *haystack, char *needle)
{
	unsigned int	arr[2];

	if (needle[0] == '\0')
		return (&haystack[0]);
	arr[0] = 0;
	arr[1] = 0;
	while (haystack[arr[0]] != '\0')
	{
		if (haystack[arr[0]] == needle[arr[1]])
			++arr[1];
		else
		{
			if (needle[arr[1]] == '\0')
			{
				if (arr[1] != 0)
					return (&haystack[arr[0] - arr[1]]);
				return (NULL);
			}
			arr[1] = 0;
		}
		++arr[0];
	}
	if (haystack[arr[0]] == needle[arr[1]])
		return (&haystack[arr[0] - arr[1]]);
	return (NULL);
}