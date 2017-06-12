#include "libft.h"

t_list				*ft_lstnew(void const *content, size_t content_size)
{
	t_list			*nstruct;

	nstruct = (t_list*)malloc(sizeof(t_list));
	if (!nstruct)
		return (NULL);
	nstruct->next = NULL;
	if (!content)
	{
		nstruct->content = NULL;
		nstruct->content_size = 0;
		return (nstruct);
	}
	nstruct->content = (void*)malloc(content_size);
	if (!nstruct->content)
		return (NULL);
	ft_memcpy(nstruct->content, content, content_size);
	nstruct->content_size = content_size;
	return (nstruct);
}
