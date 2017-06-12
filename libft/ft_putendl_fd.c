#include "libft.h"

void				ft_putendl_fd(char const *s, int fd)
{
	unsigned long	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
