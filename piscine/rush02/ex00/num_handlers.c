/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_handlers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 09:23:05 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/27 16:52:57 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Depending on both params, returns 0 if the result is negative.
 * If the number is positive, it returns eithers its positive or negative
 * value depending on the negative_counter value
 */
long long	ft_get_final_nb(long long result, int negative_counter)
{
	if (result < 0)
		return (0);
	if (negative_counter % 2 != 0)
		return (-result);
	return (result);
}

/**
 * Converts the string to its long long equivalent
 * before ending the function
 */
long long	ft_atoll(char *str)
{
	int			i;
	long long	result;
	int			negative_counter;

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

/**
 * Converts the number 'nb' to a string and reverse the result
 * before ending the function
 */
void	ft_lltoa(long long nb, char *str)
{
	int		i;
	int		j;
	char	tmp[20];

	if (nb == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return ;
	}
	i = 0;
	while (nb > 0)
	{
		tmp[i++] = (nb % 10) + '0';
		nb /= 10;
	}
	j = 0;
	while (i--)
		str[j++] = tmp[i];
	str[j] = '\0';
}
