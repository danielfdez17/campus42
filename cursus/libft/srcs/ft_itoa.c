#include <stdlib.h>
#include "../includes/libft.h"

int	ft_get_len(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		while (n < 0)
		{
			n /= 10;
			++i;
		}
		return (i + 1);
	}
	while (n > 0)
	{
		n /= 10;
		++i;
	}
	return (i);
}

char	*ft_reverse(char *s)
{
	size_t	start;
	size_t	end;
	char	c;

	start = 0;
	end = ft_strlen(s);
	while (start < end)
	{
		c = s[start];
		s[start] = s[end];
		s[end] = c;
		++start;
		--end;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		i;

	result = malloc(sizeof(char) * (ft_get_len(n) + 1));
	if (!result)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		while (n < 0)
		{
			result[i] = n % 10 + '0';
			++i;
			n /= 10;
		}
		result[i] = '-';
		result[i + 1] = '\0';
		return (ft_reverse(result));
	}
	while (n > 0)
	{
		result[i] = n % 10 + '0';
		++i;
		n /= 10;
	}
	result[i] = '\0';
	return (ft_reverse(result));
}
