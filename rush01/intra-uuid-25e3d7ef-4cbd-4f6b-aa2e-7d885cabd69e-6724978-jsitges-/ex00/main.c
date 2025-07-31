/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoto-ga <dsoto-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 08:26:19 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/20 18:00:52 by dsoto-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 

// void	print_argc_error(void);
int		ft_solver(char **map, char **prs_map, int pos);
int		ft_strlen(char *str);
int		*parse_int(char *input);
int		**create_map(void);
void	free_map(int **map);

int	main(int argc, char **argv)
{
	char	**map;

	map = create_map();
	if (argc != 2 || ft_strlen(*argv[1]) != 31)
		write (1, "Error\n", 6);
	else
		ft_solver(map, parse_int(*argv[1]), 0);
	free_map(create_map());
	return (0);
}
