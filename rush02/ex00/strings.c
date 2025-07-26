#include <unistd.h>
#include <string.h>
#include "ft_header.h"

void    ft_putstr(char *str, int console)
{
    int i;    i = 0;
    while (str[i] != '\000')
        write(console, &str[i++], 1);
}

int    ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        ++i;
    return (i);
}

void    ft_put_error(char *str)
{
    ft_putstr(str, ERROR);
}

void    ft_put_success(char *str)
{
    ft_putstr(str, SUCCESS);
    ft_putstr("\n", SUCCESS);
}

char    *ft_strstr(char *str, char *to_find)
{
    unsigned int    arr[2];    
    if (to_find[0] == '\0')
        return (&str[0]);
    arr[0] = 0;
    arr[1] = 0;
    while (str[arr[0]] != '\0')
    {
        if (str[arr[0]] == to_find[arr[1]])
            ++arr[1];
        else
        {
            if (to_find[arr[1]] == '\0')
            {
                if (arr[1] != 0)
                    return (&str[arr[0] - arr[1]]);
                return (NULL);
            }
            arr[1] = 0;
        }
        ++arr[0];
    }
    if (str[arr[0]] == to_find[arr[1]])
        return (&str[arr[0] - arr[1]]);
    return (NULL);
}