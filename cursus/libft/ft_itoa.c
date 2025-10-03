/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 07:46:13 by danfern3          #+#    #+#             */
/*   Updated: 2025/10/03 12:21:58 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

// static size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i])
// 		++i;
// 	return (i);
// }

static int	ft_get_len(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		while (n < 0)
		{
			n /= 10;
			++i;
		}
		return (i + 1);
	}
	while (n > 0)
	{
		n /= 10;
		++i;
	}
	return (i);
}

static char	*ft_reverse(char *s)
{
	size_t	start;
	size_t	end;
	char	c;

	start = 0;
	end = ft_strlen(s) - 1;
	while (start < end)
	{
		c = s[start];
		s[start] = s[end];
		s[end] = c;
		++start;
		--end;
	}
	return (s);
}

static char	*ft_negative_case(int n, char *result, int i)
{
	while (n < 0)
	{
		result[i] = n % 10 + '0';
		++i;
		n /= 10;
	}
	result[i] = '-';
	result[i + 1] = '\0';
	return (ft_reverse(result));
}

char	*ft_itoa(int n)
{
	char	*result;
	int		i;

	result = malloc(sizeof(char) * (ft_get_len(n) + 1));
	if (!result)
		return (NULL);
	if (n == 0)
		return ("0\0");
	i = 0;
	if (n < 0)
		return (ft_negative_case(n, result, i));
	while (n > 0)
	{
		result[i] = n % 10 + '0';
		++i;
		n /= 10;
	}
	result[i] = '\0';
	return (ft_reverse(result));
}

// #include <stdio.h>
// int main(int ac, char **av)
// {
// 	int i = 1;
// 	while (ac-- > 1)
// 	{
// 		printf("ft_itoa(%d): %s\n", atoi(av[i]), ft_itoa(atoi(av[i])));
// 		++i;
// 	}
// 	return (0);
// }