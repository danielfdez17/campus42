/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 09:20:00 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/17 13:59:22 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\000')
		++i;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size_i;

	i = 0;
	while (dest[i] != '\0')
		++i;
	size_i = i;
	j = 0;
	while (src[j] != '\0' && j < size)
	{
		dest[i] = src[j];
		++j;
		++i;
	}
	dest[i] = '\0';
	if (size > j)
		return (size + j);
	return (size + i);
}

// int	main(void)
// {
// 	char	dest[] = "";
// 	char	*src = " buenos dias";
// 	unsigned int	size = 0;
// 	printf("%d\n", ft_strlcat(dest, src, size));
// 	return (0);
// }