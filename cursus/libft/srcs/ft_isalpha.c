/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 07:46:17 by danfern3          #+#    #+#             */
/*   Updated: 2025/10/03 08:19:10 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (((unsigned char)c >= 'a' && (unsigned char)c <= 'z') \
		|| ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z'))
		return (2);
	return (0);
}

// #include <ctype.h>
// #include <stdio.h>
// int main(int ac, char **av)
// {
// 	int i = 1;
// 	while (ac-- > 1)
// 	{
// 		printf("char: %c\n", av[i][0]);
// 		printf("isalpha: %d\n", isalpha(av[i][0]));
// 		printf("ft_isalpha: %d\n---\n", ft_isalpha(av[i][0]));
// 		++i;
// 	}
// 	return (0);
// }