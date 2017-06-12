#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*c1;
	unsigned char	*c2;

	c1 = (unsigned char*)dst;
	c2 = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		*(c1 + i) = *(c2 + i);
		if (*(c1 + i) == (unsigned char)c)
			return (c1 + i + 1);
		i++;
	}
	return (NULL);
}
