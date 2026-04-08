/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 09:27:50 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/28 12:28:52 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# define SUCCESS 1
# define ERROR 2
# define MAX_BLOCK_LEN 2048

void	ft_put_error(char *str);
void	ft_put_success(char *str);
void	read_file(char *file_name);
void	read_files(int ac, char **av);

#endif