#include <stdio.h>
#include <stdlib.h>
#include "ft_header.h"

int main(int ac, char **av)
{
	if (ac < 2 || ac > 3)
	{
		ft_put_error("Error: either 1 or 2 args are needed\n");
		return (0);
	}
	if (ac == 2)
	{
		handle_single_arg(av[1]);
	}
	else
	{
		handle_two_args(av[1], av[2]);
	}
	
	// ft_putnbr(ft_atoi(av[1]));
	// ft_put_success("\n");
	return (0);
}

// int main(void)
// {
// 	handle_single_arg("45");
//     return (0);
// }