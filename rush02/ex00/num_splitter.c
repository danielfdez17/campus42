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



/**
 * Concatenates an array of strings in reverse order into a single string.
 * Allocates memory for the result and frees each individual block after
 * concatenation. Returns the concatenated string. The caller is responsible
 * for freeing the memory allocated for the result.
 */
char	*ft_rev_str(int block_count, char **blocks)
{
	char *result;

	result = malloc(4096);
	result[0] = '\0';
	while (block_count--)
	{
		ft_strcat(result, blocks[block_count]);
		if (block_count > 0)
			ft_strcat(result, " ");
		free(blocks[block_count]);
	}
	return (result);
}

/**
 * Helper function for convert_number_from_str_rev. Processes a single block of
 * 3 digits, converts it into a string and adds it to the blocks array. If the
 * block is not zero, it also appends the appropriate power of 1000 to the
 * string.
 */
void	converter_inside_loop(char *nb_str, char **blocks, char *block, int *counters)
{
	fill_block(nb_str, counters[0], block);
	counters[0] -= 3;
	if (ft_strcmp(block, "000") != 0)
	{
		char *part = malloc(MAX_BLOCK_LEN);
		part[0] = '\0';
		if (block[0] != '0')
			part = process_cents(block, part);
		if (block[1] == '1')
			part = process_teens(block, part);
		else
			part = process_units(block, part);
		if (counters[2] > 0)
		{
			part = ft_strcat(part, " ");
			part = ft_strcat(part, read_file(get_block_index(counters[2])));
		}
		blocks[counters[1]++] = part;
	}
	counters[2]++;
}

/**
 * Converts a number string into its corresponding string representation by processing
 * the number in reverse, grouping digits into blocks of three, and appending suffixes 
 * for thousands, millions, etc. The function utilizes helper functions to process 
 * hundreds, tens, and units within each block and constructs the final output by 
 * combining the processed blocks in reverse order.
 */
// counters[0] = i
// counters[1] = block_count
// counters[2] = group_index
char *convert_number_from_str_rev(char *nb_str)
{
	int 	counters[3];
	char    *blocks[MAX_BLOCKS];
	char	block[4];

	counters[0] = ft_strlen(nb_str) - 1;
	counters[2] = 0;
	counters[1] = 0;
	while (counters[0] >= 0)
		converter_inside_loop(nb_str, blocks, block, counters);
	return (ft_rev_str(counters[1], blocks));
}

// LA BUENA
// char *convert_number_from_str_rev(char *nb_str)
// {
//     int len = ft_strlen(nb_str);
//     int i = len - 1;
//     int group_index = 0;

//     char *blocks[MAX_BLOCKS];
//     int block_count = 0;

//     while (i >= 0)
//     {
//         char block[4];
//         get_block(nb_str, i, block);  // bloque de 3 dígitos
//         i -= 3;
//         if (ft_strcmp(block, "000") != 0)
//         {
//             char *part = malloc(MAX_BLOCK_LEN);
//             part[0] = '\0';
//             // Centenas
//             if (block[0] != '0')
// 				part = process_cents(block, part);
//             // Decenas y unidades
//             if (block[1] == '1')
//             {
// 				part = process_teens(block, part);
//                 // char teens[3] = {block[1], block[2], '\0'};
//                 // ft_strcat(part, read_file(teens));
//             }
//             else
//             {
// 				part = process_units(block, part);
//                 // if (block[1] != '0')
//                 // {
//                 //     char tens[3] = {block[1], '0', '\0'};
//                 //     ft_strcat(part, read_file(tens));
//                 //     if (block[2] != '0')
//                 //         ft_strcat(part, " ");
//                 // }
//                 // if (block[2] != '0')
//                 // {
//                 //     char ones[2] = {block[2], '\0'};
//                 //     ft_strcat(part, read_file(ones));
//                 // }
//             }
//             // Sufijo (thousand, million...)
//             if (group_index > 0)
//             {
//                 part = ft_strcat(part, " ");
//                 part = ft_strcat(part, read_file(get_block_index(group_index)));
//             }
//             blocks[block_count++] = part;
//         }

//         group_index++;
//     }

//     // Ahora juntar los bloques en orden inverso
//     // char *result = malloc(4096);
//     // result[0] = '\0';

//     // for (int j = block_count - 1; j >= 0; --j)
//     // {
//     //     ft_strcat(result, blocks[j]);
//     //     if (j > 0)
//     //         ft_strcat(result, " ");
//     //     free(blocks[j]);
//     // }

//     return (ft_rev_str(block_count, blocks));
// }
