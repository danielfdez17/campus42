/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_handlers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 10:26:16 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/27 11:44:02 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_header.h"

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
	return (ptr);
}

void	read_line(char *av, char *buffer)
{
	char	*ptr;

	ptr = ft_strstr(buffer, av);
	if (ptr == NULL)
	{
		ft_put_error("Dict Error\n");
		return ;
	}
	ptr = ft_read_until_endline(ptr);
	ft_put_success(ptr);
}

void	read_file(char *av)
{
	int		fd;
	char	buffer[1024];

	fd = open("./dicts/numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		ft_put_error("\nError opening file");
		return ;
	}
	read(fd, buffer, sizeof(buffer));
	read_line(av, buffer);
	close(fd);
}
