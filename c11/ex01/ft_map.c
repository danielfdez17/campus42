/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 10:26:57 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/25 14:09:30 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*solutions;
	int	i;

	solutions = malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		solutions[i] = f(tab[i]);
		++i;
	}
	return (solutions);
}

// #include <math.h>
// #include <stdlib.h>
// #include <stdio.h>
// void	print_tab(int*tab, int size)
// {
// 	int	i = 0;
// 	while (i < size)
// 		printf("%d ", tab[i++]);
// 	printf("\n");

// }
// int	main(int ac, char **av)
// {
// 	printf("ac: %d\n", ac);
// 	int	*tab;
// 	tab = malloc(sizeof(int) * ac - 1);
// 	int	i = 0;
// 	while (i < ac - 1)
// 	{
// 		printf("atoi(%s): %d\n", av[i + 1], atoi(av[i + 1]));
// 		tab[i] = atoi(av[i + 1]);
// 		// printf("tab[%d]: %d\n", i, tab[i]);
// 		++i;
// 	}
// 	print_tab(tab, ac - 1);
// 	print_tab(ft_map(tab, ac - 1, &abs), ac - 1);
// 	return (0);
// }