#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}void    ft_putnbr(unsigned long long nb)
{
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
        return ;
    }
    ft_putchar('0' + nb);
}