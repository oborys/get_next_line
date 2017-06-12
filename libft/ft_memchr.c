#include "libft.h"

void			*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*m;

	i = 0;
	m = (void*)s;
	while (i < n)
	{
		if (m[i++] == (unsigned char)c)
			return (m + i - 1);
	}
	return (NULL);
}
