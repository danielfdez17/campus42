/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 07:45:52 by danfern3          #+#    #+#             */
/*   Updated: 2025/10/03 07:45:53 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	int		i;

	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[start] != '\0')
	{
		ptr[i++] = s[start];
		++start;
		--len;
	}
	while (len--)
		ptr[i++] = '\0';
	ptr[i] = '\0';
	return (ptr);
}

// #include <stdio.h>
// int main(void)
// {
// 	char const *s = "Hola buenos dias";
// 	unsigned int start = 3;
// 	size_t len = 13;
// 	char *ptr = ft_substr(s, start, len);
// 	printf("ft_substr: %s\n", ptr);
// 	return (0);
// }
