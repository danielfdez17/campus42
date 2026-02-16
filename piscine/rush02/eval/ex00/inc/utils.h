/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 07:36:46 by danfern3          #+#    #+#             */
/*   Updated: 2026/01/20 12:31:33 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

#include <unistd.h>

# define RESET 		"\033[0m"
# define RED 		"\033[31m"
# define GREEN 		"\033[32m"
# define YELLOW 	"\033[33m"
# define BLUE 		"\033[34m"
# define MAGENTA 	"\033[35m"
# define CYAN 		"\033[36m"
# define WHITE 		"\033[37m"

static inline void	ft_putstr(const char *str)
{
	while (*str)
		write(1, str++, 1);
}

static inline void	ft_print_error(const char *message)
{
	ft_putstr(RED);
	ft_putstr("[ERROR] ");
	ft_putstr(message);
	ft_putstr("\n");
	ft_putstr(RESET);
}

static inline void	ft_print_info(const char *message)
{
	ft_putstr(YELLOW);
	ft_putstr("[INFO] ");
	ft_putstr(message);
	ft_putstr("\n");
	ft_putstr(RESET);
}

static inline void	ft_print_success(const char *message)
{
	ft_putstr(GREEN);
	ft_putstr("[SUCCESS] ");
	ft_putstr(message);
	ft_putstr("\n");
	ft_putstr(RESET);
}

#endif // UTILS_H