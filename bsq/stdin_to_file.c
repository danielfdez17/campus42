/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdin_to_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orhernan <orhernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 12:32:05 by orhernan          #+#    #+#             */
/*   Updated: 2025/07/30 18:31:55 by orhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "ft_header.h"

/**
 * It prints a string to STDOUT
 */
void	print_string(char *str)
{
	ft_putstr(str, STDOUT);
}

void	line_write(int fd)
{
	ssize_t	bytes_read;
	char	line_buffer[1024];

	print_string("> ");
	bytes_read = read(STDIN_FILENO, line_buffer, sizeof(line_buffer));
	if (bytes_read > 0)
		write(fd, line_buffer, bytes_read);
}

/**
 * It checks recieves a filname and writes the stdin to the file line by line
 */
void	stdin_to_file(char *filename)
{
	ssize_t	bytes_read;
	char	num_buffer[16];
	int		file_descriptor;
	int		i;

	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file_descriptor == -1)
	{
		print_string("Error: Could not open or create file");
		return ;
	}
	print_string("Enter the number of rows and (empty obstacles fill) chars: ");
	bytes_read = read(STDIN_FILENO, num_buffer, sizeof(num_buffer));
	num_buffer[bytes_read] = '\0';
	write(file_descriptor, num_buffer, bytes_read);
	i = 0;
	while (i < ft_atoi(num_buffer))
	{
		line_write(file_descriptor);
		i++;
	}
	print_string("\nContent written to file\n");
	close(file_descriptor);
}
