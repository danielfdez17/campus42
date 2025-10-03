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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
int main(void)
{
	// * 1
	char *str = "bonjour";
	char *to_find = "";
	size_t len = 3;
	assert(ft_strnstr(str, to_find, len) == strnstr(str, to_find, len));
	// * 2
	assert(ft_strnstr(str, to_find, len) == strnstr(str, to_find, len));
	// * 3
	str = "bonjourno";
	assert(ft_strnstr(str, to_find, len) == strnstr(str, to_find, len));
	// * 4
	str = "bonjour";
	assert(ft_strnstr(str, to_find, len) == strnstr(str, to_find, len));
	// * 5
	assert(ft_strnstr(str, to_find, len) == strnstr(str, to_find, len));
	// * 6
	assert(ft_strnstr(str, to_find, len) == strnstr(str, to_find, len));
	// * 7
	str = "";
	assert(ft_strnstr(str, to_find, len) == strnstr(str, to_find, len));
	// * 8
	str = "bonjour";
	assert(ft_strnstr(str, to_find, len) == strnstr(str, to_find, len));
	// printf("ft_strnstr: %s\n", ft_strnstr(s, c));
	// printf("strnstr: %s\n---\n", strnstr(s, c));
	return (0);
}