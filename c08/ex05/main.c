/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:00:14 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/28 08:00:26 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int n);
void				ft_show_tab(struct s_stock_str *par);
int					ft_strlen(char *str);
char				*ft_strcpy(char *dest, char *src);
struct s_stock_str	get_struct_stock(int size, char *str);
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	main(int ac, char **av)
{
	ft_show_tab(ft_strs_to_tab(ac, av));
	return (0);
}
