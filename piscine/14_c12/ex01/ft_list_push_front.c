/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:05:48 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/22 12:21:51 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*ret;

	ret = malloc(sizeof(t_list));
	ret->data = data;
	ret->next = NULL;
	return (ret);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*first_elem;
	
	first_elem = ft_create_elem(data);
	if (begin_list == NULL)
	{
	}
	else
	{
		first_elem->next = begin_list[0]->next;
	}
	begin_list[0]->next = first_elem->next;
	begin_list[0]->data = first_elem->data;
}
