#include "libft.h"

int					ft_strncmp(const char *s1, const char *s2, size_t len)
{
	unsigned char	*c1;
	unsigned char	*c2;
	size_t			i;

	i = 0;
	c1 = (unsigned char*)s1;
	c2 = (unsigned char*)s2;
	while (i < len)
	{
		if (*c1 != *c2)
			return (*c1 - *c2);
		if (!*c1 && !*c2)
			return (0);
		i++;
		c1++;
		c2++;
	}
	return (0);
}
