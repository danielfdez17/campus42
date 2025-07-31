/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:23:28 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/18 12:33:07 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	size_t size = 0;
// 	char *s1 = "ABC";
// 	char *s2 = "AB";
// 	printf("%d\n", ft_strncmp(s1, s2, (unsigned int) size));
// 	const char	*char1 = "ABC";
// 	const char	*char2 = "AB";
// 	printf("%d\n", strncmp(char1, char2, size));
// 	return (0);
// }