/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_transaltor.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 08:44:25 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/27 11:53:08 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_header.h"

// void	gte_1000(int *nb, char **str)
// {
// 	int	thousands;

// 	thousands = *nb / 1000;
// 	ft_lltoa(thousands, *str);
// 	read_file(*str);
// 	ft_put_success(" ");
// 	read_file("1000");
// 	*nb = *nb % 1000;
// 	if (*nb)
// 		ft_put_success(" ");
// }

void	gte_100(int *nb, char **str)
{
	int	hundreds;

	hundreds = *nb / 100;
	ft_lltoa(hundreds, *str);
	read_file(*str);
	ft_put_success(" ");
	read_file("100");
	*nb = *nb % 100;
	if (*nb)
		ft_put_success(" ");
}

void	gt_20(int *nb, char **str)
{
	int	tens;
	int	units;

	tens = (*nb / 10) * 10;
	units = *nb % 10;
	ft_lltoa(tens, *str);
	read_file(*str);
	if (units)
	{
		ft_put_success(" ");
		ft_lltoa(units, *str);
		read_file(*str);
	}
}

void	translate_hundreds(int nb)
{
	char	*str;

	str = malloc(sizeof(char) * 10);
	if (nb >= 100)
		gte_100(&nb, &str);
	if (nb > 20)
		gt_20(&nb, &str);
	else if (nb > 0)
	{
		ft_lltoa(nb, str);
		read_file(str);
	}
	free(str);
}

// void translate_hundreds(int nb)
// {
//     char	str[10];
// 	int	hundreds;
// 	int	tens;
// 	int	units;

//     if (nb >= 100)
//     {
//         hundreds = nb / 100;
//         ft_lltoa(hundreds, str);
//         read_file(str);
//         ft_put_success(" ");
//         read_file("100");
//         nb = nb % 100;
//         if (nb)
// 			ft_put_success(" ");
//     }
//     if (nb > 20)
//     {
//         tens = (nb / 10) * 10;
//         units = nb % 10;
//         ft_lltoa(tens, str);
//         read_file(str);
//         if (units)
//         {
//             ft_put_success(" ");
//             ft_lltoa(units, str);
//             read_file(str);
//         }
//     }
//     else if (nb > 0)
//     {
//         ft_lltoa(nb, str);
//         read_file(str);
//     }
// }
