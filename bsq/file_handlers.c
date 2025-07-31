/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_handlers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orhernan <orhernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 10:26:16 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/30 17:41:49 by orhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "ft_header.h"

/**
 * Copies the segment from i - num_letters until counter 
 * j reaches num_letters
 */
char	*ft_copy_segment(char *dest, char *src, int i, int num_letters)
{
	int	j;

	j = 0;
	while (j < num_letters)
	{
		dest[j] = src[i - num_letters + j];
		++j;
	}
	dest[j] = '\0';
	return (dest);
}

/**
 * Initializes the elements of the array
 * to simplify the number of variables
 * @note counters[0] = i
 * @note counters[1] = num_letters
 * @note counters[2] = end_line_counter
 */
void	ft_init_counters(int *counters)
{
	counters[0] = 0;
	counters[1] = 0;
	counters[2] = 0;
}

/**
 * Given a string, this function will return the string value
 * of the dictionary key.
 * The returned string will be terminated by
 * a null character.
 * @note counters[0] = i
 * @note counters[1] = num_letters
 * @note counters[2] = end_line_counter
 */
char	*ft_read_until_endline(int index, char *str)
{
	char	*ptr;
	int		counters[3];

	ft_init_counters(counters);
	while (str[counters[0]] != '\0')
	{
		if (str[counters[0]] == '\n')
		{
			counters[2]++;
			if (counters[2] == index + 1)
				break ;
			else
				counters[1] = 0;
		}
		else if (str[counters[0]] >= 32 && str[counters[0]] <= 126)
			counters[1]++;
		++counters[0];
	}
	ptr = malloc(sizeof(char) * counters[1] + 1);
	if (ptr == NULL)
		return (NULL);
	return (ft_copy_segment(ptr, str, counters[0], counters[1]));
}

/**
 * Returns either the @param index line or NULL
 * if that line doesn't exist in the buffer
 */
char	*read_index_line(int index, char *buffer)
{
	char	*ptr;

	ptr = ft_read_until_endline(index, buffer);
	if (ptr == NULL)
	{
		ft_put_error("Dict Error\n");
		return (NULL);
	}
	return (ptr);
}

/**
 * Reads the contents of @param str and searches for 
 * the occurrence of the given string 'str' within the file. 
 * If found, processes the string starting from the position
 *  of 'str' to extract and return a new string omitting
 * the number, colon, and spaces at the beginning. 
 * Returns NULL and prints an error if 'str' is not found in the file.
 */
t_matrix	*read_file(char *filepath)
{
	int		fd;
	char	buffer[MAX_BUFFER * 5];

	fd = open(filepath, O_RDONLY);
	if (fd == -1)
	{
		ft_put_error("\nError opening file");
		return (NULL);
	}
	read(fd, buffer, sizeof(buffer));
	close(fd);
	return (is_valid_matrix(buffer));
}
