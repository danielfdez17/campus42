/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 07:45:55 by danfern3          #+#    #+#             */
/*   Updated: 2025/10/03 14:52:48 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/** 
 * @var arr[0] iterates trough the characters of @param str
 * @var arr[1] iterates the matching characters
*/
char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	unsigned int	arr[2];

	if (to_find[0] == '\0')
		return (&str[0]);
	arr[0] = 0;
	arr[1] = 0;
	while (str[arr[0]] != '\0')
	{
		if (str[arr[0]] == to_find[arr[1]] && arr[1] < (unsigned int)len)
			++arr[1];
		else
		{
			if (to_find[arr[1]] == '\0' || arr[1] == (unsigned int)len)
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

// #include <stdio.h>
// int main(void)
// {
// 	char	*str = "aaaaa";
// 	char	*to_find = "aaaaa";
// 	size_t len = 3;
// 	printf("%s\n", ft_strstr(str, to_find, len));
// 	// const char	*haystack = "abcabcabc";
// 	// const char	*needle = "abcabcabc";
// 	// printf("%s\n", strstr(haystack, needle));
// 	return (0);
// }