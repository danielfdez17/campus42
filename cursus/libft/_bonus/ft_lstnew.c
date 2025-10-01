#include "../includes/libft.h"

t_list	*ft_lstnew(void const *content)
{
	t_list	*result;
	size_t	content_size;

	result = (t_list *)malloc(sizeof(t_list));
	if (!result)
		return (NULL);
	if (!content)
	{
		result->content = NULL;
	}
	else
	{
		content_size = ft_strlen(content) + 1;
		result->content = malloc(sizeof(void *) * content_size);
		if (!result->content)
		{
			free(result);
			return (NULL);
		}
		ft_memcpy(result->content, content, content_size);
	}
	result->next = NULL;
	return (result);
}
