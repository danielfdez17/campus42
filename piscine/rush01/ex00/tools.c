/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoto-ga <dsoto-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 12:46:26 by dsoto-ga          #+#    #+#             */
/*   Updated: 2025/07/20 13:45:20 by dsoto-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	*parse_int(char *input)
{
	int		i;
	int		j;
	int		*parsed_array;

	parsed_array = malloc(16);
	i = 0;
	j = 0;
	while (input[i])
	{
		if (input[i] != 32)
		{
			parsed_array[j] = input[i] - '0';
			j++;
		}
		i++;
	}
	parsed_array[j] = '\0';
	return (parsed_array);
}
