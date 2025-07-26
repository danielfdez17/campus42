#include "ft_header.h"

// void    handle_single_arg(char *av)
// {
//     long long   n;    n = ft_atoull(av);
//     if (n < 0)
//     {
//         ft_put_error("Error\n");
//         return ;
//     }
//     // ft_putnbr(n);
//     // ft_put_success("\tNot error\n");
//     if (n <= 20)
//         read_file(n, av);
//     else
//     {
//         read_file_rec(n, av);
//     }
// }

void handle_single_arg(char *av)
{
	long long n = ft_atoull(av);
	if (n < 0)
	{
		ft_put_error("Error\n");
		return;
	}
	ft_split_number(n);
}


void    handle_two_args(char *av1, char *av2)
{
	*av1 = *av2;
	handle_single_arg(av2);
}