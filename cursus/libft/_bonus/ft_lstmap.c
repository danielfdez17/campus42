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
		if (!(new_elem = f(lst)))
			return (NULL);
		if (new_list)
			ft_lstadd(&new_list, new_elem);
		else
			new_list = new_elem;
		lst = lst->next;
	}
	return (new_list);
}
