/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_splitter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 08:47:56 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/27 11:25:58 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_header.h"

// block_index = counters[0]
// len = counters[1]
// i = counters[2]
// j = counters[3]
void	inside_loop(char *block, char *str, \
		int *counters, long long *block_val)
{
	counters[3] = 0;
	while (counters[3] < 3 && str[counters[2]])
		block[counters[3]++] = str[counters[2]++];
	*block_val = ft_atoll(block);
	if (*block_val != 0)
	{
		translate_hundreds(*block_val);
		if (counters[0] > 0)
		{
			ft_put_success(" ");
			read_file(get_block_index(counters[0]));
		}
		if (counters[2] < counters[1])
			ft_put_success(" ");
	}
}

// block_index = counters[0]
// len = counters[1]
// i = counters[2]
// j = counters[3]
// num_blocks = counters[4]
void	ft_split_number(long long nb)
{
	char		str[50];
	char		block[4];
	int			counters[5];
	int			start;
	long long	block_val;

	block_val = 0;
	counters[1] = ft_strlen(str);
	counters[4] = (counters[1] + 2) / 3;
	start = counters[1] % 3;
	ft_lltoa(nb, str);
	if (start == 0)
		start = 3;
	counters[0] = counters[4] - 1;
	while (counters[2] < counters[1])
	{
		inside_loop(block, str, counters, &block_val);
		counters[0]--;
	}
}

// void ft_split_number(long long nb)
// {
//     char str[50];
//     ft_lltoa(nb, str);

//     int len = ft_strlen(str);
//     int num_blocks = (len + 2) / 3;
//     int start = len % 3;
//     if (start == 0) start = 3;

//     int block_index = num_blocks - 1;

//     for (int i = 0; i < len;)
//     {
//         char block[4] = {0};
//         int j = 0;

//         // Copia 3 dígitos del bloque
//         while (j < 3 && str[i])
//         {
//             block[j++] = str[i++];
//         }

//         long long block_val = ft_atoll(block);

//         if (block_val != 0)
//         {
//             translate_hundreds(block_val); // convierte 3 dígitos en palabras
//             if (block_index > 0)
//             {
//                 ft_put_success(" ");
//                 read_file(get_block_index(block_index)); // ej: thousand
//             }
//             if (i < len) ft_put_success(" ");
//         }
//         block_index--;
//     }
// }
