/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 12:24:50 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/22 12:27:57 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

int	ft_list_size(t_list *begin_list)
{
	int	i;
	t_list *ptr;
	
	i = 0;
	ptr = begin_list;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		++i;
	}
	return (i);
}
