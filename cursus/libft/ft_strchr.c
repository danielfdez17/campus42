/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 07:46:04 by danfern3          #+#    #+#             */
/*   Updated: 2025/10/03 14:51:15 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr)
		if (*ptr++ == c)
			return (--ptr);
	return (NULL);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(void)
// {
// 	const char *s = "asdfasdfa";
// 	int c = 'o';
// 	printf("ft_strchr: %s\n", ft_strchr(s, c));
// 	printf("strchr: %s\n---\n", strchr(s, c));
// 	return (0);
// }