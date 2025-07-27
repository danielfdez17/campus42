/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_handlers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 09:02:28 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/27 09:04:31 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_header.h"

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return ((unsigned char) s1[i] - (unsigned char) s2[i]);
        ++i;
    }
    return (0);
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (dest[i] != '\0' && src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        ++i;
    }
    return (dest);
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

int    ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        ++i;
    return (i);
}

char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    while (dest[i] != '\0')
        ++i;
    j = 0;
    while (src[j] != '\0')
        dest[i++] = src[j++];
    dest[i] = '\0';
    return (dest);
}