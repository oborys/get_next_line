#include "libft.h"

void				ft_putstr(char const *s)
{
	unsigned long	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}
