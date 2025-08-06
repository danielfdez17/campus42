/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:06:09 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/16 08:21:57 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		++i;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	if (s1[i] == '\0' && s2[i] != '\0')
		return (-1);
	return (1);
}

// int	main(void)
// {
// 	char *s1 = "ABJ";
// 	char *s2 = "ABC";
// 	printf("%d\n", ft_strcmp(s1, s2));
// 	const char	*char1 = "ABJ";
// 	const char	*char2 = "ABC";
// 	printf("%d\n", strcmp(char1, char2));
// 	return (0);
// }
