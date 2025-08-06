/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:28:49 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/31 07:54:33 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_in_charset(char *charset, char c)
{
	int	i;

	if (c == ' ')
		return (1);
	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i] || c == ' ')
			return (1);
		++i;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	word_count;
	int	letter_count;

	i = 0;
	word_count = 0;
	letter_count = 0;
	while (str[i] != '\0')
	{
		if (is_in_charset(charset, str[i]) == 0)
			letter_count++;
		else
		{
			if (letter_count != 0)
				word_count++;
			letter_count = 0;
		}
		++i;
	}
	if (letter_count != 0)
		word_count++;
	return (word_count);
}

char	*ft_copy_segment(char *dest, char *src, int i, int num_letters)
{
	int	j;

	j = 0;
	while (j < num_letters)
	{
		dest[j] = src[i - num_letters + j];
		++j;
	}
	dest[j] = '\0';
	return (dest);
}

/**
 * @note counters[0] = i
 * @note counters[1] = j
 * @note counters[2] = letter_count
 */
void	inside_loop(char **result, int *counters, char *str)
{
	if (counters[2] != 0)
	{
		result[counters[1]] = malloc(sizeof(char) * counters[2] + 1);
		result[counters[1]] = ft_copy_segment(result[counters[1]], \
			str, counters[0], counters[2]);
		++counters[1];
	}
	counters[2] = 0;
}

/**
 * @note counters[0] = i
 * @note counters[1] = j
 * @note counters[2] = letter_count
 */
char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		counters[3];
	int		word_count;

	word_count = count_words(str, charset);
	result = malloc(sizeof(char *) * (word_count + 1));
	counters[0] = 0;
	counters[1] = 0;
	counters[2] = 0;
	while (str[counters[0]] != '\0')
	{
		if (is_in_charset(charset, str[counters[0]]) == 0)
			counters[2]++;
		else
		{
			inside_loop(result, counters, str);
		}
		++counters[0];
	}
	inside_loop(result, counters, str);
	result[counters[0]] = 0;
	return (result);
}

// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	char	**result;
// 	if (ac > 2)
// 	{
// 		result = ft_split(av[1], av[2]);
// 		int i = 0;
// 		while (result[i] != 0)
// 		{
// 			printf("%s\n", result[i]);
// 			++i;
// 		}
// 		free(result);
// 	}
// 	return (0);
// }
// int main(void)
// {
// 	char	**result;
// 	result = ft_split("hola, buenos. dias", ".,");
// 	int i = 0;
// 	while (result[i] != 0)
// 	{
// 		printf("%s\n", result[i]);
// 		++i;
// 	}
// 	free(result);
// 	return (0);
// }