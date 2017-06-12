#include "libft.h"

char		*ft_strstr(const char *big, const char *little)
{
	int		i;
	int		j;
	char	*ret;

	ret = (char*)big;
	i = 0;
	if (!*little)
		return (ret);
	while (ret[i])
	{
		j = 0;
		while (little[j] == ret[i + j])
		{
			if (little[j + 1] == '\0')
				return (ret + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
