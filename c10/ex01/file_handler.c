/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 09:32:44 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/28 12:29:23 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_header.h"

/**
 * Reads the contents of @param file_name and prints its 
 * content in the terminal.
 * If the file cannot be read, it prints an error message.
 */
void	read_file(char *file_name)
{
	int		fd;
	char	buffer[MAX_BLOCK_LEN];

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		ft_put_error("No such file or directory.\n");
		return ;
	}
	read(fd, buffer, sizeof(buffer));
	ft_put_success(buffer);
	ft_put_success("\n");
	close(fd);
}

void	read_files(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		read_file(av[i]);
		++i;
	}
}