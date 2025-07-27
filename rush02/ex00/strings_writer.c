/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings_writer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 09:20:16 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/27 10:07:18 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include "ft_header.h"

void    ft_putstr(char *str, int console)
{
    int i;    i = 0;
    while (str[i] != '\000')
        write(console, &str[i++], 1);
}

void    ft_put_error(char *str)
{
    ft_putstr(str, ERROR);
}

void    ft_put_success(char *str)
{
    ft_putstr(str, SUCCESS);
}
