/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 07:45:48 by danfern3          #+#    #+#             */
/*   Updated: 2025/10/03 09:24:52 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_get_result(int result, int negative_counter)
{
	if (negative_counter % 2 == 1)
		return (-result);
	return (result);
}

int	ft_atoi(const char *nptr)
{
	int	result;
	int	i;
	int	negative_counter;

	result = 0;
	i = 0;
	negative_counter = 0;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		++i;
	while (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '+')
			return (0);
		negative_counter++;
		++i;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		++i;
	}
	if (negative_counter > 1)
		return (0);
	return (ft_get_result(result, negative_counter));
}

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int main(int ac, char **av)
{
	int i = 1;
	while (--ac)
	{
		printf("ft_atoi: %d\n", ft_atoi(av[i]));
		printf("atoi: %d\n---\n", atoi(av[i]));
		assert(ft_atoi(av[i]) == atoi(av[i]));
		++i;
	}
	return (0);
}