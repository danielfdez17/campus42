/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 07:46:09 by danfern3          #+#    #+#             */
/*   Updated: 2025/10/03 07:46:10 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		ptr[n] = (unsigned char)c;
	return (s);
}

// #include <string.h>
// #include <stdio.h>
// int main(int ac, char **av)
// {
// 	(void)ac;
// 	char *str = "Hello World!";
// 	printf("str: %s\n", str);
// 	printf("char: %c\n", av[3][0]);
// 	printf("bytes: %d\n", atoi(av[4]));
// 	printf("memset: %s\n", (char *)memset(str, atoi(av[3]), atoi(av[4])));
// 	printf("ft_memset: %s\n", (char *)ft_memset(str, atoi(av[3]), atoi(av[4])));
// 	return (0);
// }