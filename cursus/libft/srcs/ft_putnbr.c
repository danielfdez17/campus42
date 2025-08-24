#include "libft.h"

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		if (n != -2147483648)
			ft_putnbr(-n);
		else
		{
			ft_putnbr(n / -10);
			ft_putnbr(-(n % 10));
		}
		return ;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
		return ;
	}
	ft_putchar('0' + n);
}