#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lend;
	size_t	lens;

	lend = ft_strlen(dst);
	lens = ft_strlen(src);
	if (lend > size)
		return (size + lens);
	i = 0;
	while ((i + lend < size - 1) && src[i])
	{
		dst[i + lend] = src[i];
		i++;
	}
	dst[i + lend] = '\0';
	return (lend + lens);
}
