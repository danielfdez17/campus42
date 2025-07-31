/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 12:19:32 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/15 07:57:48 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	only_printable;

	i = 0;
	only_printable = 1;
	while (only_printable == 1 && str[i] != '\0')
	{
		if (!(32 <= str[i] && str[i] <= 126))
			only_printable = 0;
		++i;
	}
	return (only_printable);
}

// int	main(void)
// {
// 	char	*c = "A ASD";
// 	printf("%d", ft_str_is_printable(c));
// 	char	*a = "lkadsfklasdflkajdsdf";
// 	printf("%d", ft_str_is_printable(a));
// }
