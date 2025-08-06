/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:18:40 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/25 10:04:27 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\000')
		++i;
	return (i);
}

int	get_total_size(char **strs, int size, char *sep)
{
	int	total;
	int	i;

	total = ft_strlen(sep) * size - 2;
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		++i;
	}
	return (total);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		++i;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		++j;
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strconcat(char *dest, char *sep, char *src)
{
	if (dest == NULL || dest[0] == '\0')
		return (ft_strcat(dest, src));
	dest = ft_strcat(dest, sep);
	dest = ft_strcat(dest, src);
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	result = malloc(sizeof(char) * get_total_size(strs, size, sep));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		result = ft_strconcat(result, sep, strs[i]);
		++i;
	}
	return (result);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int size = 4;
// 	char	**strs;
// 	strs = malloc(sizeof(char *));
// 	*strs = malloc(sizeof(char) * size);
// 	strs[0] = "Hola";
// 	strs[1] = "Buenas";
// 	strs[2] = "Como";
// 	strs[3] = "estas hoy";
// 	char sep[] = " -_- ";
// 	printf("%s\n", ft_strjoin(size, strs, sep));	
// 	return (0);
// }