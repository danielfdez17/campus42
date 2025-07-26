#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_header.h"

const char *big_units[] = {
    "", "thousand", "million", "billion", "trillion",
    "quadrillion", "quintillion", "sextillion",
    "septillion", "octillion", "nonillion", "decillion", "undecillion"
};


char    *ft_read_until_endline(char *str)
{
	char *ptr;
	int i = 0; int counter = 0;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
		++i;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == ':'))
		++i;
	while (str[i] != '\0' && str[i] >= 32 && str[i++] <= 126)
		counter++;
	ptr = malloc(sizeof(char) * counter);
	if (ptr == NULL)
		return (NULL);
	int j = 0;
	while (j < counter)
	{
		ptr[j] = str[i - counter + j];
		++j;
	}
	return (ptr);
}

void    read_line(char *av, char *buffer)
{
	char * ptr = ft_strstr(buffer, av);
	if (ptr == NULL)
	{
		ft_put_error("Dict Error\n");
		return ;    
	}
	ptr = ft_read_until_endline(ptr);
	ft_put_success(ptr);
}

void    read_file(long long nb, char *av)
{
	int fd;
	char buffer[1024];
	
	nb *= 1;
	fd = open("./dicts/numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		ft_put_error("\nError opening file");
		return ;
	}
    read(fd, buffer, sizeof(buffer));
	read_line(av, buffer);
	close(fd);
}

void    read_file_rec(long long nb, char *av)
{
	int fd;
	char buffer[1024];
	
	nb *= 1;
	fd = open("./dicts/numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		ft_put_error("Error opening file\n");
		return ;
	}    read(fd, buffer, sizeof(buffer));
	read_line(av, buffer);
	
	close(fd);
}

// void    ft_split_number(long long nb)
// {
//     int zero_counter = 0;
//     int remainder = 0;
//     if (nb > 20)
//     {
//         remainder = nb % 10;
//         if (remainder == 0)
//         {
//             zero_counter++;
//         }
//         else
//         {
//             read_file(remainder, "\0");
//         }
//         return ;
//     }
	
// }

// void ft_split_number(long long nb)
// {
//     if (nb <= 20) // 0-20 son directos
// 	{
//         char str[20];
// 		ft_lltoa(nb, str); // convierte a string
// 		read_file(nb, str);
// 	}
// 	else if (nb < 100)
// 	{
// 		int tens = (nb / 10) * 10;
// 		int units = nb % 10;

// 		char str[20];

// 		ft_lltoa(tens, str);
// 		read_file(tens, str);

// 		if (units != 0)
// 		{
// 			ft_put_success(" ");
// 			ft_lltoa(units, str);
// 			read_file(units, str);
// 		}
// 	}
// 	else if (nb < 1000)
// 	{
// 		int hundreds = nb / 100;
// 		int rest = nb % 100;

// 		char str[20];

// 		ft_lltoa(hundreds, str);
// 		read_file(hundreds, str);
// 		ft_put_success(" ");
// 		read_file(100, "100");

// 		if (rest != 0)
// 		{
// 			ft_put_success(" ");
// 			ft_split_number(rest);
// 		}
// 	}
// }

void ft_split_number(long long nb)
{
    char str[50];
    ft_lltoa(nb, str);

    int len = ft_strlen(str);
    int num_blocks = (len + 2) / 3;
    int start = len % 3;
    if (start == 0) start = 3;

    int block_index = num_blocks - 1;

    for (int i = 0; i < len;)
    {
        char block[4] = {0};
        int j = 0;

        // Copia 3 dígitos del bloque
        while (j < 3 && str[i])
        {
            block[j++] = str[i++];
        }

        long long block_val = ft_atoull(block);

        if (block_val != 0)
        {
            translate_hundreds(block_val); // convierte 3 dígitos en palabras
            if (block_index > 0)
            {
                ft_put_success(" ");
                read_file(0, (char *)big_units[block_index]); // ej: thousand
            }
            if (i < len) ft_put_success(" ");
        }
        block_index--;
    }
}

void translate_hundreds(int nb)
{
    char str[10];

    if (nb >= 100)
    {
        int hundreds = nb / 100;
        ft_lltoa(hundreds, str);
        read_file(hundreds, str);
        ft_put_success(" ");
        read_file(100, "100");
        nb = nb % 100;
        if (nb) ft_put_success(" ");
    }

    if (nb > 20)
    {
        int tens = (nb / 10) * 10;
        int units = nb % 10;
        ft_lltoa(tens, str);
        read_file(tens, str);
        if (units)
        {
            ft_put_success(" ");
            ft_lltoa(units, str);
            read_file(units, str);
        }
    }
    else if (nb > 0)
    {
        ft_lltoa(nb, str);
        read_file(nb, str);
    }
}
