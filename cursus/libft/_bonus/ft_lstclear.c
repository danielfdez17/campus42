#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*aux;

	ptr = *lst;
	while (ptr)
	{
		aux = ptr;
		ptr = ptr->next;
		ft_lstdelone(&aux, del);
	}
	*lst = NULL;
}
