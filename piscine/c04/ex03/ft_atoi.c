/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoull.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:18:29 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/22 08:26:22 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_get_final_nb(int result, int negative_counter)
{
	if (result == -2147483648)
		return (result);
	if (result < 0)
		return (0);
	if (negative_counter % 2 != 0)
		return (-result);
	return (result);
}

int	ft_atoull(char *str)
{
	int	i;
	int	result;
	int	negative_counter;

	i = 0;
	result = -10;
	negative_counter = 0;
	while (str[i] >= '\t' && str[i] <= ' ')
		i++;
	while ((str[i] == '-' || str[i] == '+'))
		if (str[i++] == '-')
			++negative_counter;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result < 0)
			result = (str[i] - '0');
		else
			result = result * 10 + (str[i] - '0');
		++i;
	}
	return (ft_get_final_nb(result, negative_counter));
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
// 	char str[] = "2147483648";
// 	printf("%s, ft_atoull: %d\n", str, ft_atoull(str));
// 	printf("%s, atoi: %d\n", str, atoi(str));
// 	return (0);
// }