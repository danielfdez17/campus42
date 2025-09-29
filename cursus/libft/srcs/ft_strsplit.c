#include <stdlib.h>
#include "../includes/libft.h"

int	ft_count_words(char const *s, char c)
{
	int	words;
	int	letters;

	words = 0;
	letters = 0;
	while (*s)
	{
		if (*s != c)
			letters++;
		else
		{
			if (letters != 0)
				words++;
			letters = 0;
		}
	}
	return (words);
}

char	*ft_get_segment(char const *s, int i, int letters)
{
	char	*result;
	int		j;

	j = 0;
	result = malloc(sizeof(char) * (letters + 1));
	if (!result)
		return (NULL);
	while (j < letters)
	{
		result[j] = s[i - letters + j];
		++j;
	}
	result[j] = '\0';
	return (result);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		letters;

	i = 0;
	j = 0;
	result = malloc(sizeof(char *) * ft_count_words(s, c));
	if (!result)
		return (NULL);
	while (s[i])
	{
		if ((unsigned char) s[i] != (unsigned char) c)
			++letters;
		else
		{
			if (letters != 0)
			{
				result[j] = ft_get_segment(s, i, letters);
				++j;
			}
			letters = 0;
		}
		++i;
	}
	return (result);
}