#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*nlist;
	t_list	*tmp;
	size_t	i;

	if (!lst)
		return (NULL);
	tmp = lst;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	if (!(nlist = (t_list*)malloc(sizeof(t_list) * (i + 1))))
		return (NULL);
	nlist = f(lst);
	tmp = nlist;
	while (lst->next)
	{
		lst = lst->next;
		nlist->next = f(lst);
		nlist = nlist->next;
	}
	return (tmp);
}
