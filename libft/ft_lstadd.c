#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list	*ret;

	ret = *alst;
	*alst = new;
	new->next = ret;
}
