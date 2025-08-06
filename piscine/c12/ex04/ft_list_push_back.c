/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 12:31:18 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/22 12:34:57 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*ret;

	ret = malloc(sizeof(t_list));
	ret->data = data;
	ret->next = NULL;
	return (ret);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*ptr;
	t_list	*prev_ptr;

	ptr = begin_list[0];
	while (ptr != NULL)
	{
		prev_ptr = ptr;
		ptr = ptr->next;
	}
	ptr = ft_create_elem(data);
	prev_ptr->next = ptr;
}
