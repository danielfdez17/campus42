/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 09:21:50 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/27 11:33:33 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# define SUCCESS 1
# define ERROR 2
# define THOUSAND "thousand"
# define MILLION "million"
# define BILLION "billion"
# define TRILLION "trillion"
# define QUADRILLION "quadrillion"
# define QUINTILLION "quintillion"
# define SEXTILLION "sextillion"
# define SEPTILLION "septillion"
# define OCTILLION "octillion"
# define NONILLION "nonillion"
# define DECILLION "decillion"
# define UNDECILLION "undecillion"

void					ft_put_error(char *str);
void					ft_put_success(char *str);
unsigned long long		ft_atoll(char *str);
void					ft_lltoa(long long nb, char *str);
void					ft_split_number(long long nb);
void					handle_single_arg(char *av);
void					handle_two_args(char *av1, char *av2);
void					read_file(char *av);
char					*ft_strstr(char *str, char *to_find);
void					translate_hundreds(int nb);
int						ft_strlen(char *str);
int						check_double(char *str);
char					*get_block_index(int index);

#endif