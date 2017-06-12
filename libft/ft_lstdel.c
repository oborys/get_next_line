#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*nlist;

	if (!alst || !del)
		return ;
	while (*alst)
	{
		nlist = *alst;
		del((*alst)->content, (*alst)->content_size);
		*alst = (*alst)->next;
	}
	free(nlist);
	nlist = NULL;
}
