/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 12:28:27 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/14 12:30:34 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (97 <= str[i] && str[i] <= 122)
			str[i] -= 32;
		++i;
	}
	return (str);
}

// int	main(void)
// {
// 	char	c[] = "hola";
// 	printf("%s\n", ft_strupcase(c));
// 	char	a[] = "123hOlA321";
// 	printf("%s\n", ft_strupcase(a));
// }
