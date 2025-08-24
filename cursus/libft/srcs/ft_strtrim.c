#include <stdlib.h>
#include "libft.h"

int	ft_isspace(char c)
{
	if (c == ' '\
		|| c == '\n'\
		|| c == '\t'
		)
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s)
{
	char	*result;
	size_t	start;
	size_t	end;

	start = 0;
	while (ft_isspace(s[start]) == 1)
		++start;
		end = ft_strlen(s) - 1;
	while (ft_isspace(s[end]) == 1)
		--end;
	result = malloc(sizeof(char) * (end - start + 1));
	if (!result)
		return (NULL);
	while (start < end)
	{
		*result++ = s[start];
		++start;
	}
	*result = '\0';
	return (result);
}
