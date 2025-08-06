/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 10:54:27 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/25 14:21:25 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	desc_sort;
	int	asc_sort;
	int	difference;

	i = 0;
	desc_sort = 0;
	asc_sort = 0;
	while (i < length - 1)
	{
		difference = f(tab[i], tab[i + 1]);
		if (difference < 0)
			asc_sort++;
		else if (difference > 0)
			desc_sort++;
		else
		{
			asc_sort++;
			desc_sort++;
		}
		++i;
	}
	if (asc_sort == 0 || desc_sort == 0)
		return (1);
	return (0);
}

int	get_diference(int a, int b)
{
	return (a - b);
}

// #include <math.h>
// #include <stdio.h>
// #include <stdlib.h>
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
// 	printf("Is sorted? %d\n", ft_is_sort(tab, ac - 1, &get_diference));
// 	return (0);
// }