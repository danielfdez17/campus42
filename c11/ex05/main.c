/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 11:25:50 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/25 14:41:47 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\000')
	{
		write(1, &str[i], 1);
		++i;
	}
}

int	get_sol(int a, char op, int b)
{
	if (op == '+')
		return (a + b);
	if (op == '-')
		return (a + b);
	if (op == '*')
		return (a * b);
	if (op == '/' && b != 0)
		return (a / b);
	if (op == '%' && b != 0)
		return (a % b);
	return (0);
}

int	check_security(int a, char op, int b)
{
	if (b == 0)
	{
		if (op == '%')
		{
			ft_putstr("Stop : modulo by zero\n");
			return (0);
		}
		if (op == '/')
		{
			ft_putstr("Stop : division by zero\n");
			return (0);
		}
	}
	return (1);
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{

		return (0);
	}
	return (0);
}
