/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 09:17:07 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/28 10:46:41 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\000')
		++i;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	get_struct_stock(int size, char *str)
{
	struct s_stock_str	ret;

	ret.copy = malloc(sizeof(char *));
	ret.copy = ft_strcpy(ret.copy, str);
	ret.size = size;
	ret.str = str;
	free(ret.copy);
	return (ret);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*ret;

	i = 0;
	ret = malloc(sizeof(struct s_stock_str) * ac + 1);
	if (ret == NULL)
		return (NULL);
	while (i < ac)
	{
		ret[i] = get_struct_stock(ft_strlen(av[i]), av[i]);
		++i;
	}
	ret[ac].str = 0;
	return (ret);
}

// #include<stdio.h>
// int	main(int ac, char **av)
// {
// 	struct s_stock_str *sol = ft_strs_to_tab(ac, av);	
// 	int i = 0;
// 	while (i < ac)
// 	{
// 		printf("size: %d || str: %s || copy: %s\n", \
// 			sol[i].size, sol[i].str, sol[i].copy);
// 		++i;
// 	}
// 	return (0);
// }