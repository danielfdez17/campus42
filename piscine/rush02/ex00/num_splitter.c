/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_splitter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 08:47:56 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/27 17:36:22 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_header.h"

/**
 * Concatenates an array of strings in reverse order
 * into a single string.
 * Allocates memory for the result and frees
 * each individual block after
 * concatenation. Returns the concatenated string.
 * The caller is responsible
 * for freeing the memory allocated for the result.
 */
char	*ft_rev_str(int block_count, char **blocks)
{
	char	*result;

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
 * Helper function for convert_number_from_str_rev. 
 * Processes a single block of
 * 3 digits, converts it into a string and adds 
 * it to the blocks array. If the
 * block is not zero, it also appends the 
 * appropriate power of 1000 to the
 * string.
 * @note counters[0] = i
 * @note counters[1] = block_count
 * @note counters[2] = group_index
 * @note block_part[0] = block
 * @note block_part[1] = part
 */
void	converter_inside_loop(char *nb_str, char **blocks, \
		char **block_part, int *counters)
{
	fill_block(nb_str, counters[0], block_part[0]);
	counters[0] -= 3;
	if (ft_strcmp(block_part[0], "000") != 0)
	{
		block_part[1] = malloc(MAX_BLOCK_LEN);
		block_part[1][0] = '\0';
		if (block_part[0][0] != '0')
			block_part[1] = process_cents(block_part[0], block_part[1]);
		if (block_part[0][1] == '1')
			block_part[1] = process_teens(block_part[0], block_part[1]);
		else
			block_part[1] = process_units(block_part[0], block_part[1]);
		if (counters[2] > 0)
		{
			block_part[1] = ft_strcat(block_part[1], " ");
			block_part[1] = ft_strcat(block_part[1], \
			read_file(get_block_index(counters[2])));
		}
		blocks[counters[1]++] = block_part[1];
	}
	counters[2]++;
}

/**
 * Converts a number string into its corresponding string 
 * representation by processing
 * the number in reverse, 
 * grouping digits into blocks of three, and appending suffixes 
 * for thousands, millions, etc. 
 * The function utilizes helper functions to process 
 * hundreds, tens, and units within each 
 * block and constructs the final output by 
 * combining the processed blocks in reverse order.
 * If two free are done, it causes an execution error
 * @note counters[0] = i
 * @note counters[1] = block_count
 * @note counters[2] = group_index
 * @note block_part[0] = block
 * @note block_part[1] = part
 */
char	*convert_number_from_str_rev(char *nb_str)
{
	int		counters[3];
	char	*blocks[MAX_BLOCKS];
	char	*block_part[2];

	(*block_part) = malloc(sizeof(char) * 2);
	counters[0] = ft_strlen(nb_str) - 1;
	counters[2] = 0;
	counters[1] = 0;
	while (counters[0] >= 0)
		converter_inside_loop(nb_str, blocks, block_part, counters);
	free((*block_part));
	return (ft_rev_str(counters[1], blocks));
}
