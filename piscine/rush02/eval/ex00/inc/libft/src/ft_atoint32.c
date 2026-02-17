/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoint32.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 11:59:47 by rstancu           #+#    #+#             */
/*   Updated: 2026/01/21 12:45:29 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*skip_spaces(const char *p)
{
	while (*p && ft_isspace((unsigned char)*p))
		p++;
	return (p);
}

bool	atoin32_loop(const char *p, int *digit_count,
		long long *accumulator, int *sign)
{
	int			digit;

	while (ft_isdigit((unsigned char)*p))
	{
		digit = *p - '0';
		(*digit_count)++;
		if ((*accumulator) > (LLONG_MAX - digit) / 10)
			return (false);
		(*accumulator) = ((*accumulator) * 10) + digit;
		if (((*sign) == 1 && (*accumulator) > INT_MAX)
			|| ((*sign) == -1 && -(*accumulator) < INT_MIN))
			return (false);
		p++;
	}
	return (true);
}

bool	ft_atoint32(const char *str, int32_t *out_value)
{
	const char	*p;
	long long	accumulator;
	int			sign;
	int			digit_count;

	p = str;
	accumulator = 0;
	sign = 1;
	p = skip_spaces(p);
	digit_count = 0;
	if (*p == '+' || *p == '-')
	{
		if (*p == '-')
			sign = -1;
		p++;
	}
	if (!atoin32_loop(p, &digit_count, &accumulator, &sign))
		return (false);
	if (digit_count == 0)
		return (false);
	*out_value = (int32_t)(sign * accumulator);
	return (true);
}
