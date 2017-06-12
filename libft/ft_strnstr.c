#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	it;
	size_t	i;
	size_t	j;
	char	*ret;

	ret = (char*)big;
	i = 0;
	j = 0;
	if (!*little)
		return (ret);
	while ((j < len) && ret[i])
	{
		it = 0;
		if (i < len)
			j = i;
		while (little[it] == ret[i + it] && j++ < len)
		{
			if (little[it + 1] == '\0')
				return (ret + i);
			it++;
		}
		i++;
		j++;
	}
	return (NULL);
}
