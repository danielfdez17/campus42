/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 10:36:42 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/11 12:21:18 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numero(char comb[7])
{
	if (comb[0] == '9'
		&& comb[1] == '8'
		&& comb[3] == '9'
		&& comb[4] == '9')
	{
		write(1, comb, 5);
	}
	else
	{
		write(1, comb, 7);
	}
}

void	ft_process_second_couple(char comb[7])
{
	while (comb[3] <= '9')
	{
		comb[4] = comb[1] + 1;
		while (comb[4] <= '9')
		{
			ft_print_numero(comb);
			comb[4]++;
		}
		comb[4] = '0';
		comb[3]++;
	}
}

void	ft_print_comb2(void)
{
	char	comb[7];

	comb[0] = '0';
	comb[1] = '0';
	comb[2] = ' ';
	comb[3] = '0';
	comb[4] = '0';
	comb[5] = ',';
	comb[6] = ' ';
	while (comb[0] <= '9')
	{
		while (comb[1] <= '8')
		{
			ft_process_second_couple(comb);
			if (comb[1] == '9')
				comb[3] = comb[0] + 1;
			else
				comb[3] = '0';
			comb[1]++;
		}
		comb[1] = '0';
		comb[0]++;
	}
}

// int	main(void)
// {
//     ft_print_comb2();
// 	return 0;
// }