/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_handlers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 09:02:28 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/27 09:04:31 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_header.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	arr[2];

	if (to_find[0] == '\0')
		return (&str[0]);
	arr[0] = 0;
	arr[1] = 0;
	while (str[arr[0]] != '\0')
	{
		if (str[arr[0]] == to_find[arr[1]])
			++arr[1];
		else
		{
			if (to_find[arr[1]] == '\0')
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
