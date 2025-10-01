#include "../includes/libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *))
{
	if (alst && *alst && del)
	{
		del((*alst)->content);
		free(*alst);
		*alst = NULL;
	}
}
