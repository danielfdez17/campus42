#include <stdlib.h>
#include "libft.h"

// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i])
// 		++i;
// 	return (i);
// }

static int	ft_is_in_set(char c, char const *set)
{
	char const	*ptr;

	ptr = set;
	while (*ptr)
	{
		if (c == *ptr++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	start;
	size_t	end;
	int		i;

	start = 0;
	while (ft_is_in_set(s1[start], set) == 1)
		++start;
	end = ft_strlen(s1) - 1;
	while (ft_is_in_set(s1[end], set) == 1)
		--end;
	result = malloc(sizeof(char) * (end - start + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		result[i++] = s1[start];
		++start;
	}
	result[i] = '\0';
	return (result);
}

// #include <stdio.h>
// int main(void)
// {
// 	char const *s1 = "      hola---------";
// 	char const *set = " -lo";
// 	char *ptr = ft_strtrim(s1, set);
// 	printf("ft_strtrim: %s\n", ptr);
// 	return (0);
// }