/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:03:56 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/22 13:07:42 by danfern3         ###   ########.fr       */
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

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*list;
	t_list	*prev_ptr;
	int		i;

	i = size -1;
	while (i--)
	{
		
	}
	return (list);
}