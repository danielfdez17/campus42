/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_handlers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 10:26:16 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/28 15:34:32 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_header.h"

/**
 * Given a string, this function will return the string value
 * of the dictionary key.
 * The returned string will be terminated by
 * a null character.
 */
char	*ft_read_until_endline(char *str)
{
	char	*ptr;
	int		i;
	int		j;
	int		counter;

	i = 0;
	counter = 0;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
		++i;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == ':'))
		++i;
	while (str[i] != '\0' && str[i] >= 32 && str[i++] <= 126)
		counter++;
	ptr = malloc(sizeof(char) * counter);
	if (ptr == NULL)
		return (NULL);
	j = 0;
	while (j < counter)
	{
		ptr[j] = str[i - counter + j];
		++j;
	}
	ptr[j] = '\0';
	return (ptr);
}

/**
 * Searches for the occurrence of a string 'str' within the given 'buffer'.
 * If found, processes the string starting from 
 * the position of 'str' to extract
 * and return a new string omitting the number, 
 * colon, and spaces at the beginning.
 * Returns NULL and prints an error if 'str' 
 * is not found in 'buffer'.
 */
char	*read_line(char *str, char *buffer)
{
	char	*ptr;

	ptr = ft_strstr(buffer, str);
	if (ptr == NULL)
	{
		ft_put_error("Dict Error\n");
		return (NULL);
	}
	return (ft_read_until_endline(ptr));
}

/**
 * Reads the contents of "./dicts/numbers.dict" and searches for 
 * the occurrence of the given string 'str' within the file. 
 * If found, processes the string starting from the position
 *  of 'str' to extract and return a new string omitting
 * the number, colon, and spaces at the beginning. 
 * Returns NULL and prints an error if 'str' is not found in the file.
 */
char	*read_file(char *str)
{
	int		fd;
	char	buffer[1024];
	char	*ptr;

	fd = open("./dicts/numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		ft_put_error("\nError opening file");
		return (NULL);
	}
	read(fd, buffer, sizeof(buffer));
	ptr = read_line(str, buffer);
	close(fd);
	return (ptr);
}
