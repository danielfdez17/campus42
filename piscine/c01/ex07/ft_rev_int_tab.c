/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 14:52:34 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/14 08:34:26 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	inicio;
	int	final;
	int	tmp;

	inicio = 0;
	final = size - 1;
	while (inicio <= final)
	{
		tmp = tab[inicio];
		tab[inicio] = tab[final];
		tab[final] = tmp;
		++inicio;
		--final;
	}
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

// int main(void)
// {
// 	int tab[8] = {1, 2, 3, 4, 5, 6, 7, 8};
// 	int size = 8;
// 	print_tab(tab, size);
// 	ft_rev_int_tab(tab, size);
// 	print_tab(tab, size);
// }
