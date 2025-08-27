#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*ptr;
	t_list	*aux;

	if (alst && *alst && del)
	{
		ptr = *alst;
		while (ptr)
		{
			aux = ptr;
			ptr = ptr->next;
			del((aux)->content, (aux)->content_size);
			free(aux);
			aux = NULL;
		}
	}
}
