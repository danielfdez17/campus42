/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_checker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 09:04:03 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/27 11:25:24 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Checks if the string contains a decimal number
int	check_double(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		if (str[i++] == '.')
			return (1);
	return (0);
}
