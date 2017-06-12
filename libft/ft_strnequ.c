#include "libft.h"

int			ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (0);
		if (!s1[i] && !s2[i])
			return (1);
		i++;
	}
	return (1);
}