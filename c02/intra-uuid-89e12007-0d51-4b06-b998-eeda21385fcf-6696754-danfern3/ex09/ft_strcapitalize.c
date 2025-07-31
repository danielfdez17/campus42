/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 10:13:45 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/14 12:38:03 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// lowcase todas, contar cadenas y poner en mayuscula la primera

// #include <stdio.h>

void	ft_check_last_pos(char *str, int i, int j)
{
	if (j != 0 && (97 <= str[i - j] && str[i - j] <= 122))
		str[i - j] -= 32;
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (65 <= str[i] && str[i] <= 90)
		{
			str[i] += 32;
			j++;
		}
		else if ((97 <= str[i] && str[i] <= 122)
			|| (48 <= str[i] && str[i] <= 57))
			j++;
		else
		{
			if (j != 0 && (97 <= str[i - j] && str[i - j] <= 122))
				str[i - j] -= 32;
			j = 0;
		}
		++i;
	}
	ft_check_last_pos(str, i, j);
	return (str);
}

// int	main(void)
// {
// 	char	c[] = "salut, comment tu vas ?";
// 	printf("%s\n", ft_strcapitalize(c));
// 	char	b[] = "42mots quarante-deux; cinquante+et+un";
// 	printf("%s\n", ft_strcapitalize(b));
// 	char	a[] = "hola, buenos dias? como estas??";
// 	printf("%s\n", ft_strcapitalize(a));
// }