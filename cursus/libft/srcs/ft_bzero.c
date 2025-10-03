/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 07:46:20 by danfern3          #+#    #+#             */
/*   Updated: 2025/10/03 07:46:21 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		ptr[n] = 0;
}

// #include <strings.h>
// #include <stdio.h>
// int main(int ac, char **av)
// {
// 	(void)ac;
// 	char *str = "Hello World!";
// 	printf("str: %s\n", str);
// 	printf("bytes: %d\n", atoi(av[2]));
// 	// printf("bzero: %s\n", bzero(str, atoi(av[4])));
// 	ft_bzero(str, atoi(av[2]));
// 	printf("ft_bzero: %s\n", str);
// 	return (0);
// }