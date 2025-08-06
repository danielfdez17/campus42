/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 10:55:21 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/13 13:47:17 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_error(void)
{
	char	*c;

	c = "Has introducido números negativos o 0\n";
	write(1, c, 40);
}

void	print(int i, int j, int x, int y)
{
	if (i == 0 && j == 0)
		ft_putchar('/');
	else if (i == x - 1 && j == 0)
		ft_putchar('\\');
	else if (i == 0 && j == y - 1)
		ft_putchar('\\');
	else if (i == x - 1 && j == y - 1)
		ft_putchar('/');
	else if (((0 < i && i < x - 1) && (j == 0 || j == y - 1))
		|| ((i == 0 || i == x - 1) && (0 < j && j < y - 1)))
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x <= 0 || y <= 0)
	{
		print_error();
		return ;
	}
	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			print(i, j, x, y);
			++i;
		}
		++j;
		ft_putchar('\n');
	}
}
