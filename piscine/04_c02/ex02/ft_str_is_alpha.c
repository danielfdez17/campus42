/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 11:44:15 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/16 08:09:48 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	only_alpha;

	i = 0;
	only_alpha = 1;
	while (only_alpha == 1 && str[i] != '\0')
	{
		if (!(65 <= str[i] && str[i] <= 90) && !(97 <= str[i] && str[i] <= 122))
			only_alpha = 0;
		++i;
	}
	return (only_alpha);
}

// int	main(void)
// {
// 	char	*c = "aBcDeFgHiJkLmN";
// 	printf("is alpha?: %d\n", ft_str_is_alpha(c));
// }
