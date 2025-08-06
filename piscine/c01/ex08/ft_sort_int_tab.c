/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 08:22:05 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/15 07:54:31 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// void	print_tab(int tab[], int size)
// {
// 	int	i;
// 	char	c;

// 	i = 0;
// 	while (i < size)
// 	{
// 		c = '0' + tab[i];
// 		write(1, &c, 1);
// 		++i;
// 	}
// 	c = '\n';
// 	write(1, &c, 1);
// }

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
				ft_swap(&tab[j], &tab[j + 1]);
			++j;
		}
		++i;
	}
}

// int main(void)
// {
// 	int tab[8] = {1, 3, 5, 7, 8, 6, 4, 2};
// 	int size = 8;
// 	print_tab(tab, size);
// 	ft_sort_int_tab(tab, size);
// 	print_tab(tab, size);
// }
