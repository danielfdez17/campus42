/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 08:47:12 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/24 12:48:43 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

char	*ft_strdup(char *src)
{
	char			*result;
	unsigned int	i;

	result = malloc(sizeof(char) * ft_strlen(src));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		result[i] = src[i];
		++i;
	}
	result[i] = '\0';
	return (&result[0]);
}

// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	int i = 0;
// 	while (++i < ac)
// 		printf("str      : %s\nft_strdup: %s\n", av[i], ft_strdup(av[i]));
// }
