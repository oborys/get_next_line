#include "libft.h"

char				*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t			i;

	i = 0;
	while (len != 0 && src[i])
	{
		dst[i] = src[i];
		i++;
		len--;
	}
	while (len != 0)
	{
		dst[i++] = '\0';
		len--;
	}
	return (dst);
}
