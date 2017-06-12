#include "libft.h"

void					*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*s1;
	unsigned char		*s2;

	s1 = (unsigned char*)dst;
	s2 = (unsigned char*)src;
	if ((s2 < s1) && (s1 < s2 + len))
	{
		s1 = s1 + len;
		s2 = s2 + len;
		while (len--)
			*--s1 = *--s2;
	}
	else
		while (len--)
			*s1++ = *s2++;
	return (dst);
}
