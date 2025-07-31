/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 15:53:38 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/16 08:37:31 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	arr[2];

	if (to_find[0] == '\0')
		return (&str[0]);
	arr[0] = 0;
	arr[1] = 0;
	while (str[arr[0]] != '\0')
	{
		if (str[arr[0]] == to_find[arr[1]])
			++arr[1];
		else
		{
			if (to_find[arr[1]] == '\0')
			{
				if (arr[1] != 0)
					return (&str[arr[0] - arr[1]]);
				return (NULL);
			}
			arr[1] = 0;
		}
		++arr[0];
	}
	if (str[arr[0]] == to_find[arr[1]])
		return (&str[arr[0] - arr[1]]);
	return (NULL);
}

// int main(void)
// {
// 	char	*str = "abcabcabc";
// 	char	*to_find = "abcabcabc";
// 	printf("%s\n", ft_strstr(str, to_find));
// 	const char	*haystack = "abcabcabc";
// 	const char	*needle = "abcabcabc";
// 	printf("%s\n", strstr(haystack, needle));
// 	return (0);
// }