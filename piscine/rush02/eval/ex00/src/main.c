

#include "rush02.h"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		// ! value to convert
		ft_print_info("Unimplemented feature: value to convert");
	}
	else if (ac == 3)
	{
		// ! dictionary file
		// ! value to convert
		ft_print_info("Unimplemented feature: dictionary file andvalue to convert");
	}
	else
	{
		(void)av;
		ft_print_error("Invalid number of arguments. Usage: ./rush02 [dictionary_file] value");
	}
	return (0);
}
