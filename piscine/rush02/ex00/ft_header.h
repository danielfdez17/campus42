/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 09:21:50 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/27 16:54:51 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# define SUCCESS 1
# define ERROR 2
# define THOUSAND "1000"
# define MILLION "1000000"
# define BILLION "1000000000"
# define TRILLION "1000000000000"
# define QUADRILLION "1000000000000000"
# define QUINTILLION "1000000000000000000"
# define SEXTILLION "1000000000000000000000"
# define SEPTILLION "1000000000000000000000000"
# define OCTILLION "1000000000000000000000000000"
# define NONILLION "1000000000000000000000000000000"
# define DECILLION "1000000000000000000000000000000000"
# define UNDECILLION "1000000000000000000000000000000000000"
# define MAX_BLOCKS 20
# define MAX_BLOCK_LEN 256

void					ft_put_error(char *str);
void					ft_put_success(char *str);

long long				ft_atoll(char *str);
void					ft_lltoa(long long nb, char *str);
int						is_double(char *str);

void					handle_single_arg(char *av);
void					handle_two_args(char *av1, char *av2);

void					fill_block(char *src, int i, char *out);
char					*get_block_index(int index);
char					*convert_number_from_str_rev(char *nb_str);
char					*process_cents(char *block, char *part);
char					*process_teens(char *block, char *part);
char					*process_units(char *block, char *part);

char					*ft_strstr(char *str, char *to_find);
int						ft_strlen(char *str);
int						ft_strcmp(char *s1, char *s2);
char					*ft_strncpy(char *s1, char *s2, unsigned int n);
char					*ft_strcat(char *dest, char *src);

char					*read_file(char *str);
char					*read_line(char *str, char *buffer);

#endif