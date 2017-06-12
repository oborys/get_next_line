#include "libft.h"

void		ft_putsize_t(size_t n)
{
	char	c;

	if (n >= 10)
	{
		ft_putsize_t(n / 10);
		ft_putsize_t(n % 10);
	}
	else
	{
		c = n + '0';
		write(1, &c, 1);
	}
}
