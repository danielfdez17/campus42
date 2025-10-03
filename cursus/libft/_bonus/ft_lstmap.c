/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 07:46:24 by danfern3          #+#    #+#             */
/*   Updated: 2025/10/03 07:49:38 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_list;
	t_list	*new_elem;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_elem = f(lst);
		if (!new_elem)
			return (NULL);
		if (new_list)
			ft_lstadd(&new_list, new_elem);
		else
			new_list = new_elem;
		lst = lst->next;
	}
	return (new_list);
}
