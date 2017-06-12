#include "libft.h"

void				ft_putendl(char const *s)
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
	write(1, "\n", 1);
}
