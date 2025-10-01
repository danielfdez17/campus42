#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;
	t_list	*prev;

	ptr = lst;
	prev = NULL;
	while (ptr != NULL)
	{
		prev = ptr;
		ptr = ptr->next;
	}
	return (prev);
}
