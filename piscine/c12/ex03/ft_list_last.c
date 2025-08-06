/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 12:28:50 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/22 12:30:02 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *ptr;
	t_list *prev_ptr;
	
	ptr = begin_list;
	while (ptr != NULL)
	{
		prev_ptr = ptr;
		ptr = ptr->next;
	}
	return (prev_ptr);
}
